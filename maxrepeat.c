#include <stdio.h>
int main(){
    int n,i,j,count=0;
    printf("Enter the amount of numbers : ");
    scanf("%d",&n);
    int array[n];
    int max,temp;
    printf("Enter numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(array[i]>array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
    max = array[0];
    for(i=1;i<n;i++){
        if(array[i]==max){
            printf("Maximum repeated number is %d\n",array[i]);
            break;

        }else{
            if(array[i]==array[i+1]){
                printf("Maximum repeated number is %d\n",array[i]);
                break;
            }
        }
    }
    return 0;
}