/*ͷ�ļ�algorithm�ж�����һ����Ϊcount�ĺ�����������find������һ�Ե�������һ��ֵ��Ϊ������ 
count���ظ���ֵ�������г��ֵĴ�������д���򣬶�ȡstring���д���list�У���ӡ�ж��ٸ�Ԫ�ص�ֵ���ڸ�����ֵ�� 
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
	cout<<tar<<"��list�г��ֵĴ���Ϊ��" << cnt << endl; 
	return 0;
}