/*编写你自己的单词计数程序*/
#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	map<string, size_t>word_count;
	string word;
	while(cin>>word)
		++word_count[word];
	for (const auto &w : word_count)
		cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times " : "time") << endl;
	//w.first是单词，w.second是单词出现的次数。

	return 0;
}