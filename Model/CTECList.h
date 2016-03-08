/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: cand3952
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

#include "ArrayNode.h"

template <class Type>
class CTECList
{
private:
	ArrayNode<Type> *end;
	ArrayNode<Type> *head;
	int size;
	void calculatedSize();
public:
	CTECList();
	int getSize();
	void addToFront(const Type& value);
	void addToEnd(const Type& value);
	void addAtIndex(int index, const Type& value);
	Type getFront();
	Type getEnd();
	Type getFromIndex(int index);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex(int index);
	Type set(int index, const Type& value);
	Type removeFromIndex(int index);
	Type set(int index, const Type& value);
};

void calculateSize();







#endif /* MODEL_CTECLIST_H_ */
