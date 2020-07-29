//============================================================================
// Name        : Tree.cpp
// Author      : ME
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Node.h"
using namespace std;
static Node root = Node(0);
int main() {
	cout << "I am Alive!!" << endl; // prints "I am Alive!!"
	Node::make_tree_(root, root, 7);
	cout << root.child_L_->id_ << endl;
	cout << root.child_R_->id_ <<endl;
	return 0;
}
