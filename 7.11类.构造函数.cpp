//在你的Sales_data类中添加构造函数，然后编写一段程序令其用到每个构造函数。
#include<iostream>
#include<string>
using namespace std;

struct Sales_data
{
	Sales_data()=default;//默认构造函数
	Sales_data(const string &s):bookNo(s){}//读入bookNo
	Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}//读入三个数据
	Sales_data(istream &);//成员函数声明

	string isbn()const//成员函数定义
	{
		return bookNo;
	}
	Sales_data &combine(const Sales_data &);//成员函数声明
	double avg_price()const;

	string bookNo;//成员变量
	unsigned units_sold = 0;
	double revenue = 0.0;
};

//函数声明
Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
istream &read(istream &, const Sales_data &);

//函数定义
double Sales_data::avg_price()const
{
	if (units_sold != 0)
	{
		return revenue / units_sold;
	}
	else
		return 0;
}

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

istream &read(istream &is, Sales_data &item)
{
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price*item.units_sold;
	return is;
}

ostream &print(ostream &os, const Sales_data &item)
{
	os << item.isbn() << " " << item.units_sold << " " << item.revenue << " " << item.avg_price();
	return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data)
{
	Sales_data sum = lhs;
	sum.combine(lhs);
	return sum;
}

Sales_data::Sales_data(istream &is)
{
	read(is, *this);
}

int main()
{
	Sales_data s1("Hero!I am");//调用第一种构造函数
	print(cout, s1);
	cout << endl;

	Sales_data s2("Hero!I am",10, 20);//调用第二种构造函数
	print(cout, s2);
	cout << endl;

	Sales_data s3(cin);//调用第三种构造函数
	print(cout, s3);
	cout << endl;
	return 0;
}
