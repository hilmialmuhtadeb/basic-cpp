#include <iostream>

using namespace std;

void fibonacci (int n) {
    int t1 = 1, t2 = 1, nextTerm = 0;

    for (int i=0; i<n; i++) {
        if (i < 2) {
            cout << 1 << ' ';
        } else {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
            cout << nextTerm << ' ';
        }
    }
}

int main() {
    fibonacci(8);
    return 0;
}
