//��дһ��main�����������������ʵ�Σ���ʵ�ε��������ӳ�һ��string�������������
#include<iostream>
#include<string>
#include<cctype>
#include<cstring>

using namespace std;

int main(int argc,char *argv[])
{
	cout<<argv[0]<<'\n'<<argv[1]<<'\n'<<argv[2]<<'\n';
	strcat(argv[1],argv[2]);
	cout<<argv[1]<<endl;
	return 0;
}
