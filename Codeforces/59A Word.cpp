#include <iostream>
#include<string>
using namespace std;
int main()
{
	string st;
	int countU = 0, countL = 0, i;
	cin >> st;
	for (i = 0; i < st.size(); i++) {
		if (st[i] >= 'a' && st[i] <= 'z') {
			countL++;
		}
		else if (st[i] >= 'A' && st[i] <= 'Z') {
			countU++;
		}
	}
	if (countU > countL) {
		for (i = 0; i < st.size(); i++) {
			st[i] = toupper(st[i]);
		}
	}
	else {
		for (i = 0; i < st.size(); i++) {
			st[i] = tolower(st[i]);
		}
	}
	cout << st;

	return 0;
}
