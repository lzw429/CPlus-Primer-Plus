//使用迭代器，首先把text的第一段都改写成大写形式，然后再输出它。
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string word;
	vector<string>text;
	while(getline(cin,word))
		text.push_back(word);
	for(auto it=text.begin();it!=text.end()&&!(*it).empty();++it)
	{
		for(auto &j:*it)
			j=toupper(j);
		cout<<*it<<endl;
	}
	return 0;
}