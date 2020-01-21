//bit of a fake keyword, doesn't much do to the generated code
// it just implements rules as a promises to put some restrictions but it can be 
// easily overided

#include<iostream>
#include<string>

int main()
{
	const int MAX_AGE = 100;

	int* a = new int;
	const int* b = new int;// makes the data of b constant not the pointer
	int const* b = new int;// same as above
	int* const c = new int;// makes the pointer constant
	const int* const d = new int// both constant
	*a = 2;
	//a = (int*)&MAX_AGE; // override method one, don't do it //very studpid

	// you write to it you get a crash
	std::cout << *a << std::endl;




	delete[] a,b;

	std::cin.get();

}