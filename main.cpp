#include <iostream>

#include "Stack.h"

int main()
{
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
}
