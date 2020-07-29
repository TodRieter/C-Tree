/*
 * Node.h
 *
 *  Created on: Jul 28, 2020
 *      Author: Thomas Wilson
 */

#ifndef NODE_H_
#define NODE_H_

class Node {
public:
	int id_ = -1;
	Node* child_R_ = nullptr;
	Node* child_L_ = nullptr;
	Node();
	Node(int id);
	Node(int id, Node child_L, Node child_R);
	Node make_tree_(int height);
	static Node make_tree_(Node root, Node parent, int height);
	Node make_tree_(Node parent, int height);
	void set_children_(Node child_L, Node child_R);
	void set_child_L_(Node child_L);
	void set_child_R_(Node child_R);
	virtual ~Node();
};

#endif /* NODE_H_ */
