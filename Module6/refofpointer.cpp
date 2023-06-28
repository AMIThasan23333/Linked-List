#include <bits/stdc++.h>
using namespace std;

void fun(int *p)

//  it will print 20 as i changed  the refence 

{
    *p =20;

}


int main()
{
    int val = 10;
    int *ptr = &val;
    fun(ptr);
    cout << val << endl;
    cout << *ptr << endl;
    return 0;
}