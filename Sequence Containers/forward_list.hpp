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

public:

};


#endif // __FORWARD_LIST_H__