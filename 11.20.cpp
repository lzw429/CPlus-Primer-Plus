/*
 *单词计数程序，使用insert 代替下标操作。
 */

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	map<string, size_t>word_count;
	string word;
	while(cin>>word)
	{
		auto ret = word_count.insert({ word,1 });//insert返回的是pair
		if (!ret.second)//ret.second是bool型，为false表示关键字在容器中，为true表示关键字不在容器中
			++(ret.first->second);//ret.first 等价于 map<string,size_t>::iterator word_count;
								//不能是word->second或ret.second.
	}

	for(const auto &it:word_count)
	{
		cout << it.first << " occurs " << it.second << ((it.second > 1) ? " times." : " time.");
	}

	return 0;
}
