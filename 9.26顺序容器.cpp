//ʹ��������붨���ia����ia������һ��vector��һ��list�С�ʹ�õ��������汾��erase��list��ɾ������Ԫ�أ���vector��ɾ��ż��Ԫ�ء�int ia[]={0,1,1,2,3,5,8,21,55,89};
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
		if (*vecit % 2 != 0)//Ԫ��������
			++vecit;
		else//Ԫ����ż��
			vecit = vec.erase(vecit);
	}

	while(liit!=li.end())
	{
		if (*liit % 2 != 0)//Ԫ��������
			liit = li.erase(liit);
		else
			++liit;
	}
	return 0;
}
