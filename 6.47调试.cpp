//ʹ�õݹ����vector���ݣ�ʹ���������������ִ�й����йص���Ϣ�����磬ÿ�ε���ʱ���vector����Ĵ�С���ֱ��ڴ򿪺͹رյ�����������±��벢ִ���������
#include<iostream>
#include<vector>
using namespace std;

void print(vector<string>vec,vector<string>::size_type n);
void print_debug(vector<string>vec,vector<string>::size_type n);
int main()
{
	vector<string>vec;
	string s;
	while(cin>>s)
	{
		vec.push_back(s);
	}
	vector<string>::size_type n=0;
	print(vec,n);
	cout<<endl;
	print_debug(vec,n);
	return 0;
}

void print(vector<string>vec,vector<string>::size_type n)
{
	if(n!=vec.size()-1)
		print(vec,n+1);
	cout<<vec[n]<<" ";
}

void print_debug(vector<string>vec,vector<string>::size_type n)
{
	cerr<<__func__<<":size is "<<vec.size()<<endl;
	if(n!=vec.size()-1)
		cout<<vec[n]<<" ";
	print(vec,n+1);
}
