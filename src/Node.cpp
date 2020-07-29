/*
 * Node.cpp
 *
 *  Created on: Jul 28, 2020
 *      Author: Thomas Wilson
 */

#include "Node.h"
#include <iostream>
using namespace std;
static Node* root= NULL;
Node::Node() {
	// TODO Auto-generated constructor stub
}
Node::Node(int id){
this->id_ = id;
}
Node::Node(int id, Node child_L, Node child_R){
this->id_ = id;
this->Parent = NULL;
this->Child_L_ = &child_L;
this->Child_R_ = &child_R;
}
Node* Node::Insert(int id, Node* node){
	if(node == NULL){
		node = new Node;
		node->id_ = id;
		node->Child_L_ = NULL;
		node->Child_R_ = NULL;
		node->Parent = NULL;
	}
	else if(node->id_ < id){
		Insert(id, node->Child_R_);
		node->Child_R_->Parent = node;
		cout << node->id_ << endl;
	}else{
		Insert(id, node->Child_L_);
		node->Child_L_->Parent = node;
	}
	return node;
}
void Node::Insert(int id){
	root = Insert(id, root);
}
//static void Node::build_tree_(int depth){
//	for(int i = 0; i < depth; i++){
//		root->Insert(i);
//	}
//}
void Node::print_tree_(Node* node){
	if(node == NULL){
		return;
	}else{
		print_tree_(node->Child_L_);
		cout << node->Child_R_->id_ << endl;
	}
}
void Node::print_tree_(){
	print_tree_(root);
}
void Node::set_children_(Node child_L, Node child_R){
	this->Child_L_ = &child_L;
	this->Child_R_ = &child_R;
}
void Node::set_child_L_(Node child_L){
	this->Child_L_ = &child_L;
}
void Node::set_child_R_(Node child_R){
	this->Child_R_ = &child_R;
}
Node::~Node() {
	// TODO Auto-generated destructor stub
}

