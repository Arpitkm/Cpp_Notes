#include<iostream>
#include<string>

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() :m_Name("Unknown") {}
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const { return m_Name; }
};

int main()
{
	Entity entity; // Unique to Cpp
	Entity name = Entity("Cherno"); // Good
	Entity name2("Arpit"); // Why, scope of existance is the answer

	Entity* e;
	{
		Entity test = test("name");
		e = &test;
		std::cout << test.GetName() << std::endl;
		
		

	} // at this point the entity will be deleted as it is decleraed on the heap

	Entity* e2;
	{
		Entity* entity2 = new Entity("Cherno"); // Java and C# style
	     e2 = entity2;
	    std::cout << entity2->GetName() << Std::endl; 
	}// New is slow and manual  deletion

	Entity* e = (Entity*)malloc(sizeof(Entity); // doenst call the constructor
	free(e); //doesn't call destructor
	
	delete e2;
	delete e;
	std::cout << entity.GetName() << std::endl;
	std::cin.get();

}