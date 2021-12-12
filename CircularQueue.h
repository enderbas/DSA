#ifndef CIRCULARQUEUE_H
#define CIRCULARQUEUE_H

template<typename type> class CircularQueue
{
	int count;
	int rear = -1;
	int front = -1;
	type *items;
	int lastIndex;

public:
	CircularQueue(int size)
	{
		this->count = size;
		lastIndex = size - 1;
		items = new type[this->count];
	}
	~CircularQueue() { delete[] items; }
	bool isFull()
	{
		if(rear == lastIndex)
			return true;
		else
			return false;
	}
	bool isEmpty()
	{
		if(rear == -1 && front == -1)
			return true;
		else
			return false;
	}
	bool enqueue(type element)
	{
		if(isFull()) {
			std::cout<<"Queue is full" << '\n';
			return false;
		}
		if(front == -1 && rear == -1) {
			front++;
		}
		rear++;
		items[rear] = element;
		return true;
	}
	void dequeue()
	{
		if(isEmpty()) {
			std::cout << "Queue is already empty" << '\n';
		}
		front++;
		if(front > rear){
			front = -1;
			rear = -1;
		}
	}
	void display()
	{
		int i;
		std::cout << "Front -> " << front << '\n';
		for (i = 0 ; i < rear + 1; i++)
			std::cout << "Items -> " << items[i] << '\n';
		std::cout << "Rear -> " << rear << '\n';
	}
};
#endif // CIRCULARQUEUE_H
