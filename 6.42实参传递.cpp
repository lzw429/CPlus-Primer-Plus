//����һ�������������success��failure�ĵ����͸�����ʽ������Ĭ��ʵ��Ϊ's'
#include<iostream>
using namespace std;

string make_plural(size_t ctr,const string &word,const string &ending="s");

int main()
{
	cout<<make_plural(1,"success","")<<endl;//������ʽ��ending����ֵΪ��
	cout<<make_plural(1,"failure","")<<endl;//������ʽ��ending����ֵΪ��
	cout<<endl;
	cout<<make_plural(2,"success","es")<<endl;//������ʽ
	cout<<make_plural(2,"failure")<<endl;//������ʽ��endingʹ��Ĭ��ֵ
	return 0;
}

string make_plural(size_t ctr,const string &word,const string &ending)//����ʱ�Ѹ�ֵ�����庯��ʱ�����ظ���ֵ
{
	return (ctr>1)? word+ending : word;
}
