//��д����f��4���汾���������һ���������ֵ���Ϣ��
#include<iostream>
using namespace std;

void f()
{
	cout<<"call void f()"<<endl;
}
void f(int a)
{
	cout<<a<<endl;
	cout<<"call void f(int)"<<endl;
}
void f(int a,int b)
{
	cout<<a<<" "<<b<<endl;
	cout<<"call void f(int,int)"<<endl;
}
void f(double a,double b=3.14)
{
	cout<<a<<" "<<b<<endl;
	cout<<"call void f(double,double)"<<endl;
}
int main()
{
	f(42);
	f(42,12);
	f(2.78,3.14);
	return 0;
}
