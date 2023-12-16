#include<iostream>
#include<algorithm>
using namespace std;

int a[15][15];
int n, m;
int result = -15451;

void toggle(int i) {
    int j;

    for (j = 0; j < n; j++) {
        if (a[j][i] == 1)
            a[j][i] = 0;
        else
            a[j][i] = 1;
    }
}

void toggle_tried(int k) {
    int count = 0;

    if (k == 0) {
        int i, j;
        for (i = 0; i < n; i++) {
            bool ones = true;

            for (j = 0; j < m; j++) {
                if (a[i][j] == 0) {
                    ones = false;
                    break;
                }
            }
            if (ones) {
                count++;
            }
        }
    } else {
        int i;
        for (i = 0; i < m; i++) {
            toggle(i);
            toggle_tried(k - 1);
            toggle(i);
        }
    }

    result = max(count, result);

    return;
}

int main() {
    int k;
    cin >> n >> m >> k;

    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    toggle_tried(k);

    cout << result << endl;
    return 0;
}
