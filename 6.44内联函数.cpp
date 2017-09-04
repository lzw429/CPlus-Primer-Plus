//编写一个isShort内联函数。
#include<iostream>
#include<string>
using namespace std;

inline bool isShort(const string &s1,const string &s2);//内联函数与函数相比，更像#define 宏。

int main()
{
	const string s1="hi";
	const string s2="world";
	if(isShort(s1,s2))
	{
		cout<<"s1 is shorter."<<endl;
	}
	else
	{
		cout<<"s2 is shorter."<<endl;
	}
	return 0;
}

inline bool isShort(const string &s1,const string &s2)
{
	return s1.size()<s2.size();
}
