/*
 * 定义两个类，StrBlobPtr、StrBlob
 */
#ifndef StrBlob		//如果没有define
#define StrBlob

#include<memory>
#include<vector>
#include<string>
using namespace std;

 //类的声明
class StrBlob;
class StrBlobPtr;

//类的定义
class StrBlobPtr
{
public:
	friend class StrBlob;

	strBlobPtr():curr(0){}
	
};

class StrBlob
{
public:
	friend class StrBlobPtr;
	typedef vector<string>::size_type size_type;
	//using size_type = vector<string>::size_type;

	StrBlob();//默认构造函数
	StrBlob(initializer_list<string>)
};