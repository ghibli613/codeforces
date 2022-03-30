#include<bits/stdc++.h>
using namespace std;

typedef pair<double, double> point;

#define ll long long
#define x first
#define y second
#define min 2*PI/100

double PI = acos(-1);

double round_d(double a)
{
	return round(a*1e9)/1e9;
}

double gcd(double a, double b)
{
	return a < min ? b : gcd(fmod(b,a), a);
}

double dist(point a, point b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}

void solve()
{
	point pt[3];
	double a, b, c, A, B, C, s, p, R, g;
	for(int i = 0; i < 3; i++)
		cin >> pt[i].x >> pt[i].y;

	a = dist(pt[0],pt[1]);
	b = dist(pt[1],pt[2]);
	c = dist(pt[2],pt[0]);
	p = (a + b + c)/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	R = (a*b*c)/(4*s);
	A = 2*asin(round_d(a/(2*R)));
	B = 2*asin(round_d(b/(2*R)));
	C = 2*PI-A-B;
	g = gcd(A,B);
	g = gcd(g,C);
	cout << fixed << setprecision(6) << PI*R*R*sin(g)/g << "\n";	
}

int main()
{
	solve();	
	return 0;	
}

