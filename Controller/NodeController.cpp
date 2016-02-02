/*
 * NodeController.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: cand3952
 */

#include "NodeController.h"
#include <iostream>

using namespace std;

NodeController::NodeController()
{
	stringNode.setValue("asssd");
	intNode.setValue(999);

	stringArrayNode.setValue("WERREDFD");
	otherArrayNode.setValue("linked node");
	stringArrayNode.setNext(&otherArrarayNode);
}

NodeController::~NodeController()
{

}


void NodeController :: start()
{
	cout << "The contents of the StringNode are" << stringNode.getValue() << endl;
	cout << "The contents of the stringArrayNode are:" << stringArrayNode.getValue() << endl;
	cout << "This is connected to stringArrayNode" << (*stringArrayNode.getNext()).getValue() << endl;
}


