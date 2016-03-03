/*
 * CTECList.h
 *
 *  Created on: Feb 22, 2016
 *      Author: cand3952
 */

#ifndef MODEL_CTECLIST_H_
#define MODEL_CTECLIST_H_

#include "ArrayNode.h"

Model::CTECList<Type>
class CTECList
{
private:
	ArrayNode<Type> end;
	ArrayNode<Type> head;
	int size;
	void calculatedSize();
public:
	CTECList(): const
	virtual ~CTECList
	int getSize(): int
	void addToFront(const Type& value): void
	void addToEnd(const Type& value): void
	void addAtIndex(int index, const Type& value): void
	Type getFront(): Typy
	Type getEnd(); Type
	Type getFromIndex(int index); Type
	Type removeFromFront(); Type
	Type removeFromEnd(); Type
	Type removeFromIndex(int index); Type
	Type set(int index, const Type& value); Type



	Type removeFromIndex(int index);
	Type set(int index, const Type& value);
};

void calculateSize();







#endif /* MODEL_CTECLIST_H_ */
