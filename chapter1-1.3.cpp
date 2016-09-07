#include <stdio.h>
typedef long LL;
LL max(LL a,LL b)
{
	return a>b?a:b;
}
int main()
{
	LL a,b;
	scanf("%I64d%I64d",&a,&b);
	printf("max=%I64d\n",max(a,b));
	return 0;
}