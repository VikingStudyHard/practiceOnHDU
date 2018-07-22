#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

char a[50000],b[50000];
void clearzero(char*str)
{
	int i,len;
	len=strlen(str);
	if(strstr(str,".")!=NULL)//如果有小数点的话，才清零。点是一个字符串所以要用双引号括起来。 
	{
		for(i=len-1;str[i]=='0';i--)//注意遍历方向！！ 
	     // len--;这是不对的。因为这样写根本没有达到去零的效果！！！ 
	     str[i]='\0';
	   if(str[i]=='.')//如果小数点后面全是0，则小数点也抹掉！ 
	      str[i]='\0';
	} 
	
}
int main()
{
	while(scanf("%s%s",a,b)!=EOF)
	{
		clearzero(a);
		clearzero(b);
		if(strcmp(a,b)==0)//两字符串比较时，遇‘\0’结束。 
		  printf("YES\n");
		else
		  printf("NO\n");
	}
	return 0;
} 
