#include“../common.h”

void BubbleSort(int a[] ,int n) {
    for (int i = 0; i < n-1; ++i) {

        for (int j = 0; j < n-1-i; ++j) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
}