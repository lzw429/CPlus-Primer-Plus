//对于add, read和print，定义你自己的版本。 
#ifndef SALES_DATA_H//如果还没有define
#define SALES_DATA_H
#include<iostream>
#include<string>
using namespace std;

struct Sales_data
{
	string bookNo;
	unsigned units_sold=0;//非负数
	double revenue=0.0;
	
	string isbn()const
	{
		return bookNo;
	}
	Sales_data &combine(const Sales_data &);
	double avg_price()const;
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

Sales_data add(const Sales_data &item);

ostream &print(ostream &os,const Sales_data &item)
{
	os<<item.isbn()<<" "<<item.units_sold<<" "<<item.revenue<<" "<<item.avg_price();
	return os;
}

istream &read(istream &is,const Sales_data &item)
{
	is>>item.bookNo>>item.units_sold>>price;
	item.revenue=price*item.units_sold;
	return is;
}