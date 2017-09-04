//编写一个Sales_data类，向这个类添加combine和isbn成员。
#include<iostream>
#include<string>
using namespace std;

struct Sales_data
{
	string bookNo;//书号
	unsigned units_sold=0;//销量，非负数
	double revenue=0.0;//收入

	string isbn()const//const用于非静态成员函数后，const类型的函数不能对其成员进行修改操作，不能调用非const类型的成员函数
	{return bookNo;}
	Sales_data &combine(const Sales_data&);
	double avg_price() const;
};

double Sales_data::avg_price()const//定义成员函数
{
	if(units_sold!=0)
		return revenue/units_sold;
	else
		return 0;
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
	units_sold+=rhs.units_sold;//销量累加
	revenue+=rhs.revenue;//收入累加
	return *this;//返回调用该函数的对象；this是指针，return this返回指针
}

int main()
{
	return 0;
}
