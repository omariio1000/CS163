#include <iostream>
#include "node.h"

using namespace std;

Node::Node() {
  left = NULL;
  right = NULL;
}

Node::~Node() {
  delete &value;
  left = NULL;
  right = NULL;
}

//Getters

Node* Node::getLeft() {
  return left;
}

Node* Node::getRight() {
  return right;
}

char* Node::getValue() {
  return value;
}

//Setters

void Node::setLeft(Node* inLeft) {
  left = inLeft;
}

void Node::setRight(Node* inRight) {
  right = inRight;
}

void Node::setValue(char* inValue) {
  value = inValue;
}
