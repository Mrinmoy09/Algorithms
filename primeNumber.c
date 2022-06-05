#include <stdio.h>

int main(){
    int i,n,count=0;

    printf("Enter any number:");
    scanf("%d", &n);

    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==2){
        printf("Prime number");
    }
    else{
        printf(" Not Prime number");
    }



    return 0;

}
