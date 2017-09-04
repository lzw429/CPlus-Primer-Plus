//�޸�����������ĳ���ʹ��try���ȥ�����쳣��Catch�Ӿ�Ӧ��Ϊ�û����һ����ʾ��Ϣ��ѯ�����Ƿ���������������ִ��try�������ݡ�
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