#ifndef __FORWARD_LIST_H__
#define __FORWARD_LIST_H__

template <typename T>
struct node
{
	T value;
	struct node<T>* next;
};

template <typename T>
class Forward_List
{
private:
	struct node<T>* head;
	int current_size;

public:
	Forward_List();
	T front();
	T back();
	void push_front(T element);
	void push_back(T element);
	void pop_front();
	void pop_back();
	struct node<T>* being();
	struct node<T>* end();
	bool empty();
	void insert(int index, T element);
	void erase(int index, T element);
	T at(int index);
	void remove(T element);
	void clear();
	void reverse();
	int size();
	void sort();
	void unique();
	Forward_List<T>* merge(Forward_List<T>& secondList);
};


#endif // __FORWARD_LIST_H__