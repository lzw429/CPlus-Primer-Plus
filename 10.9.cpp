/*
ʵ�����Լ���elimDups��������ĳ��򣬷ֱ��ڶ�ȡ����󡢵���unique���Լ�����erase���ӡvector�����ݡ� 
*/

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

void elimDups(vector<string> &words)//���ֵ���ɾ���ظ���
{
	sort(words.begin(),words.end());//sort��<algorithm>���еĺ�����
	cout << "vector��sort���ź��Ԫ������Ϊ��";
	for (auto it : words)
		cout << it << " ";
	cout << endl;

	auto end_unique = unique(words.begin(), words.end());//uniqueֻ�����򣬲���ֱ��ɾ��Ԫ�أ����ص�vector������ָ�����һ�����ظ�Ԫ��֮���λ�á�
	cout << "vector��unique���ź��Ԫ������Ϊ��";
	for(auto it : words)
		cout << it << " ";
	cout << endl;

	words.erase(end_unique, words.end());//�����end_unique��ʼɾ����
	cout << "vector��ɾ���ظ�Ԫ�غ������Ϊ��";
	for (auto it : words)
		cout << it << " ";
	cout << endl;
}

int main()
{
	vector<string>vec = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	cout << "vectorԭʼԪ������Ϊ��";
	for (auto it : vec)
		cout << it << " ";
	cout << endl;

	elimDups(vec);
	return 0;
}
