//
//  main.cpp
//  SortAlgorithm
//
//  Created by bin.yang on 2018/4/28.
//  Copyright © 2018年 bin.yang. All rights reserved.
//

#include <iostream>
#include "sort.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int a[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int length = sizeof(a)/sizeof(int);
    MergeSortRecursion(a, 0, length);
    for (int i = 0; i < length; ++i) {
        std::cout<<a[i]<<',';
    }

    return 0;
}
