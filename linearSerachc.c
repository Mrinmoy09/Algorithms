#include <stdio.h>;



int main() {
    int arr[] = {3,4,2,7,5,6};
    int l= sizeof(arr)/sizeof(arr[0]);
    int x = 7;

    for(int i = 0; i<l ;i++){
        if(arr[i] == x){
            printf("found at position %d" , i);
        }
    }
}
