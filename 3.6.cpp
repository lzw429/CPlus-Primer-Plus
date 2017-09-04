//编写一段程序，使用范围for语句将字符串内的所有字符用X代替。
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		for (auto &c:s)//c是一个引用，赋值语句将改变s中的字符值
			c = 'X';
		cout << s << endl;
	}
	return 0;
}
