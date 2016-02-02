/*
 * NodeRunner.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: cand3952
 */

#include "NodeController.h"
#include "../Model/Node.h"
#include <iostream>
using namespace std;

int main()
{
	NodeController * baseController = new NodeController();
	baseController->start();
	return 0;
}



