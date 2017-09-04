//编写一个函数，接受三个string参数s、oldVal和newVal。使用迭代器及insert和erase函数将s中所有oldVal替换为newVal。
#include<iostream>
#include<string>
using namespace std;

void replace(string &s,const string &oldVal,const string &newVal)
{
	if (s.empty() || oldVal.empty() || newVal.empty())
	{
		cout << "s or oldVal or newVal 为空，请检查" << endl;
		return;
	}
	if(s.size()<oldVal.size())
	{
		cout << "要查找的字符串太长。" << endl;
		return;
	}
	string::iterator iter = s.begin();
	string substring;//substring：子字符串。
	while(iter!=s.end())
	{
		if (*iter == *oldVal.begin())//字符串首位匹配
		{
			substring = s.substr(iter - s.begin(), oldVal.size());
			if(substring==oldVal)//有子串匹配
			{
				unsigned cur = iter - s.begin();
				iter = s.erase(iter, iter + oldVal.size());
				s.insert(iter, newVal.begin(), newVal.end());
				iter = s.begin() + cur + oldVal.size() - 1;
			}
		}
		else
			++iter;
	}
}
int main()
{
	string str = { "mtho my C++ tho,Primer" };
	string oldVal("tho"), newVal("though");
	cout << "替换前的字符串为:" << str << endl;
	replace(str, oldVal, newVal);

	cout << "替换后的字符串为：" << str << endl;

	return 0;
}
