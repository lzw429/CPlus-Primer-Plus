//定义你自己的Debug.
#include<iostream>
#include<string>
using namespace std;

class Debug
{
public:
	//constexpr函数的唯一可执行语句就是返回语句。
	constexpr Debug(bool b=true):hw(b),io(b),other(b){}
	constexpr Debug(bool h,bool i,bool o):hw(h),io(i),other(o){}
	constexpr bool any() { return hw || io || other; }
	void set_io(bool b){io = b;}
	void set_hw(bool b){hw = b;}
	void set_other(bool b) { hw = b; }
private:
	bool hw;
	bool io;
	bool other;
};

int main()
{
	constexpr Debug io_sub(false, true, false);
	if(io_sub.any())
		cerr << "print appropriate error messages" << endl;
	constexpr Debug prod(false);
	if (prod.any())
		cerr << "print an error message" << endl;
	return 0;
}
