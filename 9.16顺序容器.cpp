//�Ƚ�һ��list<int>��Ԫ�غ�һ��veotr<int>�е�Ԫ�ء�
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
    cout << "mylist������Ԫ��Ϊ��";
    for (auto a : mylist)
        cout << a << " ";
    cout << endl;
    cout << "myvector������Ԫ��Ϊ��";
    for (auto b : myvector)
        cout << b << " ";
    cout << endl;
    cout << "�ȽϽ��Ϊ��";
    int flag = comp_list_vector(mylist, myvector);
    cout << (flag == 1 ? "mylist����myvector" : (flag == 0 ? "mylist����myvector" : "mylistС��myvector")) << endl;

    return 0;
}
