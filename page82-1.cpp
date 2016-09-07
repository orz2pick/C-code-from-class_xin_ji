#include <iostream>
#include <algorithm>
using namespace std;
double pow(double a,int x)//cal the a^x
{
	double res = 1.0;
	while(x>0)
	{
		if(x&1)
			res*=a;
		a = a*a;
		x>>=1;
	}
	return res;
}
int main()
{
	double r = 0.09;int n=10;
	
	cout<<pow(1+r,10)<<endl;
	return 0;
}