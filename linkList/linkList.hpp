//
//  linkList.hpp
//  SortAlgorithm
//
//  Created by bin.yang on 2018/5/3.
//  Copyright © 2018年 bin.yang. All rights reserved.
//

#ifndef linkList_hpp
#define linkList_hpp

#include <stdio.h>

#endif /* linkList_hpp */

struct linkNode{
    int value;
    linkNode *next;
};
// 链表逆序
void linkListReverse(linkNode *cur);
