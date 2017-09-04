//从标准输入读取string序列，存入一个list中。编写一个循环，用迭代器打印list中的元素。
#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
	string tmpstr;
	list<string> str;
	while(cin>>tmpstr)
	{
		str.push_back(tmpstr);
	}
	
	for(list<string>::const_iterator iter=str.cbegin();iter!=str.cend();++iter)
	{
		cout << *iter << endl;
	}
	return 0;
}