/*
��дһ��lambda�����������ں�����int��������һ��int������
lambdaӦ�÷��ز����int��int�����ĺ͡�
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
