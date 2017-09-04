//编写一段程序，用cin输入一组整数并把它们存入一个vector对象。
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