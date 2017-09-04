//编写一个函数，令其接受两个参数：一个是int型的数，另一个是int指针。函数比较int的值和指针所指的值，返回较大的那个。
#include<iostream>
using namespace std;

int compare(const int &val,const int *p)//只读，不修改val
{
	return val>(*p) ? val : *p;
}

int main()
{
	int a(0),b(0);//初始化a、b为0
	cin>>a>>b;
	cout<<"The bigger one is "<<compare(a,&b)<<endl;
	return 0;
}
