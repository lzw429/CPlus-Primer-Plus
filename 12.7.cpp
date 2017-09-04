/*
 * ʹ��shared_ptr ����������ָ�롣
 * ����һ����̬�����int��vector��
 * ����vector���ݸ���һ�����������������ȡ��׼���룬�������ֵ������vectorԪ���С�
 */

#include<iostream>
#include<memory>
#include<vector>

using namespace std;

//����һ����̬����Ĵ洢int��vector������ָ�롣
shared_ptr<vector<int>>allocvec()
{
	return make_shared<vector<int>>();
}

//�ӱ�׼�����ȡֵ��
void readValue(shared_ptr<vector<int>>vec)
{
	int input;
	while (cin >> input)
		vec->push_back(input);
}

//��ӡ�ӱ�׼�����ȡ����ֵ
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
