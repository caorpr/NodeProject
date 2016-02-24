/*
 * CTECList.cpp
 *
 *  Created on: Feb 22, 2016
 *      Author: cand3952
 */

#include "CtecList.h"
#include <assert.h>


template<class Type>
CTECList<Type>::CTECList()
{
	this->size = 0;
	this->head = nullptr;
	this->end = nullptr;
}

template<class Type>
Type CTECList<Type>::~CTECList()
{


}


template<class Type>
Type CTECList<Type> :: removeFromFront()
{



}

template<class Type>
Type CTECList<Type> :: removeFromIndex()
{
	assert(this->size > 0);

	//Declare a variable of the type to return.
	Type thingToRemove;
	//Create a pointer for what is after head
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//Get what the head is holding!!
	thingtoRemove = this->head->getValue();
	//Delete what head is pointing to
	delete this->head;
	//Set head to the new head
	this->head = newHead;

	return thingToRemove;
}




