//
//  BubbleSort.hpp
//  SortAlgorithm
//
//  Created by bin.yang on 2018/4/28.
//  Copyright © 2018年 bin.yang. All rights reserved.
//

#ifndef BubbleSort_hpp
#define BubbleSort_hpp

#include <stdio.h>

#endif /* BubbleSort_hpp */

//冒泡排序
// 分类 -------------- 内部比较排序
// 数据结构 ---------- 数组
// 最差时间复杂度 ---- O(n^2)
// 最优时间复杂度 ---- 如果能在内部循环第一次运行时,使用一个旗标来表示有无需要交换的可能,可以把最优时间复杂度降低到O(n)
// 平均时间复杂度 ---- O(n^2)
// 所需辅助空间 ------ O(1)
// 稳定性 ------------ 稳定
void bubbleSort(int a[], int length);

// 选择排序
void selectionSort(int a[], int length);

// 插入排序
// 分类 ------------- 内部比较排序
// 数据结构 ---------- 数组
// 最差时间复杂度 ---- 最坏情况为输入序列是降序排列的,此时时间复杂度O(n^2)
// 最优时间复杂度 ---- 最好情况为输入序列是升序排列的,此时时间复杂度O(n)
// 平均时间复杂度 ---- O(n^2)
// 所需辅助空间 ------ O(1)
// 稳定性 ------------ 稳定
void intersectSort(int a[], int length);

// 归并排序
// 分类 -------------- 内部比较排序
// 数据结构 ---------- 数组
// 最差时间复杂度 ---- O(nlogn)
// 最优时间复杂度 ---- O(nlogn)
// 平均时间复杂度 ---- O(nlogn)
// 所需辅助空间 ------ O(n)
// 稳定性 ------------ 稳定
void MergeSortRecursion(int A[], int left, int right);   // 递归实现的归并排序(自顶向下)
void MergeSortIteration(int A[], int len);    // 非递归(迭代)实现的归并排序(自底向上)





