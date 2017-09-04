//编写函数的声明，令其接收两个int形参并且返回类型也是int；然后声明一个vector对象，令其元素是指向该函数的指针。
//编写4个函数，分别对两个int值执行加、减、乘、除运算；在上一题创建的vector对象中保存这些函数的指针。
//调用上述vector对象的每个元素并输出其结果。

#include<iostream>
#include<vector>
using namespace std;

int calc(int,int);//接受两个int形参的返回类型是int的函数声明
typedef int (*pc)(int,int);//*pc是一类指向形如calc的函数的指针
vector<pc>vec;//声明一个名为vec的pc类型的对象

int Add(int a,int b)
{
	return a+b;
}

int Sub(int a,int b)
{
	return a-b;
}

int Multiply(int a,int b)
{
	return a*b;
}

int Divide(int a,int b)
{
	if(b!=0)
		return a/b;
	else
		throw runtime_error("The dividend can not be zero.");
}

int main()
{
	int x(1),y(1);
	pc p1=Add;//pc是指向函数的指针
	pc p2=Sub;
	pc p3=Multiply;
	pc p4=Divide;
	
	vec.push_back(p1);
	vec.push_back(p2);
	vec.push_back(p3);
	vec.push_back(p4);
	
	for(auto i=0;i!=vec.size();++i)
	{
		cout<<"The result is:"<<(vec[i])(x,y)<<endl;
	}
	return 0;
}