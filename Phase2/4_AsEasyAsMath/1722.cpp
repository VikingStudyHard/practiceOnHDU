#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int gcd(int x,int y)
{
    return y==0?x:gcd(y,x%y);
}
int main()
{
    int a,b;
    while(scanf("%d%d",&a,&b)!=EOF)
    {
        printf("%d\n",a+b-gcd(a,b));
    }
    return 0;
}
