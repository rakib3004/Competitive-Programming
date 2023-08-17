#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxScore(vector<int>& balloons) {
    int n = balloons.size();
    if (n == 0) {
        return 0;
    }

    // Create a prefix and suffix array to store products of adjacent balloons
    vector<int> prefix(n), suffix(n);
    prefix[0] = balloons[0];
    suffix[n - 1] = balloons[n - 1];

    for (int i = 1; i < n; ++i) {
        prefix[i] = balloons[i - 1] * balloons[i];
    }

    for (int i = n - 2; i >= 0; --i) {
        suffix[i] = balloons[i] * balloons[i + 1];
    }

    // Calculate the maximum score
    int maxScore = 0;
    for (int i = 0; i < n; ++i) {
        int leftScore = (i == 0) ? 0 : prefix[i - 1];
        int rightScore = (i == n - 1) ? 0 : suffix[i + 1];
        maxScore = max(maxScore, leftScore + rightScore + balloons[i]);
    }

    return maxScore;
}

int main() {
    int n;
    cout << "Enter the number of balloons: ";
    cin >> n;

    vector<int> balloons(n);
    cout << "Enter the values of the balloons: ";
    for (int i = 0; i < n; ++i) {
        cin >> balloons[i];
    }

    int result = maxScore(balloons);
    cout << "Maximum score: " << result << endl;

    return 0;
}
