/*
编写程序处理一个vector<string>，其元素都表示整型值。计算vector中所有元素之和。
修改程序，使之计算表示浮点值的string之和。
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int intsum(const vector<string> &vec)
{
	int ret = 0;
	for (auto it : vec)
		ret += stoi(it);//stoi即string to int
	return ret;
}
float flosum(const vector<string> &vec)
{
	float ret = 0;
	for (auto it : vec)
		ret += stof(it);//stof即string to float
	return ret;
}

int main()
{
	vector<string>intstr = { "1", "1", "2", "3", "5", "8", "13" };
	vector<string>flostr = { "1.1", "2.33", "3.5", "4", "5.5", "7.9" };
	int sumofint = intsum(intstr);
	float sumoffloat = flosum(flostr);
	cout << sumofint << endl << sumoffloat;
}
