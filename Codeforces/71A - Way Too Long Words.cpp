#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while (t--) {
		string st;
		cin >> st;
		if (st.length() <= 10) {
			cout << st << endl;
		}
		else {
			cout << st[0] << st.length() - 2 << st[st.length() - 1] << endl;
		}
	}
	return 0;
}
