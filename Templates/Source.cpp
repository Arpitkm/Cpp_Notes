//In java of C# there is similar things called generics, they are similar to macros in the manner that 
// they basically can write code for depending on a particular situation 
// this is an exteremly useful tool to make your code better, more dynamic, 
//they are sort of blueprint according to which a piece of code may get generated 


// the following is an example of function overloading

#include<iostream>
#include<string>

void printfunc(int a)
{
	std::cout << a << std::endl;
}

void printfunc(std::string text)
{
	std::cout << text << std::endl;
}

template<typename T>
void printfuncT(T value)
{
	std::cout << value << std::endl;
}

template<typename T2, int N> // Here 'class' is 'typename', it is not the usuall C++ class,hence using class instead of 
	// 'typename' may seem a little bit confusing, but they are same
	// also
class Array
{
	private:
		T2 Arr[N];
	public:
		int GetArrSize() const { return N; };

};

int main()
{
	printfunc(5); // the template gets the datatype by implicit conversion
	printfuncT<int>(5); // you can explicitly pass the datatype
	printfunc("Arpit"); // Now basically for every type of datatype you will have to overload the function, this can be avoided
	// using templates
	printfuncT(5);
	printfuncT("ChernoTutorials"); // Now basically using this, no more multiple function defination are required the program 
	// automatically detect the datatype and write the code based on that

	// If the template function is not invoked during the compilation time, i.e it is never called, that code will never get added
	// hence in Visual Studio no errors will be shown in the template code if it is not being invoked
	
	Array<int, 5> example;
	std::cout<< example.GetArrSize();

	

	std::cin.get();

	//Some companies just out write ban the use of templates, but using templates way too much, then it just complicates things
	// behind any use, it may become extremely complex, the code becomes almost unreadable
	// otherwise they are extremlely useful tool to make your code more versatile
}