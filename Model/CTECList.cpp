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
	assert(this->size > 0);

	//Declare a variable of the type to return.
	Type thingToRemove;
	//Create a pointer for what is after head
	ArrayNode<Type> * newHead = new ArrayNode<Type>();
	newHead = head->getNext();
	//Get what the head is holding!!
	thingToRemove = this->head->getValue();
	//Delete what head is pointing to
	delete this->head;
	//Set head to the new head
	this->head = newHead;

	size--;

	return thingToRemove;

this->calculateSize();
}

template<class Type>
Type CTECList<Type> :: removeFromIndex(int index)
{
	assert(this->size > 0);

	assert(index >= 0 && index < size);

	Type thingToRemove;

	ArrayNode<Type> * previous, deleteMe, newNext;

	if (index == 0)
	{
		thingToRemove = removeFromEnd();
	}
	else if (index == size -1)
	{
		thingToRemove = removeFromEnd();
	}
	else
	{
		ArrayNode<Type> * current = head;
		for (int spot = 0; spot < index +1; spot++)
		{
			if(spot == index -1)
			{
				previous = current;
			}
		}
	}
}




template <class Type>
void CTECList<Type> :: calculateSize()
{
	assert(size >= 0);

	int count = 0;
	if(head == nullptr)
	{
		size = count;
	}
	else
	{
		count++;
		ArrayNode<Type> * current = head;
		while(current->getNext() != nullptr)
		{
			count++;
			current = current->getNext();
		}
		size = count;
	}

}



