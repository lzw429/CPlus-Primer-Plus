/*
编写程序，使用stable_sort和isShorter将传递给你的elimDups版本的vector排序。打印vector的内容，验证你的程序的正确性。
*/

#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

bool isShort(const string &s1,const string &s2)//比较字符串长短，小于为真，大于为假。
{
	return s1.size() < s2.size();
}

void elimDups(vector<string> &words)
{
	sort(words.begin(), words.end());
	cout << "vector在sort重排后的元素内容为：\n";
	for (auto it : words)
		cout << it << endl;
	cout << endl;
}

int main()
{
	vector<string> vec = { "the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle" };
	for(const auto &it:vec)
		cout << it << " ";
	cout << endl;

	elimDups(vec);//sort

	stable_sort(vec.begin(), vec.end(), isShort);
	cout << "按长度重新排序后的vector元素内容为：";
	for (const auto &it : vec)
		cout << it << " ";
	cout << endl;

	return 0;
}
