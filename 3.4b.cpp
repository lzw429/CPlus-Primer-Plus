//编写一段程序读入两个字符串，比较输入的两个字符串是否等长，如果不等长，输出长度较大的那个字符串。
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s1,s2;
	while(cin>>s1>>s2)
	{
		if(s1.size()==s2.size())
			cout<<"s1 and s2 have the same size"<<endl;
		else if(s1.size()>s2.size())
			cout<<"The size of s1 is bigger:"<<s1<<endl;
		else
			cout<<"The size of s2 is bigger:"<<s2<<endl;
	}
	return 0;
}
