/*
实现你自己的elimDups。测试你的程序，分别在读取输入后、调用unique后以及调用erase后打印vector的内容。 
*/

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

void elimDups(vector<string> &words)//排字典序，删除重复。
{
	sort(words.begin(),words.end());//sort是<algorithm>库中的函数。
	cout << "vector在sort重排后的元素内容为：";
	for (auto it : words)
		cout << it << " ";
	cout << endl;

	auto end_unique = unique(words.begin(), words.end());//unique只能排序，不能直接删除元素，返回的vector迭代器指向最后一个不重复元素之后的位置。
	cout << "vector在unique重排后的元素内容为：";
	for(auto it : words)
		cout << it << " ";
	cout << endl;

	words.erase(end_unique, words.end());//必须从end_unique开始删除。
	cout << "vector在删除重复元素后的内容为：";
	for (auto it : words)
		cout << it << " ";
	cout << endl;
}

int main()
{
	vector<string>vec = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	cout << "vector原始元素内容为：";
	for (auto it : vec)
		cout << it << " ";
	cout << endl;

	elimDups(vec);
	return 0;
}
