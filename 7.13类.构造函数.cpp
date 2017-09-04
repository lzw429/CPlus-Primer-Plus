//使用istream构造函数重写程序。
#include<iostream>
#include<string>
using namespace std;

struct Sales_data
{
	friend istream &read(istream &, Sales_data &);//友元函数，便于Sales_data类直接访问
	Sales_data()=default;//默认构造函数
	Sales_data(const string &s):bookNo(s){}//读入bookNo
	Sales_data(const string &s, unsigned n, double p) :bookNo(s), units_sold(n), revenue(p*n) {}//读入三个数据
	Sales_data(istream &is);//成员函数的声明

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
	Sales_data total(cin);//使用了构造函数，为名为total的新对象输入数据
	if(total.units_sold!=0)
	{
		Sales_data trans;
		while(read(cin,trans))
		{
			if (total.isbn() == trans.isbn())
				total.combine(trans);
			else
			{
				print(cout, total) << endl;
				total = trans;
			}
		}
		print(cout, total) << endl;
	}
	else
	{
		cerr << "No data." << endl;
	}
	return 0;
}
