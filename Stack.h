#ifndef STACK_H
#define STACK_H

template<typename type> class Stack
{
	int count = 0;
	type *items;
	int top = -1;

public:
	Stack(int size)
	{
		this->count = size;
		items = new type[this->count];
	}
	~Stack() { delete[] items; }
	bool isEmpty()
	{
		if (top == -1)
			return true;
		else
			return false;
	}
	bool isFull()
	{
		if (top == (count - 1))
			return true;
		else
			return false;
	}
	void push(type item)
	{
		if (isFull()) {
			std::cout << "stack is full " << item << " could not add"
					  << std::endl;
			return;
		}
		top++;
		items[top] = item;
	}
	void pop()
	{
		if (isEmpty()) {
			std::cout << "stack is empty" << std::endl;
			return;
		}
		top--;
	}
	type peek()
	{
		if (isEmpty()) {
			type t = items[0];
			return templateNull(t);
		}
		return items[top];
	}

	template<typename T> T templateNull(T param) { return NULL; }
	template<> std::string templateNull(std::string param) { return ""; }
};

#endif // STACK_H
