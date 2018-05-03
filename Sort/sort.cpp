//
//  BubbleSort.cpp
//  SortAlgorithm
//
//  Created by bin.yang on 2018/4/28.
//  Copyright © 2018年 bin.yang. All rights reserved.
//

#include "sort.hpp"
//#include "common.h"


void swap(int a[], int i, int j) {
    int temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

//冒泡排序
void bubbleSort(int a[], int length) {
    for (int i = 0; i < length-1; ++i) {
        
        for (int j = 0; j < length-1-i; ++j) {
            if (a[j] > a[j+1]) {
                swap(a, j, j+1);
            }
        }
    }
}
// 选择排序
void selectionSort(int a[], int length) {
    for (int i = 0; i < length-1; ++i) {
        
        int min = i;
        for (int j = i+1; j < length; ++j) {
            if (a[j] < a[j+1]) {
                min = j;
            }
        }
        if (min != i) {
            swap(a, min, i);
        }
    }
}

// 插入排序
void intersectSort(int a[], int length) {
    for (int i = 0; i < length; ++i) {
        int iget = a[i]; // 任意取一个数字
        int j = i-1; // 默认为i左边的都排好序了
        while(j >= 0 && a[j] > iget) {
            a[j+1] = a[j];
            --j;
        }
        a[j+1] = iget;
    }
}
// 归并排序
void Merge(int A[], int left, int mid, int right)// 合并两个已排好序的数组A[left...mid]和A[mid+1...right]
{
    int len = right - left + 1;
    int *temp = new int[len];       // 辅助空间O(n)
    int index = 0;
    int i = left;                   // 前一数组的起始元素
    int j = mid + 1;                // 后一数组的起始元素
    while (i <= mid && j <= right)
    {
        temp[index++] = A[i] <= A[j] ? A[i++] : A[j++];  // 带等号保证归并排序的稳定性
    }
    while (i <= mid)
    {
        temp[index++] = A[i++];
    }
    while (j <= right)
    {
        temp[index++] = A[j++];
    }
    for (int k = 0; k < len; k++)
    {
        A[left++] = temp[k];
    }
}


void MergeSortRecursion(int A[], int left, int right)    // 递归实现的归并排序(自顶向下)
{
    if (left == right)    // 当待排序的序列长度为1时，递归开始回溯，进行merge操作
        return;
    int mid = (left + right) / 2;
    MergeSortRecursion(A, left, mid);
    MergeSortRecursion(A, mid + 1, right);
    Merge(A, left, mid, right);
}

void MergeSortIteration(int A[], int len)    // 非递归(迭代)实现的归并排序(自底向上)
{
    int left, mid, right;// 子数组索引,前一个为A[left...mid]，后一个子数组为A[mid+1...right]
    for (int i = 1; i < len; i *= 2)        // 子数组的大小i初始为1，每轮翻倍
    {
        left = 0;
        while (left + i < len)              // 后一个子数组存在(需要归并)
        {
            mid = left + i - 1;
            right = mid + i < len ? mid + i : len - 1;// 后一个子数组大小可能不够
            Merge(A, left, mid, right);
            left = right + 1;               // 前一个子数组索引向后移动
        }
    }
}
// 快速排序
int partition(int a[], int left, int right) {
    int pivot = a[right];
    int index = left - 1;
    for (int i = left; i < right; ++i) {
        if (a[i] < pivot) {
            swap(a, i, ++index);
        }
    }
    swap(a, index + 1, right);
    return index;
}
void quickSort(int a[], int left, int right){
    if (left <= right) {
        return;
    }
    int index = partition(a, left, right);
    quickSort(a, left, index -1);
    quickSort(a, index + 1, right);
}



