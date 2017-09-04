/*
编写一个lambda，捕获它所在函数的int，并接受一个int参数。
lambda应该返回捕获的int和int参数的和。
*/

#include<iostream>
using namespace std;

int sum(const int &captured,const int &received)
{
	auto sum = [captured](const int num) {return captured + num; };
	return sum(received);
}
int main()
{
	cout << sum(1, 2) << endl;
	return 0;
}
