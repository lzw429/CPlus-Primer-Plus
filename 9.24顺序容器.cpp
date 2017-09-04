//编写程序，分别使用at,下标运算符、front和begin 提取一个vector中的第一个元素。在一个空vector上测试你的程序。
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int>vec;
	auto var1 = vec.at(0);
	auto var2 = vec[0];
	auto var3 = vec.front();//front是首位元素的引用
	auto var4 = vec.begin();//begin是指向首位元素的迭代器

	return 0;
}
