/*
 * ��չ��ĳ��򣬺��Դ�Сд�ͱ�㡣���磬"example."��"example,"��"Example"��Ӧ�õ�����ͬ�ļ�������
 */

#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	map<string, size_t>word_count;
	string word;
	string ignore = ",.";//���Զ��ź;��
	while (cin >> word)
	{
		//ɾ�����ź;��
		auto iter = word.find_first_of(ignore);
		if (iter != string::npos)
			word.erase(iter);
		//ȫ��ת��ΪСд
		for (auto &ch : word)
			ch = tolower(ch);
		//ͳ�Ƹ���
		++word_count[word];
	}
	for (const auto &w : word_count)
		cout << w.first << " occurs " << w.second << ((w.second) > 1 ? " times." : " time.") << endl;
	return 0;
}
