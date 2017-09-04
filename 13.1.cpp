/*
理解拷贝成员和构造函数的一个好方法是定义一个简单的类，为该类定义这些成员，每个成员打印出自己的名字：
struct X
{
	X() { std::cout << "X()" << std::endl; }
	X(const X&) { std::cout << "X(const X&)" << std::endl; }
};
给X添加拷贝赋值运算符和析构函数，并编写一个程序以不同方式使用X的对象：
将它们作为非引用和引用参数传递；
动态分配它们；
将它们存放于容器中；
诸如此类。观察程序的输出，直到你确认理解了什么时候会使用拷贝控制成员，以及为什么会使用它们。
当你程序输出时，记住编译器可以略过对拷贝构造函数的调用。
*/

#include<iostream>
#include<string>
#include<vector>

struct X
{
	//构造函数
	X()
	{
		std::cout<<"X()"<< std::endl;
	}

	//拷贝构造函数
	X(const X&)
	{
		std::cout << "X(const X&)" << std::endl;
	}

	//拷贝赋值运算符
	X& operator=(const X&)
	{
		std::cout << "X& operator=(const X&)" << std::endl;
	}

	//析构函数
	~X()
	{
		std::cout << "~X()" << std::endl;
	}
};

int main()
{
	vector<X> Xvec;
	X *Xp = new X;//调用构造函数
	X Xcopy = *xp;//调用拷贝构造函数
	X &rp = *xp;//绑定，并非构造
	Xvec.push_back(rp);//调用拷贝构造函数
	delete Xp;//调用析构函数，释放动态内存

	return 0;
}