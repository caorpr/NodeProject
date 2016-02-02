/*
 * CTECArray.cpp
 *
 *  Created on: Feb 2, 2016
 *      Author: cand3952
 */

#include "CTECArray.h"
using namespace std;

template <class Type>
CTECArray<Type>::CTECArray(int size)
{
	// TODO Auto-generated constructor stub
	this->size = size;
}

template <class Type>
CTECArray<Type>::~CTECArray()
{
	// TODO Auto-generated destructor stub
}

template <class Type>
int CTECArray<Type> :: getSize()
{
	return this->size;
}

template<class Type>
Type* CTECArray<Type> :: get(int position)
{
	//bounds checking needed to not crash!
	if(position >= size || position < 0)
	{
			// Out of bounds! OB!
		cerr << "position is OB (out of bounds)!" << endl;
		return nullptr;
	}
	else
	{
			//In the bounds!!
		ArrayNode<Type> * current = head;
		for(int spot = 0; spot <= position; spot++)
		{
			if(spot != position)
			{
				current = current->getNext();
			}
			else
			{
				return current->getValue();
			}
		}
	}
}

template <class Type>
void CTECArray<Type> :: set(int position, Type value)
{
	if(position >= size || position < 0)
	{
			// Out of bounds! OB!
		cerr << "position is OB (out of bounds)!" << endl;
	}
	else
	{
		ArrayNode<Type> * current = head;
		for (int spot = 0; spot < position; spot++)
		{
			if (spot != position)
			{
				current = current->getNext();
			}
			else
			{
				current->setValue(value);
			}
		}
	}
}
