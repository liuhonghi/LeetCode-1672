//
//  main.c
//  LeetCode-1672
//
//  Created by HiLau on 2023/6/19.
//

#include <stdio.h>
//给你一个 m x n 的整数网格 accounts ，其中 accounts[i][j] 是第 i​​​​​​​​​​​​ 位客户在第 j 家银行托管的资产数量。返回最富有客户所拥有的 资产总量 。 客户的 资产总量 就是他们在各家银行托管的资产数量之和。最富有客户就是 资产总量 最大的客户。

//在力扣上写的解
//int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
//    int sum = 0;
//    int max = 0;
//    int i = 0;
//    for(i = 0;i<accountsSize;i++)
//    {
//        int j = 0;
//        for(j = 0;j<accountsColSize[i];j++)
//        {
//            sum += accounts[i][j];
//        }
//        max = sum>max?sum:max;
//        sum = 0;
//    }
//return max;
//}
#define ROW 3
#define COL 3
int MaxWealth(int arr[ROW][COL],int row,int col)
{
    int sum = 0;
    int max = 0;
    int i = 0;
    for(i = 0;i<row;i++)
    {
        int j = 0;
        for(j = 0;j<col;j++)
        {
            sum += arr[i][j];
        }
        max = sum>max?sum:max;
        sum = 0;
    }
    return max;
}

//自己写的主函数解
int main()
{
    int arr[ROW][COL]={{1,5,7},{2,5,8},{3,5,9}};
    int max = 0;
    max = MaxWealth(arr,ROW,COL);
    printf("max = %d\n",max);
    return 0;
}
