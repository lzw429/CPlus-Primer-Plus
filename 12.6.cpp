/*
 * ��д����������һ����̬�����int��vector��
 * ����vector���ݸ���һ�����������������ȡ��׼���룬�������ֵ������vectorԪ���С�
 * �ٽ�vector���ݸ�����һ����������ӡ�����ֵ���ǵ���ǡ����ʱ��delete vector��
 */

#include<iostream>
#include<new>
#include<vector>

using namespace std;

vector<int>* alloc()//����һ����̬����int��vector
{
	return new vector<int>;
}


void readValue(vector<int>*vec)//��ȡ��׼�����ֵ�����浽vector<int>
{
	int input;
	while (cin >> input)
		vec->push_back(input);
}

void printValue(vector<int>*vec)//��ӡvector<int>��Ԫ�ص�ֵ
{
	for(auto it:*vec)
		cout << it << " ";
	delete vec;//ɾ����̬������ڴ�
	vec = nullptr;
}

int main()
{
	vector<int> *vec= alloc();
	readValue(vec);
	printValue(vec);

	return 0;
}