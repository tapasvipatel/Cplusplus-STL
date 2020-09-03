#include "vector.hpp"
#include <stdio.h>
#include <iostream>

template <typename T>
Vector<T>::Vector()
{
	my_capacity = 4;
	size_available = 2;
	current_size = 0;
	current_index = 1;
	buffer = new T[my_capacity];
	my_rbegin = buffer;
	my_front = my_rbegin+1;
	my_rend = buffer+my_capacity-1;
	my_back = my_rend-1;
}
template <typename T>
T* Vector<T>::front()
{
	return my_front;
}

template <typename T>
T* Vector<T>::back()
{
	return my_back;
}

template <typename T>
T* Vector<T>::rbegin()
{
	return my_rbegin;
}

template <typename T>
T* Vector<T>::rend()
{
	return my_rend;
}

template <typename T>
int Vector<T>::size()
{
	return current_size;
}

template <typename T>
int Vector<T>::capacity()
{
	return my_capacity;
}

template <typename T>
bool Vector<T>::empty()
{
	if(!current_size)
	{
		return true;
	}

	return false;
}

template <typename T>
T Vector<T>::at(int index)
{
	return buffer[index+1];
}

template <typename T>
void Vector<T>::push_back(T element)
{
	if(buffer+current_index == my_rend)
	{
		extend();
	}

	buffer[current_index] = element;
	current_index++;
	current_size++;
}

template <typename T>
void Vector<T>::clear()
{
	for(int index = 0; index < current_size; index++)
	{
		buffer[index] = NULL;
	}

	current_size=0;
	current_index=1;
}

template <typename T>
void Vector<T>::extend()
{
	my_capacity = my_capacity*2;
	size_available = size_available*2;
	T* buffer_new = new T[my_capacity];

	for(int index = 1; index < current_size+1; index++)
	{
		buffer_new[index] = buffer[index];
	}

	my_rbegin = buffer_new;
	my_front = my_rbegin+1;
	my_rend = buffer_new+my_capacity-1;
	my_back = my_rend-1;
	free(buffer);
	buffer = buffer_new;
}

int main()
{
	Vector<int> a;
  
    for (int i = 1; i <= 10; i++) 
    {
        a.push_back(i);
    }

    for (int i = 0; i < 10; i++) 
    {
        std::cout << a.at(i) << std::endl;
    }

    std::cout << a.capacity() << std::endl;

	return 0;
}
