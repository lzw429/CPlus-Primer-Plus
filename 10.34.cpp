/* 
使用reverse_iterator逆序打印一个vector。 
*/  

#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

int main()
{
	vector<int>vec{1,2,3,4,5,6,7,8,9};
	
	for(auto it=vec.crbegin(),it!=vec.crend(),++it)//逆向迭代器，crbegin和crend
	{
		cout<<*it<<" ";
	}
	cout<<endl;
	
	return 0;
}