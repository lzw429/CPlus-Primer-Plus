//��д����ʹ��fill_n��һ�������е�intֵ������Ϊ0��
#include <iostream>  
#include <vector>  
#include <algorithm>  
  
using namespace std;  
  
int main()  
{  
    vector<int> vec = { 1, 1, 2, 3, 5, 8, 13, 21, 34, 55 };  

    fill_n(vec.begin(), vec.size(), 0);  
    for (auto a : vec)  
        cout << a << " ";  
    cout << endl;  
	
    return 0;  
}  