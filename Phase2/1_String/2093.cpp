#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<algorithm>
using namespace std;
struct person{
    char name[11];
    int accepted;
    int punish;
}acmer[10000];
 
int n,m;//n题目数，m惩罚分 
 
int cmp(const void *q,const void *w)
{
    person *a=(person*)q,*b=(person*)w;
    
    if(a->accepted!=b->accepted)
        return b->accepted-a->accepted;
    if(a->punish!=b->punish)
        return a->punish-b->punish;
    return strcmp(a->name,b->name);
}
 
int to_int(char *p)//此函数将字符串中的数字转化为int型数据 
{
    if(*p=='-'||*p=='0')
        return 0;//题目没做对，不做统计，直接0 
    int punish=0,temp=0;
    while(*p)
    {
        if(*p=='(')
        {
            while(*(++p)!=')')
            {
                temp=temp*10+*p-'0';
            }
            break;
        }
        punish=punish*10+*p-'0';
        p++;
    }
    return punish+temp*m;
}
int main()
{
    char a[12];
    int score,i=0;
    scanf("%d%d",&n,&m);
    while(scanf("%s",acmer[i].name)!=EOF)
    {
        acmer[i].accepted=0;
        acmer[i].punish=0;
        for(int j=0;j<n;j++)
        {
            scanf("%s",a);
            score=to_int(a);
            if(score>0)
            {
                acmer[i].accepted++;
                acmer[i].punish+=score;
            }
        }
        i++;
    }
    
    qsort(acmer,i,sizeof(acmer[0]),cmp);
    for(int j=0;j<i;j++)
    {
        printf("%-10s %2d %4d\n",acmer[j].name,acmer[j].accepted,acmer[j].punish);
    }
    return 0;
}
