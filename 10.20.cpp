/*
��׼�ⶨ����һ����Ϊ count_if ���㷨������find_if���˺�������һ�Ե���������ʾһ�����뷶Χ��������һ��ν�ʣ�
������뷶Χ��ÿ��Ԫ��ִ�С�count_if����һ������ֵ����ʾν���ж��ٴ�Ϊ�档ʹ��count_if��д���ǵĳ�����ͳ���ж��ٵ��ʳ��ȳ���6�Ĳ��֡�
*/

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

bool isShorter(const string& s1, const string& s2)
{
	return s1.size() < s2.size();
}

void elimDups(vector<string>& words)
{
	sort(words.begin(), words.end());
	cout << "vector��sort������Ԫ������Ϊ��\n";
	for (const auto& it : words)
		cout << it << " ";
	cout << endl;

	auto end_unique = unique(words.begin(), words.end());
	cout << "vector��unique������Ԫ������Ϊ��\n";
	for (const auto& it : words)
		cout << it << " ";
	cout << endl;

	words.erase(end_unique, words.end());
	cout << "vector��ɾ���ظ�Ԫ�غ������Ϊ��\n";
	for (const auto& it : words)
		cout << it << " ";
	cout << endl;
}

void biggies(vector<string>& words, vector<string>::size_type size)
{
	//��words���ֵ�������ɾ���ظ����ʡ�
	elimDups(words);

	//���������򣬳�����ͬ�ĵ���ά���ֵ���//ʹ���˶�Ԫν�ʡ�
	stable_sort(words.begin(), words.end(), [](const string& cur, const string& cur_next) { return cur.size() < cur_next.size(); });

	//���㳤�ȴ��ڸ�����size��Ԫ�ص���Ŀ��
	auto count = count_if(words.begin(), words.end(), [size](const string& cur) { return cur.size() >= size; });

	cout << "��" << count << "�����ʵĳ��Ȳ�����" << size << "." << endl;
	//��ӡ���ȴ��ڵ��ڸ���ֵ�ĵ��ʣ�ÿ�����ʺ����һ���ո�
}

int main()
{
	vector<string> vec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

	biggies(vec, 6);
	
	return 0;
}
