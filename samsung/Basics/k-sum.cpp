#include <bits/stdc++.h>
using namespace std;

int calculateSumAtKthLevel(const string& tree, int K) {
    istringstream ss(tree);
    char c;
    int level = 0, sum = 0;

    while (ss >> c) {
        if (c == '(') {
            level++;
        } else if (c == ')') {
            level--;
        } else if (isdigit(c)) {
            int value;
            ss.putback(c);
            ss >> value;
            if (level == K) {
                sum += value;
            }
        }
    }

    return sum;
}

int main() {
    string tree; //= "(1(2(4)(5))(3(6)))"; // Example tree in string format
    int k;// = 2; // Kth level

cin>>k>>tree;
    int sum = calculateSumAtKthLevel(tree, k);

    cout << "Sum of elements at level " << k<< ": " << sum << std::endl;

    return 0;
}
