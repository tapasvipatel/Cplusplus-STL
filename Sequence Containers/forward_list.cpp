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
	struct node<T>* new_element = new struct node<T>();
	new_element->value = element;
	new_element->next = NULL;
	struct node<T>* temp = head;

	while(temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new_element;
}

// Remove first element of the list
template <typename T>
void Forward_List<T>::pop_front()
{
	struct node<T>* temp = head;
	head = head->next;
	free(temp);
}

// Remove last element from the list
template <typename T>
void Forward_List<T>::pop_back()
{
	struct node<T>* curr = head;
	struct node<T>* prev = NULL;

	while(curr->next != NULL)
	{
		prev = curr;
		curr = curr->next;
	}

	if(prev == NULL)
	{
		head = prev;
	}
	else
	{
		prev->next = NULL;
	}

	free(curr);
}

// Return whether list is empty or not
template <typename T>
bool Forward_List<T>::empty()
{
	if(size == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

// Insert a new element in the list at a specific index
template <typename T>
void Forward_List<T>::insert(int index, T element)
{
	struct node<T>* curr = head;
	struct node<T>* prev = NULL;
	int temp_index = 0;
	struct node<T>* new_element = new struct node<T>();
	new_element->value = element;
	new_element->next = NULL;

	while(temp_index != index)
	{
		prev = curr;
		curr = curr->next;
		temp_index++;
	}

	if(prev == NULL)
	{
		head = new_element;
	}
	else
	{
		new_element->next = prev->next;
		prev->next = new_element;
	}
}

// Delete element at a specific index
template <typename T>
void Forward_List<T>::erase(int index, T element)
{
	;
}

// Return element at certain index
template <typename T>
T Forward_List<T>::at(int index)
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