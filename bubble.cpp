#include <iostream>
int main()
{
    int a[]={5,6,3,2,1,4,8,9,7,10};
    int len=sizeof(a)/sizeof(int);
    for(int i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                a[j]^=a[j+1];
                a[j+1]^=a[j];
                a[j]^=a[j+1];
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