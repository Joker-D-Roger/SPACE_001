#include <iostream>
#include<algorithm>
#include "unique_alg.h"
#include "display_func.h"
using namespace std;



int main()
{
    int N = 20;
    int a[20]={0};
    cout<<"================disorder==============="<<endl;
    for(int i=0;i<N;i++)
    {
        a[i]=rand()*1.0/RAND_MAX*15;
    }
    cout<<"repeat :"<<endl;
    display_arry(N," ",a);

    int sz = unique_disorder(0,N-1,a);
    cout<<"unique pro: "<<endl;
    display_arry(sz," ",a);

    cout<<"===============order================="<<endl;
    for(int i=0;i<N;i++)
    {
        a[i]=rand()*1.0/RAND_MAX*15;
    }
    sort(begin(a),end(a));
    cout<<"repeat :"<<endl;
    display_arry(N," ",a);

    sz = unique_order(0,N-1,a);
    cout<<"unique pro: "<<endl;
    display_arry(sz," ",a);

    return 0;
}
