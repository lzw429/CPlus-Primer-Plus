//编写一个递归函数，输出vector对象的内容。
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

void print(vector<int>vec,vector<int>::size_type j)//j是一个用于遍历的下标
{
	if(j!=vec.size()-1)
		print(vec,j+1);//print递归调用print自身
	cout<<vec[j]<<endl;
}
