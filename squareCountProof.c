//#include <stdio.h>
#define __CPROVER_assert( x ) __CPROVER_assert((x),"")

int main()
{
	int n;
	__CPROVER_assume(n >=1 && n < N);
	//__CPROVER_assert(((n+1)*(n-1)) < n*n);
	int a[n+1];
	for(int i=0;i<n+1;++i)
	{
		__CPROVER_assume((a[i]>=0 && a[i]<n)|| a[i]==n*n);
	}
	int cnt=0,sum=0;
	for(int i=0;i<n+1;++i)
	{
		sum+=a[i];
		if(a[i]==n*n)
			++cnt;
	}

	__CPROVER_assert(cnt == sum/(n*n) );
}