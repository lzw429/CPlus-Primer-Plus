/*
编写一个lambda，接受两个int，返回它们的和。
*/

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	auto sum = [](const int &a, const int &b) {return a + b};
	cout << sum(1, 2) << endl;
	return 0;
}