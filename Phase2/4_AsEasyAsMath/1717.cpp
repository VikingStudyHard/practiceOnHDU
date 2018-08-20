#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
char str[20];
 
int gcd(int n,int m)
{
	int i;
	while(m)
	{
		i=n%m;
		n=m;
		m=i;
	}
	return n;
}
 
int main()
{
	int t,len,j,k,cnt,num,len_r,inter,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		len=strlen(str);
		if(!strchr(str,'(' ))//没有循环节的情况 
		{
			cnt=0; num=1;
			for(i=len-1;i>1;i--)
				cnt+=(str[i]-'0')*pow(10.0,(len-i-1)*1.0);//分子 
			for(i=2;i<len;++i)
				num*=10;//分母 
			int res=gcd(num,cnt);
			num/=res;
			cnt/=res;
			printf("%d/%d\n",cnt,num);
		}
		else//有循环节的情况 
		{
			for(i=2;i<len;++i)
			{
				if(str[i]=='(')
				{
					j=i-2;//小数点后不循环处的长度 
					k=i;
				}
				if(str[i]==')')
				{
					len_r=i-k-1;//循环处的长度 
				}
			}
			cnt=0;num=0;
			for(i=k+1;i<=len-2;i++) 
			{
				cnt=cnt*10+(str[i]-'0');//分子 
				num=num*10+9;//分母 
			}
			inter=0;
			for(i=k-1;i>1;--i)
				inter+=(str[i]-'0')*pow(10.0,(k-1-i));//求不循环的部分 
			int res=gcd(num,cnt);
			num/=res;
			cnt/=res;
			cnt+=(inter*num);
			for(i=0;i<j;++i)//因为数字扩大了10^j倍，分母也要扩大相同的倍数 
				num*=10;
			res=gcd(num,cnt);
			num/=res;
			cnt/=res; 
			printf("%d/%d\n",cnt,num);
		}
	}
	return 0;
}