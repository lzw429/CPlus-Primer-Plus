/*
 * 编写函数，返回一个动态分配的int的vector。
 * 将此vector传递给另一个函数，这个函数读取标准输入，将读入的值保存在vector元素中。
 * 再将vector传递给另外一个函数，打印读入的值。记得在恰当的时刻delete vector。
 */

#include<iostream>
#include<new>
#include<vector>

using namespace std;

vector<int>* alloc()//返回一个动态分配int的vector
{
	return new vector<int>;
}


void readValue(vector<int>*vec)//读取标准输入的值，保存到vector<int>
{
	int input;
	while (cin >> input)
		vec->push_back(input);
}

void printValue(vector<int>*vec)//打印vector<int>内元素的值
{
	for(auto it:*vec)
		cout << it << " ";
	delete vec;//删除动态分配的内存
	vec = nullptr;
}

int main()
{
	vector<int> *vec= alloc();
	readValue(vec);
	printValue(vec);

	return 0;
}