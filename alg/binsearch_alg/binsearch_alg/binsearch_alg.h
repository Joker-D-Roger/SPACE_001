#ifndef BINSEARCH_ALG_H
#define BINSEARCH_ALG_H

template<class T>
void mergearry(size_t lo,size_t mi,size_t hi,T*arry)
{
    size_t lsz = mi - lo+1;
    size_t hsz = hi - mi;
    T* pl = new T[lsz];
    T* ph = arry+mi+1;
    T* pr = arry+lo;
    for(size_t i=0;i<lsz;i++)
    {
        pl[i] = arry[lo+i];
    }

    for(size_t i=0,j=0,k=0;i<lsz||j<hsz;)
    {
        if(j>=hsz ||(i<lsz && pl[i]<=ph[j])) pr[k++] = pl[i++];
        if(i>=lsz || (j<hsz && ph[j]<pl[i])) pr[k++] = ph[j++];
    }

    delete[]pl;
}

template<class T>
void binsearch(size_t lo,size_t hi,T*arry)
{
    if(hi == lo) return;
    size_t mi = (lo+hi)>>1;
    binsearch(lo,mi,arry);
    binsearch(mi+1,hi,arry);
    mergearry(lo,mi,hi,arry);
}


#endif // BINSEARCH_ALG_H
