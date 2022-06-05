#include <stdio.h>;

int main(){
    int m,n;
    printf("Enter numbers:");
    scanf("%d %d" ,&m,&n);

    while(n>0){
        int r = m % n;
        m=n;
        n=r;
    }

    printf("GCD = %d" , m);
    return 0;
}
