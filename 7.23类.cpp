//��д���Լ���Screen�ࡣ
#include<iostream>
#include<string>
using namespace std;

class Screen
{
public:
	typedef string::size_type pos;//position
	Screen()=default;
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
	Screen s1(20,20,'S');
	cout<<s1.get(2,3)<<endl;
	return 0;
}
