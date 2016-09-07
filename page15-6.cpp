#include <algorithm>
#include <iostream>
using namespace std;
typedef long LL;
LL max(LL a,LL b)
{
	return a>b?a:b;
}
int main()
{
    LL a,b,c;
    cin>>a>>b>>c;
    cout<<max(max(a,b),c);
    return 0;
}    