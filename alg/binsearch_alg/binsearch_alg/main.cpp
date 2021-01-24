#include <iostream>
#include"binsearch_alg.h"
#include"display_func.h"
using namespace std;

int main()
{
    size_t datlength = 0;
    cout<<"input data length: ";
    cin >> datlength;
    cout<<"rand data generate start ..."<<endl;
    int a[datlength]={0};
    for(size_t i=0;i<datlength;i++)
    {
        a[i] = rand()*1.0/RAND_MAX*datlength;
    }
    cout<<"origin data general successful ."<<endl;
    display_arry_interface(datlength,a);

    string cs;
    cout<<"sort data start?(Y/N): ";
    cin>>cs;
    if(cs == "Y")
    {
        binsearch(0,datlength,a);
        cout<<"sort data successful ."<<endl;
        display_arry_interface(datlength,a);
    }


    return 0;
}
