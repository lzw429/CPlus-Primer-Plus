//��дһ�γ�����cin����һ���ַ����������Ǵ���һ��vector����
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