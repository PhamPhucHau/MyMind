#include<iostream>
using namespace std;
long long Binary_Exponentiation_Module(long long a, long long n, long long m)
{
	if (n == 0)
		return 1;
	cout << a << " " << n << endl;
	long long res = Binary_Exponentiation_Module(a, n / 2,m);
	if (n % 2)
		return res * res * a%m;
	else
		return res * res%m;
}
long long Binary_Exponentiation_Recursive(long long a, long long n)
{
	if (n == 0)
		return 1;
	cout << a<<" "<< n << endl;
	long long res = Binary_Exponentiation_Recursive(a, n / 2);
	if (n % 2)
		return res * res * a;
	else
		return res * res;
}
long long Binary_Exponentiation_While(long long a, long long n)
{
	long long res = 1;
	while (n > 0)
	{
		if (n& 1)
			res = res * a;
		a=a* a;
		n >>= 1;
	}
	return res;
}
void Park_Lot()
{
	
		int n;
		cin >> n;
		cout << (2 * n - 2) * (2 * n) << endl;
	
}
int main()
{
	//cout << Binary_Exponentiation_While(3, 13);
	Park_Lot();
	return 0;
}