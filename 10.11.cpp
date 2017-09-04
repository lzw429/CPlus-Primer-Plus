/*
��д����ʹ��stable_sort��isShorter�����ݸ����elimDups�汾��vector���򡣴�ӡvector�����ݣ���֤��ĳ������ȷ�ԡ�
*/

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

bool isShort(const string &s1,const string &s2)//�Ƚ��ַ������̣�С��Ϊ�棬����Ϊ�١�
{
	return s1.size() < s2.size();
}

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	cout << "vector��sort���ź��Ԫ������Ϊ��\n";
	for (auto it : words)
		cout << it << endl;
	cout << endl;
}

int main()
{
	vector<string> vec = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	for(const auto &it:vec)
		cout << it << " ";
	cout << endl;

	elimDups(vec);//sort

	stable_sort(vec.begin(), vec.end(), isShort);
	cout << "����������������vectorԪ������Ϊ��";
	for (const auto &it : vec)
		cout << it << " ";
	cout << endl;

	return 0;
}
