/* The following file will cover 
1)Console input output
2)functions
3)Datatypes of variables
4)if else
5)constional operator
6] Some information about linking and compiling */

// When ever a cpp file is compiled, a translational unit is generated, one can use the compiler settings
// to generate a binary output or a file return in assembly language.

/* There are two steps of building a C++ code, first is compiling and other is linking, compilation is local to file under
consideration and linking is done accross all the C++ files, the scope in which linking is performed can be changed using 
IDE setting, when compiled one can have multiple cpp files and end up with a single output file*/

#include<iostream> // Header file for input and output stream handling
#include<thread> // for parallization(used only for one example)
#include<chrono> // for timing in cpp used for above example

// Header file are just pre-written code, all the above line is doing is copying the code defined in some header file in the 
// iostream header file and pasting it here, hence one can just open this file and copy all the content above, the result will be 
// exactly same.

void PrintHello(); // Function signature, it tells the program that this function exists
					// we can put the defination of function below or above the main or even in a completely 
					// different cpp file.

int square(int a)  // functions have return type values just like variables
{ 
	return a * a; // the values in the main program will not be modified, this is called calling by value
				// this function will create its own value of 'a' and return value based on operation specified
}

int main() // Main function, the execution of code will begin here and proceed line by line.
{
	// Datatypes
	int nExample = 45; // integer type
	unsigned int nExample2 = 12321; // Interger with only positive values
	// other datatype modifier statement like 'unsigned' are short, long etc, where long will double the amount
	// of memory taken by the variable
	long int nExamplelong = 234231432;
	int nRead;
	std::cout << nExample << ", " << nExample2 << "," << nExamplelong << std::endl; //Print values to console
	std::cout << "Enter Value :"; // 'std::endl' is used for next line
	std::cin >> nRead;
	std::cout << std::endl; // Read values from the console

	char cExample = 'a'; // This datatype is used to store the characters, char are just short ints,
					// they consume 1 byte

	std::cout << "Size of char" << sizeof(cExample) << std::endl; // This function is used to print values of the size of 
								// a datatype or variable in bytes

	std::cout << "Continueing\n"; // '\n' again is used for next line, but is faster
	// other datatypes available

	float fExample = 234.0234f; // suffix 'f' is used for floating point values
	double dfExample = 234234324234.0f; // for bigger floating point values

	// calling the functions
	PrintHello();
	std::cin.get(); // waits to recieve next line command to continue the code
	std::cout << "The square of" << nExample << square(nRead) << std::endl;

	// Loops in Cpp
	// Cpp has three type of loops

	//--------for loop--------------//

	for (int i = 0; i < 5; i++) // for(variable deceleration,condition,modifier)
	{
		std::cout << "Loops has completed" << i << " loops" << std::endl;
		//for(;;) will result in infinite loop
	}
	int i = 0; // the varaible 'i' existed only in the scope of for loop, the scope is defined by '{}' 
				// after it got out of loop it got destroyed and needs to redfined
	//--------------while loop-----------//
	while (i<5) // while(condition)
	{
		std::cout << "While loop is running" << std::endl;
		i++; // updater or otherwise it will just keep running
	}// this time 'i' was declared in the main function and hence it still exists
	i = 1; // again setting it to zero as now it stores the value from the last update

	//------------do while loop-----------//
	do {
		std::cout << "IT still ran" << std::endl;

	} while (i < 1);// even though the condition was false the loop ran once, this is because the 
			// checking of condition is getting performed at the end of the loop, this is the uniqueness
			// that do while loop offers, it will run atleast once


	//---------------Conditional statements------------------//

	//ifelse//

	int nSwitch = 3; // change the value of the nSwitch to get different outputs

	if (nSwitch == 3)
	{
		std::cout << "True the value is" << nSwitch << std::endl;
	}
	else if(nSwitch == 1)
	{
		std::cout << "The value has been changed" << std::endl;
	}
	else
	{
		std::cout << "No values match" << std::endl;
	}

	//Condtional '?' operator
	// This is unique to C++, it is simple a short hand notation for ifelse statements
	// to save some lines of code and make our code more readable

	std::cout << "The condition operator working" << std::endl;

	int nTest = (nExample > nRead) ? 123 : 456; // it defined as (condition1)?statement1:statement2;
	std::cout << "value of nTest is : " << nTest <<std::endl;
	

	// depending whethter the condition is true of false, statememnt1 or statement2 will be executed respectively
	// hence the above example assign the value to nTest based on the result of comparision
	// it can be nested like if else statements, but that can easily make the code less readable


	std::cout << "\n\n\n" << "HellO CPP" << "\n\n\n" << std::endl;

	//-----------Difference between the '\n' and std::endl----------------//
	// Generally there are two ways to get to new line

	std::cout << std::endl; /* and */ std::cout << '\n';
	//'\n' is considerably faster than 'endl' and the reason is that endl also flushes the output buffer
	// which means that  it directly send the output stream to intended destination, while '\n' just stays in memory
	for(int k=0;k<10;++k)
	{
		std::this_thread::sleep_for(k*200);
		std::cout << 5 << " " <<std::flush;
	}

	std::cin.get();
	return 0; // 0 return value to int main signifies successful execution of code



}

// Function defination

void PrintHello()
{
	std::cout << "Function: PrintHello" << std::endl;
}