//ʹ�õ����������Ȱ�text�ĵ�һ�ζ���д�ɴ�д��ʽ��Ȼ�����������
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