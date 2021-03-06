//A case on why not to use namespace std;
// whenever we are using the standard library

#include<iostream>

using namespace std; // This line can be used to just take out the 'std::' part from our code
// as mentioned above this is requried when we are accessing methods from the standard library
// to understand about what namespaces are checout 'Namespaces'

namespace first
{
	void print(const std::string& text)
	{
		std::cout << text << std::endl;
	}
}

namespace second
{
	void print(const char* text)
	{
		std::string temp = text;
		std::reverse(temp.begin(), temp.end());
		std::cout << text << std::endl;
	}
}

using namespace first;
using namespace second;

int main()
{
	std::cout << "HellO" << std::endl;
	print("Hello");
	print("HellO");
	std::cin.get();
}

// The things is that some times code is return such that the obects inside the standard library and the ones
// created by the writer of the code have same implementation, now this seems weird, but in actual code that can be easily found
// on github, you may come across a namespace that has a class 'vector', and without std::, it will be difficult to understand 
// to which namespace vector belongs to
// similar thing is true for some of the methods provided by standard library, the names of user defined function and the ones in
// the lib may similar writing style making it difficult to understand what belongs to what

// and obviously this is true for user defined namespaces too

// The above example showing the two functions belonging to different namespaces which will called if we use namespaces?

//IMPORTANT
// The sort of problems discussed can cause silent run time error, a nightmare to resolve
// and NEVER EVER use 'using namespaces' in header files

//Tips
// use them inside smaller scopes, not throughout the project
// don't use them when there are discpencies, and same name functions exist, or when you need some sort of distinction between objects
// belonging to different namespaces;