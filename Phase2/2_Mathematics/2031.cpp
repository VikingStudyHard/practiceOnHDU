#include<iostream>
#include<stdio.h>
#include<string.h>
int main()
{
	int i,x,y,s[1005];
	while(~scanf("%d%d",&x,&y))
	{
		memset(s,0,sizeof(s));//清空
		if(x<=0)//这个处理比较好......
		{
			x=-x; 
			printf("-");	
		}
		for(i=0;x!=0;i++)
		{
			s[i]=x%y;
			x/=y;
		}
		for(i=i-1;i>=0;i--)
		{
			printf("%X",s[i]);	
		}
		printf("\n");
	}
	return 0;
}
