/*
���һ����ĸ���쵽����֮�ϣ���d��f����������ϳ�ͷ����(ascender)��
���һ����ĸ���쵽����֮�£���p��g����������³�ͷ���֣�descender)��
��д���򣬶���һ�������ļ��������ļȲ������ϳ�ͷ���֣�Ҳ�������³�ͷ���ֵĵ��ʡ�
*/

#include<iostream>
#include<string>
#include<vector>
#include<fstream>//file stream

using namespace std;

vector<string> find(const vector<string>&vec)
{
	vector<string>ret;
	string ascender("bdfhklt");//�ϳ�ͷ���ֵ���
	string descender("gjpqy");//�³�ͷ���ֵ���

	auto it=vec.begin();
	while(it!=vec.end())
	{
		if(it->find_first_of(ascender)==string::npos&&it->find_first_of(descender)==string::npos)
			ret.push_back(*it);
		++it;
	}
	return ret;
}

string findmax(const vector<string>&vec)
{
	string ret;
	auto it=vec.begin();
	while(it<vec.end()-1)
	{
		if((*it).size()>(*(it+1)).size())
			ret=*it;
		else
			ret=*(it+1);
		++it;//����
	}
	return ret;
}

int main()
{
	fstream file;//file stream
	file.open("test.txt",ios::in);
	string tmp;//���ڶ�ȡ����ʱ����
	vector<string>word;//���ڴ���������ĸ
	if(file)
	{
		while(!file.eof())
		{
			file>>tmp;
			word.push_back(tmp);
		}
	}

	vector<string> eligible;//���ڴ��治�ϳ�ͷ���³�ͷ�ķ�����������ĸ
	string maxlen;
	eligible=find(word);
	maxlen=findmax(eligible);

	for(auto it:eligible)
		cout<<it<<" ";
	cout<<maxlen;

	return 0;
}
