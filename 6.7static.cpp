//编写一个函数，当它第一次被调用时返回0，以后每次被调用返回值加1。
#inclue<iostream>
using namespace std;

size_t count_calls()
{
	static size_t ctr=0;
	return ctr++;//第一次调用时返回0
}
int main()
{
	for(int i=0;i!=10;++i)
		cout<<count_calls()<<endl;
	return 0;
}
//size_t：程序运行的平台上能使用的最大的类型。