#include<stdio.h>
int main(){
    int n,i,j,count;
    printf("how many number do you want to enter:");
    scanf("%d",&n);
    int num[n];
    int cnt[n];
    printf("enter number:\n");
    for(i=1;i<=n;i++){
    scanf("%d",&num[i]);
    }
    for(i=1;i<=n;i++){
    count=0;
        for(j=1;j<=n;j++){
            if(num[i]<num[j]){
                count++;
            }
        }
    cnt[i]=count;
    }
    for(i=1;i<=n;i++){
        if(cnt[i]==1){
            printf("second largest number is %d\n",num[i]);
            break;
        }
    }
    return 0;
}   