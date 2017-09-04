/*
 * 使用shared_ptr 而不是内置指针。
 * 返回一个动态分配的int的vector。
 * 将此vector传递给另一个函数，这个函数读取标准输入，将读入的值保存在vector元素中。
 */

#include<iostream>
#include<memory>
#include<vector>

using namespace std;

//返回一个动态分配的存储int的vector的智能指针。
shared_ptr<vector<int>>allocvec()
{
	return make_shared<vector<int>>();
}

//从标准输入读取值。
void readValue(shared_ptr<vector<int>>vec)
{
	int input;
	while (cin >> input)
		vec->push_back(input);
}

//打印从标准输入读取到的值
void printValue(shared_ptr<vector<int>>vec)
{
	for (auto it : *vec)
		cout << it << " ";
}

int main()
{
	shared_ptr<vector<int>>vec = allocvec();
	readValue(vec);
	printValue(vec);

	return 0;
}
