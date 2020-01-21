#include<iostream>
#include<vector>

using namespace std;

int main()
{
	struct sSomeObject
	{
		int x = 23;
		int y = 12;
		
		sSomeObject()
		{
			x = 232;
			y = 431;
		}

	};

	//Smart Pointers - Shared - Multiple accessors to pointer
	{//Scope 1
		std::shared_ptr<sSomeObject> spSomeObject1 = make_shared<sSomeObject>();
		{//Scope 2
			shared_ptr<sSomeObject> spSomeObject2 = spSomeObject1;
		}
	}

}