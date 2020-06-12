#pragma once 
#include <iostream>
using namespace std;

template <class T> 
struct element
{
	T info;
	element <T> * next;
};
template <class T> 
class Stack
{
public:
	Stack();
	~Stack();
	void Push (T data);
	void Pop (T & data);
	void Top (T & data);
	bool Empty ();
private :
	element <T> * top;
};
template <class T>
Stack <T> :: Stack()
{
	Top = NULL;
}
	template <class T>
	void Stack <T> :: Push (T data)
	{
		element <T> * P = new element <T>;
		P -> info = data;
		P -> next = top;
		Top = p;
	}
	template <class T>
	void Stack <T> :: Pop (T & data) 
	{
		data = top -> info;
		element <T> * P = Top;
		Top = Top -> next;
		delete P;
	}
	template <class T> 
	void Stack <T> :: Top ( T & data) 
	{ 
		data = Top -> info; 
	}
	template <class T>
	bool Stack <T> :: Empty() 
	{
		return top = null;
	}
	template <class T>
	Stack <T> :: ~Stack()
	{
		T d;
		while (!Empty()) pop(d);
	}