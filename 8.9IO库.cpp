//ʹ����Ϊ8.1.2�ڣ���281ҳ����һ����ϰ����д�ĺ�����ӡһ��istringstream��������ݡ�
#include<iostream>
#include<sstream>//string stream
#include<string>
#include<vector>
using namespace std;

istream &is_input(istream &in)
{
	auto old_state = in.rdstate();//��ס���ĵ�ǰ״̬
	string s;
	while (in >> s)
		cout << s << " ";
	in.setstate(old_state);
	return in;
}

int main()
{
	string line = "This is a test.";
	istringstream sin(line);//�����ַ�����������sin������������line��
	is_input(sin);
	return 0;
}
