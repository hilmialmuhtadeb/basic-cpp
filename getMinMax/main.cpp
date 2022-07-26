#include <iostream>
#include <sstream>

using namespace std;

string getMinMax(string num) {
    stringstream ss(num);
    int n, min = 0, max = 0;

    while (ss >> n) {
        if (min == 0 || max == 0) {
            min = n;
            max = n;
        }

        if (min > n) {
            min = n;
        }

        if (max < n) {
            max = n;
        }
    }

    return to_string(min) + " " + to_string(max);
}

int main() {
    cout << getMinMax("-5 2 3 4 5 16 1 -10");

    return 0;
}
