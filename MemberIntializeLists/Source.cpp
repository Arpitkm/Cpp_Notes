#include<iostream>
#include<string>

class test {
private:
	int x = 0;
public:
	test() {
		std::cout << "Create Entity" << std::endl;
	}

	test(int x) {
		std::cout << "Created Entity with" << x << std::endl;
	}
	void SetX(int a)
	{
		x = a;
	}


};
class Entity
{
private:
	std::string m_Name;
	test Test;
	int m_Score;
public:
	Entity()
		:Test(8), Test(test(8))
	{
		Test = test(8);
	}
	Entity()
	{
		m_Name = "Arpit";
		
	}
	Entity(const std::string& name)
	{
		m_Name = name;
	}
	Entity()
		: m_Name("Unknown"), m_Score(0) {} // Order is important
	Entity(cosnt std::string& name)
		:m_Name(name) {}
	const std::string& GetName() const { return m_Name; };
	Entity()
		:x(0), y(0), z(0) {} // to hide stuff

};

int main()
{
	Entity e0;
	std::cout << e0.GetName() << std::endl;

	std::cin.get();
}
// Why ?
// For better readability, keeps code clean BUT for classes
//functionally , if you don't initialize with MIL , your object will be constructed twice
// it helps to avoid copies