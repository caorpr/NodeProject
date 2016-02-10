/*
 * NodeController.h
 *
 *  Created on: Jan 27, 2016
 *      Author: cand3952
 */

#ifndef NODECONTROLLER_H_
#define NODECONTROLLER_H_

#include "../Model/Node.cpp"
#include "../Model/ArrayNode.cpp"
#include "../Model/CTECArray.cpp"
#include <string>
#include <iostream>

using namespace std;

class NodeController
{
private:
	CTECArray<int> * notHipster;
public:
	NodeController();
	virtual ~NodeController();
	void start();


};







#endif /* NODECONTROLLER_H_ */
