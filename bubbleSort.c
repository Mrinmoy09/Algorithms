#include <stdio.h>

int main() {
    int a[] = {3,1,7,5,6,8,9,2,4,10};

    int length = 10;

    for( int i=0;i<length;i++){
        for(int j=0;j<length-1;j++){
            if(a[j] < a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }

    for(int i=0;i<length;i++){
        printf("%d \n" , a[i]);
    }
}
