/*
编写一个lambda，捕获一个局部int变量，并递减变量值，直至它变为0。
一旦变量变为0，再调用lambda应该不再递减变量。lambda应该返回一个bool值，
指出捕获的变量是否为0。
*/

#include <iostream>
#include <algorithm>
using namespace std;

void lambda(int input)
{
	auto f = [&input]()mutable-> bool
		{
			--input;
			if (input == 0)return false;
			else return true;
		};
}

int main()
{
	int intnum;
	scanf("%d", &intnum);
	lambda(intnum);
	return 0;
}
