//��accumulate��һ��vector�е�Ԫ��֮�͡� 
#include<iostream>
#include<vector>
#include<numeric>

using namespace std;
int main()
{
	vector<int>vec = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 };  
	auto sum=accumulate(vec.cbegin(),vec.cend(),0);
	cout << "vec�е�Ԫ��֮��Ϊ��" << sum << endl;  
    return 0;  
}