//编写一段程序读入两个字符串，比较其是否相等并输出结果。如果不相等，输出较大的那个字符串。
#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s1,s2;
	while(cin>>s1>>s2)
	{
		if(s1==s2)
			cout<<"String s1 and s2 are same."<<endl;
		else if(s1>s2)
			cout<<"String s1 is bigger and s1 is "<<s1<<endl;
		else
			cout<<"String s2 is bigger and s2 is "<<s2<<endl;
	}
	return 0;
}
