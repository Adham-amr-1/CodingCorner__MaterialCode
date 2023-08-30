#include <iostream>
using namespace std;
int main()
{
    int t = 0, x = 0;
    cin >> t;
    while (t--) {
        string st;
        cin >> st;
        if (st == "X++" || st == "++X") {
            x++;
        }
        else if (st == "X--" || st == "--X") {
            x--;
        }
    }
    cout << x;
    return 0;
}
