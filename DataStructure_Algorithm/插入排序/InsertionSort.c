//
//  InsertionSort.c
//  DataStructure_Algorithm
//
//  Created by xiaopeng on 2018/5/8.
//  Copyright © 2018年 student. All rights reserved.
//

#include <stdio.h>

int insertionSort(){

    int arry[] = {3,5,6,9,4,1,2,7};
    
    int len = sizeof(arry)/sizeof(arry[0]);
    
    int i,j,temp;
    
    // 插入排序第一个元素本身就有序，所以从1开始
    for (i=1; i<len; i++)// 寻找元素arry[i]合适的插入位置
    {
        for (j = i; j>0; j--) // 从当期位置i比较，最多比较到j=1时，即
        {
            if (arry[j]<arry[j-1])
            {
                temp = arry[j];
                arry[j] = arry[j-1];
                arry[j-1] = temp;
                
            }else // j位置的元素已经大于等于j-1位置的元素终止循环
            {
                break;
            }
        }
    }
    
    for(i=0;i<len;i++)
        printf("%d\n",arry[i]);
    
    return 0;
}
