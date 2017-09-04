/*
除了unique之外，标准库还定义了名为unique_copy的函数，它接受第三个迭代器，
表示拷贝不重复元素的目的位置。
编写一个程序，使用unique_copy将一个vector中不重复的元素拷贝到一个初始为空的list中。
*/

#include <iostream>  
#include <iterator>  
#include <vector>  
#include <list>  
#include <string>  
#include <algorithm> 

using namespace std;

int main()
{
	vector<string>vec = { "hello", "c++", "c++", "world", "my", "love", "love", "like","this","this" };
	list<string>list;

	unique_copy(vec.begin(), vec.end(), inserter(list, list.begin()));//三个迭代器；inserter返回迭代器
	for_each(list.begin(), list.end(), [](const string &str) {cout << str << " "; });
	cout << endl;
	return 0;
}