/*
 * 编写一个程序，在一个vector而不是一个set中保存不重复的单词。
 */

#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<algorithm>

using namespace std;

int main()
{
	vector<string> words = { "C++", "my", "C++", "c", "is", "world", "c", "like" };
	sort(words.begin(), words.end());
	auto iter = unique(words.begin(), words.end());  
	words.erase(iter, words.end());  

	for (const auto words_it : words)
		cout << words_it << endl;
	
	return 0;
}