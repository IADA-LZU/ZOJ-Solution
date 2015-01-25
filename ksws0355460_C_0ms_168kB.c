#include <stdio.h>
int prove(int ,int );
int main()
{
	int m ,n;
	
	scanf("%d",&n);
	while (n != 0)
	{	
		m = 1;		
		while (prove(m,n-1) != 0) 
		{
			m++;	
		}
		printf("%d\n",m);
		scanf("%d",&n);
	} 
	return 0;
} 

int prove(int m,int n)
{
	int i,ans=0;
	
	for (i=2;i<=n;++i)
	{
		ans = (ans+m) % i;
	}
	return ans;
}
