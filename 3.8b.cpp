//用传统的for循环编写一段程序，将字符串内的所有字符用X代替。 
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	while(cin>>s)
	{
		decltype(s.size())index=0;
		while(index!=s.size())
		{
			s[index]='X';
			++index;
		}
		cout<<s<<endl;
	}
	return 0;
}