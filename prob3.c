#include<stdio.h>
int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int brr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&brr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            arr[i][j]=arr[i][j]+brr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}