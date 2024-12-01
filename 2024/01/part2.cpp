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

    // {secondNum : itsCount} pairing
    unordered_map<int, int> freqMap;
    for (const int curr : secondNums) {
        if (!freqMap.count(curr)) {
            freqMap[curr] = 1;  // New entry
        } else {
            freqMap[curr]++;
        }
    }

    long totalScore = 0;
    for (const int curr : firstNums) {
        if (!freqMap.count(curr)) {
            continue;
        }
        totalScore += curr * freqMap[curr];
    }
    cout << totalScore << endl;

    return 0;
}