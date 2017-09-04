/*
头文件algorithm中定义了一个名为count的函数，它类似find，接受一对迭代器和一个值作为参数。
count返回给定值在序列中出现的次数。
编写程序，读取int序列存入vector中，打印有多少个元素的值等于给定的值。
*/

#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<int>vec= { 1, 1, 2, 3, 5, 8, 13, 21, 33, 1, 2, 2, 2, 5, 8 };
	int key=2;
	auto cnt=count(vec.begin(),vec.end(),key);
    cout << key << "在vec中出现的次数为：" << cnt << endl;
	return 0;
}
