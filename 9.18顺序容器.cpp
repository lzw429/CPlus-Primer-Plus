//�ӱ�׼�����ȡstring���У�����һ��deque�С���дһ��ѭ�����õ�������ӡdeque�е�Ԫ�ء�
#include<iostream>
#include<string>
#include<deque>

using namespace std;

int main()
{
	string tmpstr;
	deque<string> str;
	while(cin>>tmpstr)
	{
		str.push_back(tmpstr);
	}
	
	for(deque<string>::const_iterator iter=str.cbegin();iter!=str.cend();++iter)
	{
		cout << *iter << endl;
	}
	return 0;
}