//编写一段程序，用cin输入一组字符串并把它们存入一个vector对象。
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string word;
	vector<string>text;
	while (cin>>word)
	{
		text.push_back(word);
	}
	for (auto &i:text)
	{
		cout<<i<< " ";
	}
	return 0;
}