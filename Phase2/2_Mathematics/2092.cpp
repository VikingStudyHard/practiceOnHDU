#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int m,n;
	double x,y;
	while (scanf("%d%d",&n,&m)!=EOF && (m!=0||n!=0))
	{
		x = ((double)n+(double)sqrt((double)(n*n-4*m)))/2;
		//y = ((double)n-(double)sqrt((double)(n*n-4*m)))/2;
		if (x == int(x) )//|| y == int(y))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}