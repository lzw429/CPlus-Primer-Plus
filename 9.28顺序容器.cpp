//��д����������һ��forward_list<string> ������ string ����������������Ӧ�������в��ҵ�һ��string�������ڶ���string���뵽�����ŵ�һ��string֮���λ�á�����һ��stringδ�������У��ս��ڶ���string ���뵽����ĩβ��
#include<iostream>
#include<forward_list>

using namespace std;

void fucfind(forward_list<string> &flist,const string &findword,const string &insertword)
{
	auto pre = flist.before_begin();
	auto cur = flist.begin();
	bool found = false;
	while(cur!=flist.end())
	{
		if (*cur == findword)
        {
            found = true;
            cur = flist.insert_after(cur, insertword);
        }
		else
		{
			pre = cur;
			++cur;
		}
	}
	if (found == false)
		flist.insert_after(pre, insertword);
}

int main()
{
	forward_list<string>flist= { "Hello", "C++", "I", "got", "you" ,"Hello","Primer" };
	string findword, insertword;
	cin >> findword >> insertword;
	fucfind(flist, findword, insertword);
	return 0;
}
