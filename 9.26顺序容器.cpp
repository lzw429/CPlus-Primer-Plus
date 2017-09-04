//使用下面代码定义的ia，将ia拷贝到一个vector和一个list中。使用单迭代器版本的erase从list中删除奇数元素，从vector中删除偶数元素。int ia[]={0,1,1,2,3,5,8,21,55,89};
#include<iostream>
#include<vector>
#include<list>

using namespace std;

int main()
{
	int ia[] = { 0,1,1,2,3,5,8,21,55,89 };
	vector<int>vec(begin(ia), end(ia));
	list<int>li(begin(ia), end(ia));

	auto vecit = vec.begin();
	auto liit = li.begin();

	while(vecit!=vec.end())
	{
		if (*vecit % 2 != 0)//元素是奇数
			++vecit;
		else//元素是偶数
			vecit = vec.erase(vecit);
	}

	while(liit!=li.end())
	{
		if (*liit % 2 != 0)//元素是奇数
			liit = li.erase(liit);
		else
			++liit;
	}
	return 0;
}
