//��д�������Զ�ģʽ��һ���ļ����������ݶ��뵽һ��string��vector�У���ÿһ����Ϊһ��������Ԫ�ش���vector�С�
#include<iostream>
#include<fstream>//file stream
#include<string>
#include<vector>

using namespace std;

void test_ifstream(string filename)
{
	string line;//����洢һ���ַ����ַ�����
	vector<string>vec;//����vector��
	ifstream in(filename);//input file stream �������ȡ���ļ�����

	while(!in.eof())//��ȡ��EOF֮ǰ
	{
		getline(in, line);//��ȡ�ļ���in�е�һ��
		vec.push_back(line);
	}

	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it << endl;
}

int main()
{
	test_ifstream("test.txt");
	return 0;
}
