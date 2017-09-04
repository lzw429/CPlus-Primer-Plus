/*
��д������һ��vector<string>����Ԫ�ض���ʾ����ֵ������vector������Ԫ��֮�͡�
�޸ĳ���ʹ֮�����ʾ����ֵ��string֮�͡�
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

int intsum(const vector<string> &vec)
{
	int ret = 0;
	for (auto it : vec)
		ret += stoi(it);//stoi��string to int
	return ret;
}
float flosum(const vector<string> &vec)
{
	float ret = 0;
	for (auto it : vec)
		ret += stof(it);//stof��string to float
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
