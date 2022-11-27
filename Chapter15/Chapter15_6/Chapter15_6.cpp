// Chapter15_6.cpp : 스마트포인터 std::shared_ptr
#include <iostream>
#include "Resource.h"

int main()
{
	//Resource* res = new Resource(3);
	//res->setAll(1);
	
	{
		//std::shared_ptr<Resource> ptr1(res);

		auto ptr1 = std::make_shared<Resource>(3); //직접 초기화
		ptr1->setAll(1);

		ptr1->print();

		{
			//std::shared_ptr<Resource> ptr2(ptr1);
			//std::shared_ptr<Resource> ptr2(res); //ptr1은 모른다 
			auto ptr2 = ptr1;

			ptr2->setAll(5);
			ptr2->print();

			std::cout << "Going out of the block" << std::endl;
		}
		
		ptr1->print(); // ptr1이 소유권 갖고있음

		std::cout << "Going out of the outer block" << std::endl;
	}
	return 0;
}