//编写程序，判定两个vector<int>是否相等。
#include<iostream>
#include<vector>
using namespace std;

void compare_vector(vector<int> vec1,vector<int> vec2)
{
	if(vec1.size()==vec2.size())
	{
		bool flag = false;
		for(auto i=0;i!=vec1.size();++i)
		{
			if (vec1[i] == vec2[i])
				flag = true;
			else
				flag = false;
		}
		if (flag == true)
			cout << "Equal." << endl;
		else
			cout << "Not equal." << endl;
	}
	cout << "Not equal." << endl;
}

int main()
{
	vector<int> vec1 = { 1,2,3,4,5,6,7,8 };
	vector<int> vec2 = { 1,2,3,4 };
	vector<int> vec3 = { 1,2,3,4 };
	cout << "Compare vec1 and vec2: ";
	compare_vector(vec1, vec2);

	cout << "Compare vec2 and vec3: ";
	compare_vector(vec2, vec3);
	return 0;
}
