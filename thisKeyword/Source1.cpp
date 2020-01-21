//Stack and Scope
// The scope is basically a stack frame, its like adding to stack of book
//all the data is in the books, ones you take out the book the data is gone

#include<iostream>
#include<string>

class Entity
{
public:
	Entity()
	{
		std::cout << "Destroyed Entity" << std::endl;
    }


};

int main()
{
	{

	}

	std::cin.get()
}
