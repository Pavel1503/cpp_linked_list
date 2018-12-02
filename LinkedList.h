#pragma once

/*********************************************88
 * My linked list class!
 * Holds the entry point = the first element
 * Each element holds the pointer to the next element
 * When you remove an element we just delete the reference
 * 
 * 
 */
template <class T>
class LinkedList
{
private:
	int m_size; //the current size
	struct wrapped_object 
	{
		T* element;
		wrapped_object* next_element;
	};
	wrapped_object* m_head; //the head struct
	wrapped_object* m_iterator; //the iterator
public:
	LinkedList(); //leave jumps ratio at default
	void add(T*); //add reference to the list
	void remove(T*); //erradicate the reference and remove from array
	T* get_next(); //advance the iterator and return the element inside
	void reset_iterator(); //reset the iterator to zero
	int size(); //get the size of the array
	~LinkedList(); //remove array and its elements entirely
};

#include "LinkedList.ttp"
