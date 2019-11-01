#include <stdio.h>
int main(){
    int n,i,j,count=0;
    printf("Enter the amount of numbers : ");
    scanf("%d",&n);
    int array[n];
    int max=0,posmax=0;
    printf("Enter numbers:\n");
    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
    if(n==1){
        printf("Mode = %d\n",array[0]);
    }else if(n==0){printf("No mode\n");}
    else{
        for(i=0;i<n;i++){
            count=0;
            for(j=i;j<n;j++){
                if(array[i]==array[j]&&i!=j){
                    count++;
                }
                if(count>max){
                    max = count;
                    posmax = i;
                }
            }
        }
        if(max==0){
            printf("No mode\n");
        }else{
            printf("Mode = %d\n",array[posmax]);
        }
    }

    return 0;
}