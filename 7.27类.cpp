/*
给你自己的Screen类添加move，set和display函数，通过执行下面的代码检验你的类是否正确。
Screen myScreen(5, 5, 'X');
myScreen.move(4, 0).set('#').display(cout);
cout << "\n";
myScreen.display(cout);
cout << "\n";
*/
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
	Screen &set(char);
	Screen &set(pos, pos, char);
	const Screen &display(ostream &os)const
	{
		do_display(os);
		return *this;
	}
private:
	pos cursor=0;//光标
	pos height=0,width=0;
	string contents;

	void do_display(ostream &os)const
	{
		os << contents;
	}
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

inline Screen &Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline Screen &Screen::set(pos r,pos col,char ch)
{
	contents[r*width + col] = ch;
	return *this;
}

int main()
{
	Screen s1(20, 20, 'F');
	cout << s1.get(2, 3) << endl;

	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	cout << "\n";
	myScreen.display(cout);
	cout << "\n";
	return 0;
}
