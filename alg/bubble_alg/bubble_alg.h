
template<class T> void swap_l(T& a,T& b)
{
    T x = a;
    a = b;
    b = x;
}

template<class T> int bubble(T*arry,int lo,int hi)
{
    int sort = 0;
    while(++lo < hi)
    {
        if(arry[lo-1]>arry[lo])
        {
            swap_l(arry[lo-1],arry[lo]);
            sort = 1;
        }
    }
    return sort;
}

template<class T> void bubble_alg(T* arry,int sz)
{
    int lo=0,hi=sz;
    while(bubble(arry,lo,hi--));

}