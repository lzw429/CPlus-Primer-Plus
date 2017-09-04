/*
如果一个字母延伸到中线之上，如d或f，则称其有上出头部分(ascender)。
如果一个字母延伸到中线之下，如p或g，则称其有下出头部分（descender)。
编写程序，读入一个单词文件，输出最长的既不包含上出头部分，也不包含下出头部分的单词。
*/

#include<iostream>
#include<string>
#include<vector>
#include<fstream>//file stream

using namespace std;

vector<string> find(const vector<string>&vec)
{
	vector<string>ret;
	string ascender("bdfhklt");//上出头部分单词
	string descender("gjpqy");//下出头部分单词

	auto it=vec.begin();
	while(it!=vec.end())
	{
		if(it->find_first_of(ascender)==string::npos&&it->find_first_of(descender)==string::npos)
			ret.push_back(*it);
		++it;
	}
	return ret;
}

string findmax(const vector<string>&vec)
{
	string ret;
	auto it=vec.begin();
	while(it<vec.end()-1)
	{
		if((*it).size()>(*(it+1)).size())
			ret=*it;
		else
			ret=*(it+1);
		++it;//迭代
	}
	return ret;
}

int main()
{
	fstream file;//file stream
	file.open("test.txt",ios::in);
	string tmp;//用于读取的临时变量
	vector<string>word;//用于储存所有字母
	if(file)
	{
		while(!file.eof())
		{
			file>>tmp;
			word.push_back(tmp);
		}
	}

	vector<string> eligible;//用于储存不上出头或下出头的符合条件的字母
	string maxlen;
	eligible=find(word);
	maxlen=findmax(eligible);

	for(auto it:eligible)
		cout<<it<<" ";
	cout<<maxlen;

	return 0;
}
