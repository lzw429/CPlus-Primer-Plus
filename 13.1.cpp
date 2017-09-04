/*
��⿽����Ա�͹��캯����һ���÷����Ƕ���һ���򵥵��࣬Ϊ���ඨ����Щ��Ա��ÿ����Ա��ӡ���Լ������֣�
struct X
{
	X() { std::cout << "X()" << std::endl; }
	X(const X&) { std::cout << "X(const X&)" << std::endl; }
};
��X��ӿ�����ֵ���������������������дһ�������Բ�ͬ��ʽʹ��X�Ķ���
��������Ϊ�����ú����ò������ݣ�
��̬�������ǣ�
�����Ǵ���������У�
������ࡣ�۲����������ֱ����ȷ�������ʲôʱ���ʹ�ÿ������Ƴ�Ա���Լ�Ϊʲô��ʹ�����ǡ�
����������ʱ����ס�����������Թ��Կ������캯���ĵ��á�
*/

#include<iostream>
#include<string>
#include<vector>

struct X
{
	//���캯��
	X()
	{
		std::cout<<"X()"<< std::endl;
	}

	//�������캯��
	X(const X&)
	{
		std::cout << "X(const X&)" << std::endl;
	}

	//������ֵ�����
	X& operator=(const X&)
	{
		std::cout << "X& operator=(const X&)" << std::endl;
	}

	//��������
	~X()
	{
		std::cout << "~X()" << std::endl;
	}
};

int main()
{
	vector<X> Xvec;
	X *Xp = new X;//���ù��캯��
	X Xcopy = *xp;//���ÿ������캯��
	X &rp = *xp;//�󶨣����ǹ���
	Xvec.push_back(rp);//���ÿ������캯��
	delete Xp;//���������������ͷŶ�̬�ڴ�

	return 0;
}