#include <iostream>
#include <algorithm>

using namespace std;

const int N = 10;
int arr[N] = {3, 5, 2, 4, 9, 1, 7, 6, 8, 0};

// Sequential search function
int sequentialSearch(int arr[], int n, int x) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        count++;
        if (arr[i] == x) {
            cout << "Number of comparisons in Sequential Search: " << count << endl;
            return i;
        }
    }
    cout << "Number of comparisons in Sequential Search: " << count << endl;
    return -1;
}

// Binary search function
int binarySearch(int arr[], int n, int x) {
    int count = 0;
    sort(arr, arr + n);
    int l = 0, r = n - 1;
    while (l <= r) {
        count++;
        int m = l + (r - l) / 2;
        if (arr[m] == x) {
            cout << "Number of comparisons in Binary Search: " << count << endl;
            return m;
        }
        if (arr[m] < x) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    cout << "Number of comparisons in Binary Search: " << count << endl;
    return -1;
}

int main() {
    int x = 6;
    cout << "Index of " << x << " in array (by sequential search): " << sequentialSearch(arr, N, x) << endl;
    cout << "Index of " << x << " in array (by binary search): " << binarySearch(arr, N, x) << endl;
    return 0;
}
