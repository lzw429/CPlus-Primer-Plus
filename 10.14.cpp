/*
��дһ��lambda����������int���������ǵĺ͡�
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