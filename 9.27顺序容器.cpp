//编写程序，查找并删除forward_list<int>中的奇数元素。
#include<iostream>
#include<forward_list>

using namespace std;

int main()
{
	forward_list<int>flist{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 20 };

	auto pre = flist.before_begin();
	auto cur = flist.begin();

	while(cur!=flist.end())//读到末尾之前
	{
		if (*cur % 2 != 0)//值为奇数的项
			cur = flist.erase_after(pre);
		else
		{
			pre=cur;
			++cur;
		}
	}

	cout << "删除奇数元素后flist中的元素内容为：";
    for (const auto &a : flist)
        cout << a << " ";
    cout << endl;

    return 0;
}
