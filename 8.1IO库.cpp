//��д����������һ��istream&����������ֵ����Ҳ��istream&���˺�����Ӹ������ж�ȡ���ݣ�ֱ�������ļ�������־ʱֹͣ��������ȡ�����ݴ�ӡ�ڱ�׼����ϡ������Щ�������ڷ�����֮ǰ���������и�λ��ʹ�䴦����Ч״̬��
#include<iostream>
#include<string>
using namespace std;

istream &is_input(istream &in)
{
	auto old_state = in.rdstate();//��ס���ĵ�ǰ״̬��
	string s;
	while (in >> s)//����EOFʱֹͣ
	{
		cout << s << " ";//��׼���
	}
	in.setstate(old_state);//�ָ���Ϊԭ��״̬
	return in;
}

int main()
{
	is_input(cin);
	return 0;
}
