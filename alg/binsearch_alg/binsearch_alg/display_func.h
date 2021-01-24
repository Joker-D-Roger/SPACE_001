#ifndef DISPLAY_FUNC_H
#define DISPLAY_FUNC_H
#include<iostream>
#include<string>
template<class T>
void display_arry(size_t lo,size_t hi,std::string delim,T*arry)
{
    std::cout<<"arry content : ";
    for(size_t i=lo;i<=hi;i++)
    {
        std::cout<<arry[i]<<delim;
    }
    std::cout<<std::endl;
}

template<class T>
void display_arry(size_t sz, std::string delim,T*arry)
{
    std::cout<<"arry content : ";
    for(size_t i=0;i<sz;i++)
    {
        std::cout<<arry[i]<<delim;
    }
    std::cout<<std::endl;
}

template<class T>
void display_arry_interface(size_t sz,T*arry)
{
    bool iscontinue = true;
    std::cout<<"input display range (eg: 1 2 ): ";
    while(iscontinue)
    {
        size_t lo=0,hi=0;
        std::cin>>lo;
        std::cin>>hi;
        if(hi<=lo || sz<=hi)
        {
            std::cout<<"invalid input, input again: ";
            continue;
        }
        display_arry(lo,hi," ",arry);

        bool isquery = true;
        while(isquery)
        {
            std::cout<<"Need to display array? (Y/N): ";
            std::string cs;
            std::cin>>cs;
            if(cs == "Y")
            {
                std::cout<<"input display range (eg: 1 2 ): ";
                iscontinue = true;
                isquery = false;
            }
            else if(cs == "N")
            {
                std::cout<<"display finished ... "<<std::endl;
                iscontinue = false;
                isquery = false;
            }
            else
            {
                iscontinue = true;
                isquery = true;
            }
        }



    }
}
#endif // DISPLAY_FUNC_H
