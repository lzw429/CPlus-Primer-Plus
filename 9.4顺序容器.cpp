//��д����������һ��ָ��vector<int>�ĵ�������һ��int��ֵ��������������ָ���ķ�Χ�У����Ҹ�����ֵ������һ������ֵָ���Ƿ��ҵ���
#include<iostream>
#include<vector>
using namespace std;

bool find_value(vector<int>vec,int n)
{
	auto begin = vec.begin();
	auto end = vec.end();
	while(begin!=end)
	{
		if (*begin == n)
			return true;
		else
			++begin;
	}
	return false;
}

int main()
{
	vector<int>vec = { 1,2,3,4,5,6,18 };
	for(int i=0;i!=vec.size();++i)
	{
		cout << vec[i] << " ";
		cout << endl;
	}
	if (find_value(vec, 18))
		cout << "The number is found in the vector." << endl;
	else
		cout << "The number can not be found in the vector." << endl;
	return 0;
}