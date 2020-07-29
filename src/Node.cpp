/*
 * Node.cpp
 *
 *  Created on: Jul 28, 2020
 *      Author: Thomas Wilson
 */

#include "Node.h"
#include <iostream>
using namespace std;
Node::Node() {
	// TODO Auto-generated constructor stub

}
Node::Node(int id){
this->id_ = id;
}
Node::Node(int id, Node child_L, Node child_R){
this->id_ = id;
this->child_L_ = &child_L;
this->child_R_ = &child_R;
}
Node Node::make_tree_(Node root, Node parent, int height){
	if(height > 1){
//		cout << this->id_ << endl;
		parent.set_children_(make_tree_(root, Node(height), height-1), make_tree_(root, Node(height*height*100),height-1));
		return parent;
	}else{
		parent.set_children_(Node(height), Node(height*height*100));
		return root;
	}
}
void Node::set_children_(Node child_L, Node child_R){
	this->child_L_ = &child_L;
	this->child_R_ = &child_R;
}
void Node::set_child_L_(Node child_L){
	this->child_L_ = &child_L;
}
void Node::set_child_R_(Node child_R){
	this->child_R_ = &child_R;
}
Node::~Node() {
	// TODO Auto-generated destructor stub
}

