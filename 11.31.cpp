/*
 * 编写程序，定义一个作者及其作品的multimap 。
 * 使用find 在 multimap 中查找一个元素并用erase 删除它。
 * 确保你的程序在元素不在map中时也能正常运行。
 */

#include<iostream>
#include<map>
#include<string>

using namespace std;

int main()
{
	multimap<string, string>books = { { "Ben","think in C++" },{ "Rock", "C++ Primer" },{ "Rock", "the C program" },{ "Li", "hackers" },{ "Li", "C++ primer plus" } };
	string keyword;

    for (auto const &iter : books)
	cout << iter.first << " " << iter.second << endl;

	cout << "请输入要删除的关键字：";//只能是主键
	cin >> keyword;
	auto cnt = books.count(keyword);
	if(!cnt)
		cout << "未找到要删除的关键字。" << endl;
	else
	{
		while(cnt)
		{
			auto iter = books.find(keyword);
			books.erase(iter);
			--cnt;
		}
		cout << "删除成功，删除后的内容为：" << endl;
		for (auto const &iter : books)
			cout << iter.first << " " << iter.second << endl;
	}

	return 0;
}
