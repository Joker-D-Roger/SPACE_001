#include<iostream>
#include<string>
#include"bubble_alg.h"
using namespace std;
int main()
{
    int a[11] = {4,3,2,6,8,4,5,10,9,13,11};
    int sz = 11;
    bubble_alg(a,sz);
    for(int i = 0;i<sz;i++)
    {
        cout<< a[i] <<" , ";
    }
    cout<<endl;

    return 0;
}