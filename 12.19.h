/*
 * ���������࣬StrBlobPtr��StrBlob
 */
#ifndef StrBlob		//���û��define
#define StrBlob

#include<memory>
#include<vector>
#include<string>
using namespace std;

 //�������
class StrBlob;
class StrBlobPtr;

//��Ķ���
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

	StrBlob();//Ĭ�Ϲ��캯��
	StrBlob(initializer_list<string>)
};