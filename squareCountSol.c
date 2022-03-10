#include <stdio.h>
#define lli long long int

int main()
{
	lli tcase=0;
	scanf("%lld",&tcase);
	while(tcase>0)
	{
		lli n=0,sum=0,ans=0;
		scanf("%lld %lld",&n,&sum);
		ans=sum/(n*n);
		printf("%lld\n",ans);
		--tcase;
	}
	return 0;
}