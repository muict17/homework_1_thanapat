#include <stdio.h>
int main(){
    int row,column;
    int i,j,flag=0;
    printf("Input number of Rows for the matrix:");
    scanf("%d",&row);
    printf("Input number of Columns for the matrix:");
    scanf("%d",&column);
    int matrix[row][column];
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("element - [%d],[%d] :",i,j);
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%d ",matrix[i][j]);
            if(i==j&&matrix[i][j]==1){
            flag++;
            }
        }
        if(j==3){
            printf("\n");
        }
        if(flag==row){
            printf("The matrix is an identity matrix");
        }
    }


    return 0;
}
 