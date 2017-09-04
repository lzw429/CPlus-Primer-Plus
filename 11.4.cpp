/*
 * 扩展你的程序，忽略大小写和标点。例如，"example."，"example,"和"Example"，应该递增相同的计数器。
 */

#include<iostream>
#include<map>
#include<set>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	map<string, size_t>word_count;
	string word;
	string ignore = ",.";//忽略逗号和句号
	while (cin >> word)
	{
		//删除逗号和句号
		auto iter = word.find_first_of(ignore);
		if (iter != string::npos)
			word.erase(iter);
		//全部转换为小写
		for (auto &ch : word)
			ch = tolower(ch);
		//统计个数
		++word_count[word];
	}
	for (const auto &w : word_count)
		cout << w.first << " occurs " << w.second << ((w.second) > 1 ? " times." : " time.") << endl;
	return 0;
}
