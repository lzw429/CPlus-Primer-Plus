//编写一段程序，从标准输入读取两个整数，输出第一个整数除以第二个整数的结果。
#include<iostream>
using namespace std;

int main()
{
	int val1=0,val2=0;
	while(cin>>val1>>val2)
	{
		double val3=(double)val1/val2;
		cout<<"The result is:"<<val3;
	}
	return 0;
}