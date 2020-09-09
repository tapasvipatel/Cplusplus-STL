#include "forward_list.hpp"
#include <stdio.h>
#include <iostream>

template <typename T>
Forward_List<T>::Forward_List()
{
	head = NULL;
	current_size = 0;
}

// Returns value of the first element in the list
template <typename T>
T Forward_List<T>::front()
{
	return head->value;
}

// Returns value of the last element in the list
template <typename T>
T Forward_List<T>::back()
{
	struct node<T>* temp = head;

	while(temp->next != NULL)
	{
		temp = temp->next;
	}

	return temp->value;
}

// Add new element to the start of the list
template <typename T>
void Forward_List<T>::push_front(T element)
{
	struct node<T>* new_element = new struct node<T>();
	new_element->value = element;
	new_element->next = head;
	head = new_element;
}

// Add new element to the end of the list
template <typename T>
void Forward_List<T>::push_back(T element)
{
	;
}

// Remove first element of the list
template <typename T>
void Forward_List<T>::push_front()
{
	;
}

// Remove last element from the list
template <typename T>
void Forward_List<T>::pop_back()
{
	;
}

// Return pointer to the start of the list
template <typename T>
struct node<T>* Forward_List<T>::being()
{
	;
}

// Return pointer to the end of the list
template <typename T>
struct node<T>* Forward_List<T>::end()
{
	;
}

// Return whether list is empty or not
template <typename T>
bool Forward_List<T>::empty()
{
	;
}

// Insert a new element in the list before a specified position
template <typename T>
void Forward_List<T>::insert(struct node<T>* position)
{
	;
}

// Delete element at a specific posiiton
template <typename T>
void Forward_List<T>::erase(struct node<T>* position)
{
	;
}

// Remove all elements from the list which are equal to a given element
template <typename T>
void Forward_List<T>::remove(T element)
{
	;
}

// Empty the list
template <typename T>
void Forward_List<T>::clear()
{
	;
}

// Reverse the list
template <typename T>
void Forward_List<T>::reverse()
{
	;
}

// Return size of the list
template <typename T>
int Forward_List<T>::size()
{
	;
}

// Sort the list in increasing order
template <typename T>
void Forward_List<T>::sort()
{
	;
}

// Remove all duplicate elements from the list
template <typename T>
void Forward_List<T>::unique()
{
	;
}

// Return element at certain index
template <typename T>
T Forward_List<T>::at(int index)
{
	;
}

// Merge two sorted lists into one
template <typename T>
Forward_List<T>* Forward_List<T>::merge(Forward_List<T>& secondList)
{
	;
}

int main()
{
	Forward_List<int> a;
}