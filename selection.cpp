#include <iostream>
int main()
{
    int a[]={4,1,3,2,6,4,5,6,7,9,10,8,70};
    int len=sizeof(a)/sizeof(int);
    for(int i=0;i<len;i++)
    {
        int small_pos=i;
        for(int j=i+1;j<len;j++)
        {
            if(a[j]<a[small_pos])
            {
                small_pos=j;
            }
        }
        int t=a[i];
        a[i]=a[small_pos];
        a[small_pos]=t;
    }
    //printing the array 
    for(int i=0;i<len;i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;
}