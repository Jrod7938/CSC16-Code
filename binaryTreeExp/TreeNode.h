#ifndef TREE_NODE
#define TREE_NODE

typedef int DataType;

class TreeNode
{ 
public:
  TreeNode(DataType data, TreeNode *left, TreeNode *right);
  DataType getData() { return data;  }
  void setData(DataType data)    { this->data = data ;  }
  TreeNode *getLeft()  { return left; }
  void setLeft(TreeNode *left)   { this->left  = left; }
  TreeNode *getRight() { return right; }
  void setRight(TreeNode *right) { this->right = right; }

private:
  // data
  DataType data;
  TreeNode *left;
  TreeNode *right;
};

#endif //TREE_NODE
