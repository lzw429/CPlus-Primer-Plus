//��дһ���ݹ麯�������vector��������ݡ�
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>vec,vector<int>::size_type j);

int main()
{
	int val;
	vector<int>vec;
	while(cin>>val)
		vec.push_back(val);
	print(vec,0);
	return 0;
}

void print(vector<int>vec,vector<int>::size_type j)//j��һ�����ڱ������±�
{
	if(j!=vec.size()-1)
		print(vec,j+1);//print�ݹ����print����
	cout<<vec[j]<<endl;
}
