#include <bits/stdc++.h>
using namespace std;

void fun(int *p)

/* if i sent a pointer from main and do not dereference inside the  fun it will notchange the value of ptr  */

{
    p =NULL;

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