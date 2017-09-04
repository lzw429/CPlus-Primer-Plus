/*
��д���򣬽�������������һ�������ļ�����������ļ����ļ�����
�����ļ������Ӧ����������ʹ��istream_iterator ��ȡ�����ļ���
ʹ��ostream_iterator������д���һ������ļ���ÿ��ֵ�󶼸�һ���ո�
��ż��д��ڶ�������ļ���ÿ��ֵ����ռһ�С�
*/

#include<iostream>
#include<iterator>
#include<vector>
#include<fstream>

using namespace std;

int main(int argc,char **argv)
{
	//argv[0]�Ǳ��������ơ�
	ifstream infile(argv[1]);//�����ļ�
	ofstream outfile1(argv[2]);//����ļ�1����������
	ofstream outfile2(argv[3]);//����ļ�2������ż��
	
	vector<int>integers;
	istream_iterator<int>in_iter(infile),eof;
	ostream_iterator<int>out_iter1(outfile1," ");
	ostream_iterator<int>out_iter2(outfile2,"\r\n");
	
	copy(in_iter,back_insert(integers));//��ȡ��vector��
	for(auto it:integers)
	{
		if(it%2!=0)
			out_iter1=it;
		else
			out_iter2=it;
	}
	
	return 0;
}