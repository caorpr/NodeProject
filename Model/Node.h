/*
 * Node.h
 *
 *  Created on: Jan 27, 2016
 *      Author: cand3952
 */

#ifndef NODE_H_
#define NODE_H_



template <class Type>
class Node
{
private:
	Type value;
	Node * pointers;
public:
	Node();
	Node(Type value);
	virtual ~Node();
	Type getValue();
	void setValue(Type value);
	Node * getPointers();
};

#endif /* NODE_H_ */
