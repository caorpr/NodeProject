/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: cand3952
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

#include "ArrayNode.h"

template <classType>
class CTECList
{
private:
	ArrayNode<Type> end;
	ArrayNode<Type> head;
	int size;
	void calculatedSize();
public:
	CTECList();
	virtual ~CTECList
	int getSize();
	void addToFtont();
	void addToEnd();
	void addAtIndex();
	Type getFront();
	Type getEnd();
	Type getFromIndex(int index);
	Type removeFromFront();
	Type removeFromEnd();
	Type removeFromIndex(int index);
	Type set();



	Type removeFromIndex(int index);
	Type set(int index, const Type& value);
};

void calculateSize();







#endif /* MODEL_CTECLIST_H_ */
