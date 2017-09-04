/*头文件algorithm中定义了一个名为count的函数，它类似find，接受一对迭代器和一个值作为参数。 
count返回给定值在序列中出现的次数。编写程序，读取string序列存入list中，打印有多少个元素的值等于给定的值。 
*/  
#include<iostream>
#include<list>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
	list<string>li={ "my", "love", "C++", "love", "primer", "is", "hard", "hard", "hard" };  
    string tar="love";
	
	auto cnt=count(li.begin(),li.end(),tar);
	cout<<tar<<"在list中出现的次数为：" << cnt << endl; 
	return 0;
}