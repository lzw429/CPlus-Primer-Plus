//�ӱ�׼�����ȡstring���У�����һ��list�С���дһ��ѭ�����õ�������ӡlist�е�Ԫ�ء�
#include<iostream>
#include<string>
#include<list>

using namespace std;

int main()
{
	string tmpstr;
	list<string> str;
	while(cin>>tmpstr)
	{
		str.push_back(tmpstr);
	}
	
	for(list<string>::const_iterator iter=str.cbegin();iter!=str.cend();++iter)
	{
		cout << *iter << endl;
	}
	return 0;
}