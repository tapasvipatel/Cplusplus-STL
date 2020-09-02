#include "vector.hpp"
#include <stdio.h>
#include <iostream>

template <typename T>
Vector<T>::Vector()
{
	std::cout << "HELLO EVERYONE" << std::endl;
}

int main()
{
	Vector<int> a;

	return 0;
}