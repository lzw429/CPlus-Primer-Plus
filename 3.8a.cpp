//用while循环编写一段程序，将字符串内的所有字符用X代替。 
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	while(cin>>s)
	{
		for(decltype(s.size())index=0;index!=s.size();++index)
		{
			s[index]='X';
		}
		cout<<s<<endl;		
	}
	return 0;
}

//decltype作为操作符，用于查询表达式的数据类型。decltype在C++11标准制定时引入，主要是为泛型编程而设计，以解决泛型编程中，由于有些类型由模板参数决定，而难以甚至不可能表示之的问题。