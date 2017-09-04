//编写函数，接受一个forward_list<string> 和两个 string 共三个参数。函数应在链表中查找第一个string，并将第二个string插入到紧接着第一个string之后的位置。若第一个string未在链表中，刚将第二个string 插入到链表末尾。
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
