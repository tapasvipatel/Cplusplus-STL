#include "list.hpp"
#include <stdio.h>
#include <iostream>

template <typename T>
List<T>::List()
{
	;
}

// Returns value of the first element in the list
template <typename T>
T List<T>::front()
{
	;
}

// Returns value of the last element in the list
template <typename T>
T List<T>::back()
{
	;
}

// Add new element to the start of the list
template <typename T>
void List<T>::push_front(T element)
{
	;
}

// Add new element to the end of the list
template <typename T>
void List<T>::push_back(T element)
{
	;
}

// Remove first element of the list
template <typename T>
void List<T>::push_front()
{
	;
}

// Remove last element from the list
template <typename T>
void List<T>::pop_back()
{
	;
}

// Return pointer to the start of the list
template <typename T>
struct node<T>* List<T>::being()
{
	;
}

// Return pointer to the end of the list
template <typename T>
struct node<T>* List<T>::end()
{
	;
}

// Return whether list is empty or not
template <typename T>
bool List<T>::empty()
{
	;
}

// Insert a new element in the list before a specified position
template <typename T>
void List<T>::insert(struct node<T>* position)
{
	;
}

// Delete element at a specific posiiton
template <typename T>
void List<T>::erase(struct node<T>* position)
{
	;
}

// Remove all elements from the list which are equal to a given element
template <typename T>
void List<T>::remove(T element)
{
	;
}

// Empty the list
template <typename T>
void List<T>::clear()
{
	;
}

// Reverse the list
template <typename T>
void List<T>::reverse()
{
	;
}

// Return size of the list
template <typename T>
int List<T>::size()
{
	;
}

// Sort the list in increasing order
template <typename T>
void List<T>::sort()
{
	;
}

// Remove all duplicate elements from the list
template <typename T>
void List<T>::unique()
{
	;
}

// Merge two sorted lists into one
template <typename T>
List<T>* List<T>::merge(List<T>& secondList)
{
	;
}

int main()
{
	List<int> a;
}