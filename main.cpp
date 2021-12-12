#include <iostream>

#include "Stack.h"
#include "Queue.h"
#include "CircularQueue.h"

int main()
{
	CircularQueue<std::string> queryAlgo(5);
	queryAlgo.enqueue("eng");
	queryAlgo.enqueue("den");
	queryAlgo.enqueue("er");

	queryAlgo.dequeue();
	queryAlgo.dequeue();
	queryAlgo.dequeue();
	queryAlgo.dequeue();
	queryAlgo.dequeue();
	queryAlgo.dequeue();

	queryAlgo.enqueue("4");
	queryAlgo.enqueue("5");

//	queryAlgo.enqueue(2);
//	queryAlgo.enqueue(2);
	queryAlgo.display();
#if 0
	Stack<std::string> stAlgo(5);
	std::cout<< "is empty "<<stAlgo.isEmpty() << " is full "<<stAlgo.isFull() <<std::endl;
	stAlgo.push( "word1");
	stAlgo.push( "word2");
	stAlgo.push( "word4");
	std::cout<<stAlgo.peek()<<std::endl;
	stAlgo.pop();
	std::cout<<stAlgo.peek()<<std::endl;
	stAlgo.pop();
	std::cout<<stAlgo.peek()<<std::endl;
	stAlgo.pop();
	std::cout<<stAlgo.peek()<<std::endl;
	stAlgo.pop();
	Stack<int> stAlgoi(20);
	std::cout << "is empty main " << stAlgoi.isEmpty() << " is full "
			  << stAlgoi.isFull() << std::endl;
	stAlgoi.push(1);
	std::cout<<stAlgoi.peek()<<std::endl;
	stAlgoi.pop();
	std::cout<<stAlgoi.peek()<<std::endl;
#endif
}
