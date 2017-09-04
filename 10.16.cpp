/*
使用lambda编写你自己版本的biggies。
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

	//获取一个迭代器，指向第一个满足长度大于给定的size的元素。//使用了一元谓词。
	auto wc = find_if(words.begin(), words.end(), [size](const string& cur) { return cur.size() >= size; });

	//计算长度大于给定的size的元素的数目。
	auto count = words.end() - wc;

	cout << "有" << count << "个单词的长度不短于" << size << ":" << endl;
	//打印长度大于等于给定值的单词，每个单词后面接一个空格。
	for_each(wc, words.end(), [](const string& cur) { cout << cur << " "; });
}

int main()
{
	vector<string> vec = {"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

	biggies(vec, 4);

	return 0;
}
