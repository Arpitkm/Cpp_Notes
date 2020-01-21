#include<iostream>
#include<string>
#include<stdlib.h> // includes some c functions

int main()
{
	"Arpit"; // A string 
	const char name[6] = "Arpit";

	std::cout << strlen(name) << std::endl;

	char* name2 = "Kumar";  // Not the best way to go won't work anymore(cherncpp)
	name2[2] = 'a'; // Not valid behaviour, it might work sometime but not the way to go
	// because cpp standard doesn't definde what should be done in this case
	// this is known as undefined as behaviour, this is because what we are modifying a
	// pointer to string literal in memory and string literals are stored in rom 

	//use release mode to get simplified assembly code

	//one can see in the assembly output how the data is stored in const part of the 
	// memory

	// However if we define at as usual array everything will fine, also this is possible

	char* nameas = (char*)"asdf"; // by gcc

	const wchar_t* name3 = L"Cherno"; // L signifies that it is made up of wide characters
	const char16_t name4 = u"cherno";
	const char32_t name5 = U"cherno"; // for utf32

	//diff between whar and char16, it actually depends on compiler 2 on windows and 4
	// on linux

	const char* teest = u8"cherno";

	//solving are appending problem

	using namespace std::string_literals; //cpp 14

	std::wstring name0 = L"Cherno"s + L"hello";

	const char* example = R"(asf asdffd fdfd line4)"; // avoid escape characters
	// works exactly like this

	const char* ex = "Line1\n"
	"Line2\n"
	"Line3\n";

	char important[] = "test";
	important[2] = 'g'; // this works even though string literals are always stored
	// in const memory , how!!
	// the system copies the data into a new variable(important) and modifies it, we are 
	// earlier we were modifhing the pointer but now copying the data into our variable
	//and modifying and that works.







	std::cin.get();

}