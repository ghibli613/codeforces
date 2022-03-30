#include <bits/stdc++.h>
using namespace std;

#define ll long long

void g(int t)
{
	if(t)
	{
		g((t-1)/26);
		char ch = 65+(t-1)%26;
		cout << ch;
	}
}

void solve()
{
	string s1;
	cin >> s1;
	stringstream s2;
	s2.str(s1);
	char c1, c2; int x=0, y=0;
	s2 >> c1 >> x >> c2 >> y;
	if (x > 0 && y > 0)
	{
		g(y);
		cout << x << '\n';
	}
	else
	{
		int i; x = 0;
		for(i = 0; s1[i] > 64; i++)
			x = x*26 + s1[i]-64;
		cout << 'R' << s1.substr(i, s1.length()-i) << 'C' << x << '\n';
	}
}

int main()
{
	int N;
	cin >> N;
	while(N--)
	{
		solve();
	}
	
	return 0;	
}

