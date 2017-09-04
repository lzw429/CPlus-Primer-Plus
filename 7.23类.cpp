//编写你自己的Screen类。
#include<iostream>
#include<string>
using namespace std;

class Screen
{
public:
	typedef string::size_type pos;//position
	Screen()=default;
	Screen(pos ht,pos wd,char c):height(ht),width(wd),contents(ht*wd,c){}//高，宽，内容
	char get()const
	{
		return contents[cursor];
	}
	inline char get(pos ht,pos wd)const;
	Screen &move(pos r,pos c);
private:
	pos cursor=0;//光标
	pos height=0,width=0;
	string contents;
};//注意写这个分号

inline Screen &Screen::move(pos r,pos c)//在类外定义成员函数
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
