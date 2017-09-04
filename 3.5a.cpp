//编写一段程序从标准输入中读入多个字符串并将它们连接在一起，输出连接成的大字符串。
#include<iostream>
using namespace std;
int main()
{
	string s1,s2;
	while(cin>>s2)
	{
		s1+=s2;
	}
	cout<<s1<<endl;
	return 0;
}