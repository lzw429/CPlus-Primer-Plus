//��δ�һ��list<int>��ʼ��һ��vector<double>?��һ��vector<int>�ָ���δ�������д������֤��Ĵ𰸡�
#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
	list<int> li = { 1,2,3,4,5,6,7,8,9,10 };
	auto iter1 = li.begin();
	auto iter2 = li.end();
	vector<int>vec = { 10,9,8,7,6,5,4,3,2,1 };

	while(iter1!=iter2)//����list�Ķ���li
	{
		cout << *iter1 << " ";
		++iter1;
	}
	cout << endl;

	vector<double>vec1(li.begin(), li.end());//���������ǣ�ָ����λ�ĵ�������ָ��ĩλ�ĵ�������ʹ���˹��캯����
	for (auto i = 0; i != vec1.size(); ++i)
		cout << vec1[i] << " ";
	cout << endl;

	vector<double>vec2(vec.begin(), vec.end());//���������ǣ�ָ����λ�ĵ�������ָ��ĩλ�ĵ�������ʹ���˹��캯����
	for (auto i = 0; i != vec2.size(); ++i)
		cout << vec2[i] << " ";
	return 0;
}
