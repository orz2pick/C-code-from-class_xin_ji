#include <cstdio>
#include <iostream>
using namespace std;
void p(int num)
{
	for(int i=1;i<=num;i++)
	putchar('*');
}
int main(int argc, char* argv[])
{
	p(30);	
	printf("\nVery good!\n");
	p(30);
	return 0;
}

