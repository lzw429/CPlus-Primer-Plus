/*
��10.3.2�ڣ���349ҳ������ϰ�У���д��һ��ʹ��partition��biggies�汾��ʹ��check_size��bind��д�˺�����
*/

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>

using namespace std;
using namespace std::placeholders;

bool checkSize(const string& s, string::size_type size)
{
	return s.size() <= size;
}

void elimDups(vector<string>& words)//��vector<string> Ԫ�ؽ��� �ֵ�����ȥ�ء� 
{
	sort(words.begin(), words.end());
	cout << "vector��sort���ź��Ԫ������Ϊ��";
	for (auto a : words)
		cout << a << " ";
	cout << endl;

	auto end_unique = unique(words.begin(), words.end());
	cout << "vector��unique���ź��Ԫ������Ϊ��";
	for (auto a : words)
		cout << a << " ";
	cout << endl;

	words.erase(end_unique, words.end());
	cout << "vector��ɾ���ظ�Ԫ�غ������Ϊ��";
	for (auto a : words)
		cout << a << " ";
	cout << endl;
}

void biggies(vector<string>& words, vector<string>::size_type size)
{
	elimDups(words);
	stable_sort(words.begin(), words.end(), [](const string& a, const string& b) { return a.size() < b.size(); });
	auto wc = partition(words.begin(), words.end(), bind(checkSize, _1, size));
	auto count = words.end() - wc;
	cout << "���Ȳ�С��4�ĵ��ʣ�";
	for_each(wc, words.end(), [](const string& s) { cout << s << " "; });
	cout << endl;
}

int main()
{
	vector<string> vec = {"the", "According", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};
	biggies(vec, 4);
	getchar();
	return 0;
}
