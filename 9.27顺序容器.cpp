//��д���򣬲��Ҳ�ɾ��forward_list<int>�е�����Ԫ�ء�
#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
	forward_list<int>flist{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 20 };

	auto pre = flist.before_begin();
	auto cur = flist.begin();

	while(cur!=flist.end())//����ĩβ֮ǰ
	{
		if (*cur % 2 != 0)//ֵΪ��������
			cur = flist.erase_after(pre);
		else
		{
			pre=cur;
			++cur;
		}
	}

	cout << "ɾ������Ԫ�غ�flist�е�Ԫ������Ϊ��";
    for (const auto &a : flist)
        cout << a << " ";
    cout << endl;

    return 0;
}
