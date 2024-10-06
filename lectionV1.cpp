#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, X, Y;
    cin >> N >> X >> Y;

    int central_x = N / 2 + 1;
    int central_y = N / 2 + 1;

    int distance = abs(X - central_x) + abs(Y - central_y);
    cout << distance << "\n";

    return 0;
}

















