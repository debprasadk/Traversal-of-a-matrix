/*
Name: Debprasad Kundu
Roll No.: cs2102
Date:8th January, 2022
Programme Description: traversal of a matrix starts from the bottom-right corner and pursue
the directions up-left-down-right recursively
*/

#include <stdio.h>
#include <stdlib.h>

void Traversal(int a[][200],int row,int column, int start){
    int i;
    if(row - 1 - start < start){
        return;
    }
    for(i = row - 1 - start; i > start - 1; i--){
        printf("%d ",a[i][column - 1 - start]);
    }
    if(column - 1 - start <= start){
        return;
    }
    for(i = column - 2 - start; i > start-1; i--){
        printf("%d ",a[start][i]);
    }
    if(row - 1 - start < start + 1){
        return;
    }
    for(i = start + 1; i < row - start; i++){
        printf("%d ",a[i][start]);
    }
    if(column - 2 - start < start+1){
        return;
    }
    for(i = start + 1; i < column - 1 - start; i++){
        printf("%d ",a[row - 1 - start][i]);
    }
    Traversal(a, row, column, start + 1);
}

int main()
{
    int m, n, i, j;
    int a[200][200];
    printf("Enter number of rows and column : ");
    scanf("%d%d", &m, &n);
    printf("Enter elements : ");
    for (i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Required traversal is ");
    Traversal(a,m,n,0);
    return 0;
}