#include <iostream>
#include <cstdlib>

#include "BinaryTree.h"

using namespace std;


int main()
{
  // seed random num generator
  // initialize random seed: 
  srand(1000);//time(NULL));

  // create a tree using a loop
  BinaryTree bt;
  const int N = 10;
  for(int i=0;i<N;i++)
  {
     int rndNum = rand()%100;
     cout<<rndNum<<endl;
     bt.insert(rndNum);
  }
  //
  cout<<"print the tree:"<<endl;
  // print the tree
  bt.display(cout);

  return 0;
}
