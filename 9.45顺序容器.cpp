//��дһ������������һ����ʾ���ֵ�string�����������ֱ��ʾǰ׺���硰Mr.����Ms.�����ͺ�׺���硰Jr.����III�������ַ�����ʹ�õ�������insert��append������ǰ׺�ͺ�׺��ӵ������������У������ɵ���string���ء�
#include<iostream>
#include<string>

using namespace std;

string combine(string &name,const string &pre,const string &su)
{
	string str(name);
	str.insert(0, pre);
	str.append(su);
	return str;
}

int main()
{
	string name("mango");
	cout << combine(name, "Mr.", "Jr.") << endl;
	return 0;
}