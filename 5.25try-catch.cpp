//修改两整数相除的程序，使用try语块去捕获异常。Catch子句应该为用户输出一条提示信息，询问其是否输入新数并重新执行try语块的内容。
#include<iostream>
#include<stdexcept>
using namespace std;

int main()
{
	int va1=0,val2=0;
	while(cin>>val1>>val2)
	{
		try
		{
			if(val2==0)
				throw runtime_error("Exception:val2 must not be zero!");
			double val3=(double)val1/val2;
			cout<<"The result is:"<<val3<<endl;
		}
		catch(runtime_error err)
		{
			cout<<err.what()<<"\nTry again? Enter y or n."<<endl;
			char c;
			cin>>c;
			if(!cin||c=='n')
				break;
		}
	}
	return 0;
}