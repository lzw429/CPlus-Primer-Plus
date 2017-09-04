//比较一个list<int>中元素和一个veotr<int>中的元素。
#include<iostream>
#include<list>
#include<vector>

using namespace std;

int comp_list_vector(const list<int>li,const vector<int>vec)
{
    vector<int>tempvec(li.begin(), li.end());
    if (tempvec > vec)return 1;
    else if (tempvec == vec)return 0;
    else return -1;
}

int main()
{
    list<int> mylist = { 1, 1, 2, 3, 5,8,13 };
    vector<int> myvector = { 1, 1, 2, 3, 5 };
    cout << "mylist容器的元素为：";
    for (auto a : mylist)
        cout << a << " ";
    cout << endl;
    cout << "myvector容器的元素为：";
    for (auto b : myvector)
        cout << b << " ";
    cout << endl;
    cout << "比较结果为：";
    int flag = comp_list_vector(mylist, myvector);
    cout << (flag == 1 ? "mylist大于myvector" : (flag == 0 ? "mylist等于myvector" : "mylist小于myvector")) << endl;

    return 0;
}
