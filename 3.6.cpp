//��дһ�γ���ʹ�÷�Χfor��佫�ַ����ڵ������ַ���X���档
#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	while (cin >> s)
	{
		for (auto &c:s)//c��һ�����ã���ֵ��佫�ı�s�е��ַ�ֵ
			c = 'X';
		cout << s << endl;
	}
	return 0;
}
