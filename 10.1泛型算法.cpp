/*
ͷ�ļ�algorithm�ж�����һ����Ϊcount�ĺ�����������find������һ�Ե�������һ��ֵ��Ϊ������
count���ظ���ֵ�������г��ֵĴ�����
��д���򣬶�ȡint���д���vector�У���ӡ�ж��ٸ�Ԫ�ص�ֵ���ڸ�����ֵ��
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
    cout << key << "��vec�г��ֵĴ���Ϊ��" << cnt << endl;
	return 0;
}
