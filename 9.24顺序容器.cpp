//��д���򣬷ֱ�ʹ��at,�±��������front��begin ��ȡһ��vector�еĵ�һ��Ԫ�ء���һ����vector�ϲ�����ĳ���
#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector<int>vec;
	auto var1 = vec.at(0);
	auto var2 = vec[0];
	auto var3 = vec.front();//front����λԪ�ص�����
	auto var4 = vec.begin();//begin��ָ����λԪ�صĵ�����

	return 0;
}
