#include <stdio.h>;

int binarySearch(int a[] ,int e ,int l,int r);

int main(){
    int arr[] = {3,5,6,8,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr,9,0,n-1);
    printf("%d" , result);
    return 0;
}

int binarySearch(int a[] ,int e ,int l,int r){
    int mid = l+(r-l)/2;

    if(l>r){
        return -1;
    }

    if(a[mid] == e) {
        return mid;
    }
    else if(a[mid]>e){
        return binarySearch(a,e,l,mid-1);
    }
    else{
        return binarySearch(a,e,mid+1,r);
    }
}
