/*
 * Node.cpp
 *
 *  Created on: Jan 27, 2016
 *      Author: cand3952
 */


#include <iostream>
#include "Node.h"


template<class Type>
Node<Type>::Node()
{
	this->value = 0;
	this->pointers = nullptr;
}

template <class Type>
Node<Type>::Node(const Type& value)
{
	this->value = 0;
	this->pointers = nullptr;
}

template <class Type>
Node<Type>::~Node()
{

}


template <class Type>
Type Node<Type> :: getValue()
{
	return this-> value;
}

template <class Type>
void Node<Type> :: setValue(Type& value)
{
	this->value = value;
}

template <class Type>
Node<Type>* Node<Type> :: getPointers()
{
	return this->pointers;
}



