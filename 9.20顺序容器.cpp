//��д���򣬴�һ��list<int>����Ԫ�ص�����deque�С�ֵΪż��������Ԫ�ض�������һ��deque�У�������ֵ����������һ��deque�С�
#include<iostream>
#include<list>
#include<deque>

using namespace std;

int main()
{
	list<int>li= { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int>deque_odd, deque_even;
	list<int>::const_iterator iter = li.cbegin();

	if (!li.empty())//���li�ǿղ���ִ�в���
	{
		while (iter != li.cend())
		{
			if (*iter % 2 == 1)//ֵΪ��������
				deque_odd.push_back(*iter);
			else //ֵΪż������
				deque_even.push_back(*iter);
			++iter;
		}
	}
	else
		cout << "The list is empty." << endl;

	cout << "ֵΪ������Ԫ�أ�";
	for (const auto &a : deque_odd)
		cout << a << " ";
	cout << endl;
	cout << "ֵΪż����Ԫ�أ�";
	for (const auto &b : deque_even)
		cout << b << " ";
	cout << endl;

	return 0;
}
