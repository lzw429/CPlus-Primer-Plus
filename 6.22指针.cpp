//编写一个函数，令其交换两个int指针。
#include<iostream>
using namespace std;

void swap_int_pointer(int *p1,int *p2)
{
	cout<<"before swapping: "<<*p1<<' '<<*p2<<endl;
	int *temp=p1;//交换两个指针，交换的是两个指针储存的地址
	p1=p2;
	p2=temp;
	cout<<"After swapping:  "<<*p1<<' '<<*p2<<endl;
}

int main()
{
	int val1,val2;
	cin>>val1>>val2;
	swap_int_pointer(&val1,&val2);
	return 0;
}
