#ifndef QUEUE_H
#define QUEUE_H

template<typename type> class Queue
{
	int count = 0;
	type *items;
	int front = -1;
	int rear = -1;

public:
	Queue(int size)
	{
		this->count = size;
		items = new type[count];
	}
	~Queue() { delete[] items; }
	bool isEmpty()
	{
		if (rear < count)
			return true;
		else
			return false;
	}
	void enqueue(type item)
	{
		if (rear == count - 1) {
			std::cout << "Queue is full " << item << " could not queued"
					  << std::endl;
			return;
		}
		rear++;
		items[rear] = item;
	}
	void dequeue()
	{
		if (front == rear) {
			std::cout << "Queue is empty" << std::endl;
			return;
		}
		front++;
	}
	void Display(){
		for(int i = front + 1; i <= rear ; i++) {
			std::cout<<items[i]<<std::endl;
		}
	}
};

#endif // QUEUE_H
