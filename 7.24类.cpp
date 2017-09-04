//�����Screen������������캯����һ��Ĭ�ϵĹ��캯������һ�����캯�����ܿ�͸ߵ�ֵ��Ȼ��contents��ʼ���ɸ��������Ŀհף����������캯�����ܿ�͸ߵ�ֵ�Լ�һ���ַ������ַ���Ϊ��ʼ��֮����Ļ�����ݡ�
#include<iostream>
#include<string>
using namespace std;

class Screen
{
public:
	typedef string::size_type pos;//position
	Screen()=default;
	Screen(pos ht,pos wd):height(ht),width(wd),contents(ht*wd,' '){}
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}//�ߣ�������
	char get()const
	{
		return contents[cursor];
	}
	inline char get(pos ht,pos wd)const;
	Screen &move(pos r,pos c);
private:
	pos cursor=0;//���
	pos height=0,width=0;
	string contents;
};//ע��д����ֺ�

inline Screen &Screen::move(pos r,pos c)//�����ⶨ���Ա����
{
	pos row=r*width;
	cursor=row+c;
	return *this;
}

char Screen::get(pos r,pos c)const
{
	pos row=r*width;
	return contents[row+c];
}

int main()
{
	Screen s2(2,3);
	cout<<s2.get(1,1)<<endl;

	Screen s1(2,3,'F');
	cout<<s1.get(1,1)<<endl;
	return 0;
}
