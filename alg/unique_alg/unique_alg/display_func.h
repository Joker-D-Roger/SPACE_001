#ifndef DISPLAY_FUNC_H
#define DISPLAY_FUNC_H
#include<iostream>
#include<string>
template<class T>
void display_arry(int lo,int hi,std::string delim,T*arry)
{
    std::cout<<"arry content : ";
    for(int i=lo;i<hi;i++)
    {
        std::cout<<arry[i]<<delim;
    }
    std::cout<<std::endl;
}

template<class T>
void display_arry(int sz, std::string delim,T*arry)
{
    std::cout<<"arry content : ";
    for(int i=0;i<sz;i++)
    {
        std::cout<<arry[i]<<delim;
    }
    std::cout<<std::endl;
}

#endif // DISPLAY_FUNC_H
