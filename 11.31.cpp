/*
 * ��д���򣬶���һ�����߼�����Ʒ��multimap ��
 * ʹ��find �� multimap �в���һ��Ԫ�ز���erase ɾ������
 * ȷ����ĳ�����Ԫ�ز���map��ʱҲ���������С�
 */

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	multimap<string, string>books = { { "Ben","think in C++" },{ "Rock", "C++ Primer" },{ "Rock", "the C program" },{ "Li", "hackers" },{ "Li", "C++ primer plus" } };
	string keyword;

    for (auto const &iter : books)
	cout << iter.first << " " << iter.second << endl;

	cout << "������Ҫɾ���Ĺؼ��֣�";//ֻ��������
	cin >> keyword;
	auto cnt = books.count(keyword);
	if(!cnt)
		cout << "δ�ҵ�Ҫɾ���Ĺؼ��֡�" << endl;
	else
	{
		while(cnt)
		{
			auto iter = books.find(keyword);
			books.erase(iter);
			--cnt;
		}
		cout << "ɾ���ɹ���ɾ���������Ϊ��" << endl;
		for (auto const &iter : books)
			cout << iter.first << " " << iter.second << endl;
	}

	return 0;
}
