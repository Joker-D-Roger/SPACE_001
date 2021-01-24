#ifndef UNIQUE_ALG_H
#define UNIQUE_ALG_H

template <class T>
int unique_disorder(int lo,int hi,T* arry)
{
   int k=lo+1;
   while(k<=hi)
   {
       bool isRepeat = false;
       for(int i=lo;i<k;i++)
       {
           if(arry[k]==arry[i])
           {
               for(int j=k+1;j<=hi;j++)
               {
                   arry[j-1] = arry[j];
               }
               hi--;
               isRepeat = true;
               break;
           }
       }
       if(!isRepeat)
       {
           k++;
       }
   }

   return hi-lo+1;
}

template<class T>
int unique_order(int lo,int hi,T* arry)
{
    int i=lo,j=lo;
    while(++j <= hi)
    {
        if(arry[i]!=arry[j]) arry[++i] = arry[j];
    }
    return i-lo+1;
}
#endif // UNIQUE_ALG_H

