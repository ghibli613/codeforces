#include<cstdio>

#define ll long long

void g(int t)
{
	if(t)
	{
		g((t-1)/26);
		putchar(65+(t-1)%26);
	}
}

void solve()
{
	int x, y;
   	char s[64], *p;
	gets(s);
	if(sscanf(s, "%*c%d%*c%d", &x, &y) == 2)
	{
		g(y);
		printf("%d\n",x);
	}
	else
	{
		for(x = 0, p = s; *p > 64; ++p)
			x = x * 26 + *p - 64;
		printf("R%sC%d\n",p,x);;
	}
}

int main()
{
	
	int N;
	scanf("%d ",&N);
	while(N--)
	{
		solve();
	}
	
	return 0;	
}

