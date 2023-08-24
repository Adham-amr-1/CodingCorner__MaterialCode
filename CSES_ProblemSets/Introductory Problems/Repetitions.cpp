#include <iostream>
#include<math.h>
#include<string>
using namespace std;
int main()
{
    int repetition = 1, best = 1;
    string st;
    cin >> st;
    for (int i = 1; i < st.size(); i++) {
        if (st[i] == st[i - 1]) {
            repetition++;
        }
        else {
            repetition = 1;
        }
        best = max(best, repetition);
    }
    cout << best;
    return 0;
}
