#include<iostream>
#include<string>
#include<math.h>

#define ll long long

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	double n, m, a;
	cin >> n >> m >> a;
	ll x = ceil(n/a), y = ceil(m/a);
	ll result = x*y;
	cout << result << endl;	
	
	return 0;	
}
