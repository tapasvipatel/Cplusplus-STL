#ifndef __QUEUE_H__
#define __QUEUE_H__

template <typename T>
struct node
{
	T value;
	struct node<T>* next;
	struct node<T>* previous;
};

template <typename T>
class Queue
{
private:
	int current_size;
	struct node<T>* head;

public:
	Queue();
	bool empty();
	int size();
	void push(T element);
	T pop();
	void emplace(T element);
};

#endif // __QUEUE_H__