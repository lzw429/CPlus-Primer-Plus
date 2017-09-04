//从标准输入读取string序列，存入一个deque中。编写一个循环，用迭代器打印deque中的元素。
#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main()
{
	string tmpstr;
	deque<string> str;
	while(cin>>tmpstr)
	{
		str.push_back(tmpstr);
	}
	
	for(deque<string>::const_iterator iter=str.cbegin();iter!=str.cend();++iter)
	{
		cout << *iter << endl;
	}
	return 0;
}