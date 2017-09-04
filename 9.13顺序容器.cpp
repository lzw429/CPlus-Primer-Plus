//如何从一个list<int>初始化一个vector<double>?从一个vector<int>又该如何创建？编写代码验证你的答案。
#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
	list<int> li = { 1,2,3,4,5,6,7,8,9,10 };
	auto iter1 = li.begin();
	auto iter2 = li.end();
	vector<int>vec = { 10,9,8,7,6,5,4,3,2,1 };

	while(iter1!=iter2)//遍历list的对象li
	{
		cout << *iter1 << " ";
		++iter1;
	}
	cout << endl;

	vector<double>vec1(li.begin(), li.end());//两个参数是：指向首位的迭代器和指向末位的迭代器，使用了构造函数。
	for (auto i = 0; i != vec1.size(); ++i)
		cout << vec1[i] << " ";
	cout << endl;

	vector<double>vec2(vec.begin(), vec.end());//两个参数是：指向首位的迭代器和指向末位的迭代器，使用了构造函数。
	for (auto i = 0; i != vec2.size(); ++i)
		cout << vec2[i] << " ";
	return 0;
}
