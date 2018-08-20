//求一个数的阶乘数的位数
//
#include<cstdio>  
#include<cmath>  
#include<iostream>  
using namespace std;  
int main()  
{  
    int t;  
    int num;  
    double sum;  
    scanf("%d",&t);  
    while(t--)  
    {  
        sum=0;  
        scanf("%d",&num);  
        for(int i=1;i<=num;i++)  
        {  
            sum+=log10((double)i);  
        }  
        printf("%d\n",(int)sum+1);  
    }  
    return 0;  
}  