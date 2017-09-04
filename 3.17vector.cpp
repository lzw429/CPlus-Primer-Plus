//从cin读入一组词并把它们存入一个vector对象，然后设法把所有词都改写为大写形式。输出改变后的结果，每个词占一行。
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main()
{
	string word;
	vector<string>text;
	while(cin>>word)
		text.push_back(word);
	for(decltype(text.size())i=0;i!=text.size();++i)
	{
		for(auto &j:text[i])
			j=toupper(j);
		cout<<text[i]<<endl;
	}
	return 0;
}