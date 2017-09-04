//编写程序，使用fill_n将一个序列中的int值都设置为0。
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