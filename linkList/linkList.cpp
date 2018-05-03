//
//  linkList.cpp
//  SortAlgorithm
//
//  Created by bin.yang on 2018/5/3.
//  Copyright © 2018年 bin.yang. All rights reserved.
//

#include "linkList.hpp"
void linkListReverse(linkNode *cur) {
    linkNode *pre = NULL, *next = NULL;
    while(cur != NULL) {
        
        next = cur->next;
        cur->next = pre;
        pre = cur;
        cur = next;
    }
}
