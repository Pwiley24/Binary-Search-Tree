#ifndef NODE_H
#define NODE_H
#include <iostream>

using namespace std;

class Node {
 public:
  Node();
  ~Node();
  void setValue(int newVal);
  int getValue();
  Node* getRight();
  Node* getLeft();
  void setRight(Node* newRight);
  void setLeft(Node* newLeft);
  Node* getParent();
  void setParent(Node* newParent);
  
  int value;
  Node* left;
  Node* right;
  Node* parent;
};

#endif
