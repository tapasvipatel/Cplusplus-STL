#ifndef __VECTOR_H__
#define __VECTOR_H__

template <typename T>
class Vector
{
private:
	T* buffer;
	int size_available;
	int my_capacity;
	int current_size;
	int current_index;
	T* my_front;
	T* my_rbegin;
	T* my_back;
	T* my_rend;

	void extend();

public:
	Vector();
	T* front();
	T* back();
	T* rbegin();
	T* rend();
	int size();
	int capacity();
	bool empty();
	T at(int index);
	void push_back(T element);
	void clear();
};

#endif //__VECTOR_H__
