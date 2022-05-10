#ifndef BINARY_TREE
#define BINARY_TREE

#include <iostream>

#include "TreeNode.h"

class BinaryTree
{
public:
  BinaryTree();
  bool insert(DataType data);
  void display(std::ostream &out);
  
private:
  TreeNode *root;

};

#endif //BINARY_TREE
