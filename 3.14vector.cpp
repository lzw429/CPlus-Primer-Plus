//��дһ�γ�����cin����һ�������������Ǵ���һ��vector����
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int v1;
	vector<int>vec1;
	while(cin>>v1)
	{
		vec1.push_back(v1);
	}
	for(auto &i:vec1)
	{
		cout<<i<<" ";
	}
	return 0;
}