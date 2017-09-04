/*
标准库定义了一个名为 count_if 的算法。类似find_if，此函数接受一对迭代器，表示一个输入范围，还接受一个谓词，
会对输入范围中每个元素执行。count_if返回一个计数值，表示谓词有多少次为真。使用count_if重写我们的程序中统计有多少单词长度超过6的部分。
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
	cout << "vector在sort排序后的元素内容为：\n";
	for (const auto& it : words)
		cout << it << " ";
	cout << endl;

	auto end_unique = unique(words.begin(), words.end());
	cout << "vector在unique排序后的元素内容为：\n";
	for (const auto& it : words)
		cout << it << " ";
	cout << endl;

	words.erase(end_unique, words.end());
	cout << "vector在删除重复元素后的内容为：\n";
	for (const auto& it : words)
		cout << it << " ";
	cout << endl;
}

void biggies(vector<string>& words, vector<string>::size_type size)
{
	//将words按字典序排序，删除重复单词。
	elimDups(words);

	//按长度排序，长度相同的单词维持字典序。//使用了二元谓词。
	stable_sort(words.begin(), words.end(), [](const string& cur, const string& cur_next) { return cur.size() < cur_next.size(); });

	//计算长度大于给定的size的元素的数目。
	auto count = count_if(words.begin(), words.end(), [size](const string& cur) { return cur.size() >= size; });

	cout << "有" << count << "个单词的长度不短于" << size << "." << endl;
	//打印长度大于等于给定值的单词，每个单词后面接一个空格。
}

int main()
{
	vector<string> vec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

	biggies(vec, 6);
	
	return 0;
}
