#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n = 0;
	cin >> n;
	while (n != 1) {
		cout << n << " ";
		//(n % 2 == 0) ? n /= 2 : n = (n * 3) + 1;
		if (n % 2 == 0) {
			n /= 2;
		}
		else {
			n=(n*3)+1;
		}
	}
	cout << n;
	return 0;
}
