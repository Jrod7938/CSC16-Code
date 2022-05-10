#include "BinaryTree.h"
#include <vector>
#include <algorithm>

using namespace std;

BinaryTree::BinaryTree()
{
  this->root = 0;
}

bool BinaryTree::insert(DataType data)
{
   // start search at root
   TreeNode *tempNode = root;
   // if tree is empty create root node
   if(tempNode==0)
   {
     root = new TreeNode(data,0,0);
     return true;
   }  
   // if not empty
   TreeNode *prevNode;
   while(tempNode!=0)
   { 
     prevNode = tempNode;
     if(data>tempNode->getData())
       tempNode = tempNode->getRight();
     else
     if(data<tempNode->getData())
       tempNode = tempNode->getLeft();
     else
       return false;
   }
   // create new node
   TreeNode *newNode = new TreeNode(data,0,0);
   if(data>prevNode->getData())
      prevNode->setRight(newNode);
   else
   if(data<prevNode->getData())
      prevNode->setLeft(newNode);
   // return success
   return true;
}

struct LevelData{
  int level;
  DataType data;
};

bool comparelevelData(const LevelData &ld1,const LevelData &ld2){
  return ld1.level<ld2.level;
}

typedef vector<LevelData> LevelDataVector;

void infixRec(TreeNode *root,std::ostream &out,int level, LevelDataVector &ldv){
  //in level counter
  level++;
  // base case
  if(root==0)
    return;
  // inductive part ...
 // go left
  infixRec(root->getLeft(),out,level, ldv);
  // visit
  //out<<level<<" : "<<root->getData()<<std::endl;
  LevelData ld;
  ld.level = level;
  ld.data = root->getData();
  ldv.push_back(ld);

  // go right
  infixRec(root->getRight(), out, level, ldv);
}

void printSpaces(int n){
  for(int i=0; i<n; i++){
    cout << " ";
  }
}

void prettyPrintTree(LevelDataVector &ldv){
  int currentLevel = 0;
  int maxLevel = ldv[ldv.size()-1].level;
  int totalLevels = maxLevel;

  printSpaces(maxLevel);

  for(int i=0; i<ldv.size(); i++){
    if(currentLevel==ldv[i].level){
      cout << ldv[i].data << " ";
    }else{
      currentLevel++;
      maxLevel--;
      cout << endl;
      printSpaces(maxLevel);
      cout << ldv[i].data;
      printSpaces((totalLevels-currentLevel)*2-1);
    }
  }
}

void BinaryTree::display(std::ostream &out)
{
  LevelDataVector ldv;
  // recursively visit all nodes
  infixRec(this->root,out,-1, ldv);
  // sort the vector
  sort(ldv.begin(), ldv.end(), comparelevelData);
  // print the vector
  prettyPrintTree(ldv);
}
