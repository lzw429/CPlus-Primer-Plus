//����һ����X��Y������X����һ��ָ��Y��ָ�룬��Y����һ������ΪX�Ķ���
#include<iostream>
#include<string>
using namespace std;

class X;
class Y;

class X
{
public:
	X() = default;
	void print(ostream &os)
	{
		os << "This is a member of class X." << endl;
	}
private:
	Y *p;//ָ��Y��ָ��p
};

class Y
{
public:
	Y() = default;
	void print(ostream &os)
	{
		os << "This is a member of class Y." << endl;
	}
private:
	X x;//X���͵Ķ���x
};

int main()
{
	X a;
	a.print(cout);
	Y b;
	b.print(cout);
	return 0;
}