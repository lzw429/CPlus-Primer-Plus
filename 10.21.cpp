/*
��дһ��lambda������һ���ֲ�int���������ݼ�����ֵ��ֱ������Ϊ0��
һ��������Ϊ0���ٵ���lambdaӦ�ò��ٵݼ�������lambdaӦ�÷���һ��boolֵ��
ָ������ı����Ƿ�Ϊ0��
*/

#include <iostream>
#include <algorithm>
using namespace std;

void lambda(int input)
{
	auto f = [&input]()mutable-> bool
		{
			--input;
			if (input == 0)return false;
			else return true;
		};
}

int main()
{
	int intnum;
	scanf("%d", &intnum);
	lambda(intnum);
	return 0;
}
