//��cin����һ��ʲ������Ǵ���һ��vector����Ȼ���跨�����дʶ���дΪ��д��ʽ������ı��Ľ����ÿ����ռһ�С�
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