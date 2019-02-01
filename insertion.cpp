#include <iostream>
int main()
{
    int a[]={4,1,3,2,6,4,5,6,7,9,10,8,70};
    int len=sizeof(a)/sizeof(int);
    for(int i=0;i<len;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            if(a[j]>a[i])
            {
                int t=a[j];
                a[j]=a[i];
                a[i]=t;
            }
        }
        
    }
    //printing the array 
    for(int i=0;i<len;i++)
    {
        std::cout<<a[i]<<" ";
    }
    std::cout<<std::endl;
}