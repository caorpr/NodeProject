/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: cand3952
 */

#ifndef NODECONTROLLER_H_
#define NODECONTROLLER_H_
#include "../Model/Node.h"
#include "../Model/Node.cpp"
#include "../Model/ArrayNode.h"
#include "../Model/ArrayNode.cpp"
#include <string>
#include <iostream>

using namespace std;

class NodeController
{
private:
	Node<string> stringNode;
	Node<int> intNode;
public:
	NodeController();
	virtual ~NodeController();
	void start();


};







#endif /* NODECONTROLLER_H_ */
