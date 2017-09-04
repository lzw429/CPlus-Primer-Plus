/*
在10.3.2节（第349页）的练习中，编写了一个使用partition的biggies版本。使用check_size和bind重写此函数。
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

void elimDups(vector<string>& words)//对vector<string> 元素进行 字典排序、去重。 
{
	sort(words.begin(), words.end());
	cout << "vector用sort重排后的元素内容为：";
	for (auto a : words)
		cout << a << " ";
	cout << endl;

	auto end_unique = unique(words.begin(), words.end());
	cout << "vector用unique重排后的元素内容为：";
	for (auto a : words)
		cout << a << " ";
	cout << endl;

	words.erase(end_unique, words.end());
	cout << "vector中删除重复元素后的内容为：";
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
	cout << "长度不小于4的单词：";
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
