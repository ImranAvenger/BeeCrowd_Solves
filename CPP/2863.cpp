#include <iostream>
#include <limits>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        double minTime = numeric_limits<double>::max();
        for (int i = 0; i < n; ++i) {
            double time;
            cin >> time;
            if (time < minTime) {
                minTime = time;
            }
        }
        cout << minTime << endl;
    }
    return 0;
}
