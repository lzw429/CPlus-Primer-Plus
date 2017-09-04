//编写一段程序从标准输入中读入多个字符串，用空格把输入的多个字符串分割开来。
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	while(cin>>s2)
	{
		s1+=" "+s2;//是双引号，不是单引号
	}
	cout<<s1<<endl;
	return 0;
}
