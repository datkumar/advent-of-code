#include <bits/stdc++.h>
using namespace std;

int main () {
    const int N = 1000;

    vector<int> firstNums, secondNums;
    for (int i = 0; i < N; i++) {
        int a, b;
        cin >> a >> b;
        firstNums.push_back(a), secondNums.push_back(b);
    }

    sort(firstNums.begin(), firstNums.end());
    sort(secondNums.begin(), secondNums.end());

    long sumOfDiffs = 0;
    for (int i = 0; i < N; i++) {
        sumOfDiffs += abs(firstNums[i] - secondNums[i]);
    }
    cout << sumOfDiffs << endl;

    return 0;
}