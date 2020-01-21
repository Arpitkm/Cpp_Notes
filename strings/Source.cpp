//Notes for string literals
//In general strings are group of characters, in general text representation is a massive
// proble (Tom Scott video), so how string works

#include<iostream>
#include<string>

//Remeber wchar (2 bytes)

//Learn text encoding

void PrintString(std::string string)
{
	// We are passing a copy of the object(class), hence again dynamically 
	//allocating memory, now that obviously consumes memory along with the fact that
	// string copy is not fast 

	std::cout << string << std::endl;
}

//correct way to do it

void PrintString2(const std::string& string)
{
	std::cout << string << std::endl;
}

int main()
{
	const char* name = "Arpit"; // C style of representation
	std::string sName = "Arpit"; // hover over the name :-)
	//we use const because generally strings are immutable
	//Don't need to delete as we didn't allocate on heap,
	// if we are not using const we can modify the string

	//at the end of the name there will be 00 which is null termination character,
	// this is how it decides the size of the string and end of .

	char name2[4] = { 'A','k','3','\0'}; // double quotes directly declare as char*, but not '
	//what will happen if try to print it now

	std::cout << name << std::endl;
	std::cout << name2 << std::endl; // weird output without termination, one can write 
	//just 0 at the end too without the ''

	//standard library has class called string, the actual name is basic string, but 
	// std::string is a result due to template specialization, with char is parameter

	std::cout << sName << std::endl;

	//if we don't include the string header file the cout output operator stream cannot 
	//handle the string input, this is the reason we need to include it even though
	// iostream can handle C style strings

	//Now sName is a proper class thats why we have functionalities as follows

	std::cout << sName.size();

	strlen(name); //strcpy()
	// now this will not work

	//std::string test = "Arpit" + "Kumar"; //you cannot add two const char* pointers

	std::string test2 = "Arpit";
	test2 += "kumar"; // The operator can handle this overload now we are adding into 
	// a string unlike before and hence follwoing will work too
	// std::string test2 = std::string("Arpit") + "Kumar";

	bool contains = test2.find("Arp") != std::string::npos; 
	//Implementation of .contains()



	std::cout << test2 << std::endl;






	

	std::cin.get();
}
