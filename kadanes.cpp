#include<iostream>
using namespace std;

int kadanes(int num[], int size) {
    int max_so_far = num[0];
    int curr_max = num[0];

    for (int i=1; i<size; ++i) {
        curr_max = max(num[i], curr_max + num[i]);
        max_so_far = max(max_so_far, curr_max);
    }

    return max_so_far;
}


int main() {
    int a[] = { 1, 7, 3, -1, -5, 3, 5, 2};
    int n = sizeof(a)/sizeof(a[0]);
    int max_sum = kadanes(a, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}
