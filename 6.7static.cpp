//��дһ��������������һ�α�����ʱ����0���Ժ�ÿ�α����÷���ֵ��1��
#inclue<iostream>
using namespace std;

size_t count_calls()
{
	static size_t ctr=0;
	return ctr++;//��һ�ε���ʱ����0
}
int main()
{
	for(int i=0;i!=10;++i)
		cout<<count_calls()<<endl;
	return 0;
}
//size_t���������е�ƽ̨����ʹ�õ��������͡�