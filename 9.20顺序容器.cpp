//编写程序，从一个list<int>拷贝元素到两个deque中。值为偶数的所有元素都拷贝到一个deque中，而奇数值都拷贝到另一个deque中。
#include<iostream>
#include<list>
#include<deque>

using namespace std;

int main()
{
	list<int>li= { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	deque<int>deque_odd, deque_even;
	list<int>::const_iterator iter = li.cbegin();

	if (!li.empty())//如果li非空才能执行操作
	{
		while (iter != li.cend())
		{
			if (*iter % 2 == 1)//值为奇数的项
				deque_odd.push_back(*iter);
			else //值为偶数的项
				deque_even.push_back(*iter);
			++iter;
		}
	}
	else
		cout << "The list is empty." << endl;

	cout << "值为奇数的元素：";
	for (const auto &a : deque_odd)
		cout << a << " ";
	cout << endl;
	cout << "值为偶数的元素：";
	for (const auto &b : deque_even)
		cout << b << " ";
	cout << endl;

	return 0;
}
