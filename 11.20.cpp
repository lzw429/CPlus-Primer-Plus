/*
 *���ʼ�������ʹ��insert �����±������
 */

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	map<string, size_t>word_count;
	string word;
	while(cin>>word)
	{
		auto ret = word_count.insert({ word,1 });//insert���ص���pair
		if (!ret.second)//ret.second��bool�ͣ�Ϊfalse��ʾ�ؼ����������У�Ϊtrue��ʾ�ؼ��ֲ���������
			++(ret.first->second);//ret.first �ȼ��� map<string,size_t>::iterator word_count;
								//������word->second��ret.second.
	}

	for(const auto &it:word_count)
	{
		cout << it.first << " occurs " << it.second << ((it.second > 1) ? " times." : " time.");
	}

	return 0;
}
