#include <stdio.h>;
#include <stdlib.h>;

//[3,2,1,5,7,9,8];

void merge(int a[],int l,int m,int r){
    int i,j,k;
    int n1 = m-l +1; //4
    int n2 = r-m; //3

    int L[n1] , R[n2];


    for(i=0;i<n1;i++){
        L[i] = a[l+i];
    }
    for(j=0;i<n2;i++){
        R[j] = a[m+1+j];
    }

    i=0;
    j=0;
    k=l;

    while(i<n1 && j<n2){
        if(L[i] <= R[j]){
            a[k] = L[i];
            i++;
        }
        else{
            a[k] = R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        a[k]=R[j];
        j++;
        k++;
    }

}

void mergeSort(int a[], int l, int r){
    if(l<r) {
        int m = l + (r-l) / 2;

        mergeSort(a, l , m);
        mergeSort(a, m+1 , r);

        merge(a,l,m,r);
    }
}

void printArray(int A[] ,int length){
    int i;
    for(i=0;i<length;i++){
        printf("%d" , A[i]);
    }
}

int main() {
    int a[] = {3,2,1,5,7,9,8};
    int len = sizeof(a[])/sizeof(a[0]);

    printf("\nGiven array is \n");
    printArray(a, len);

    mergeSort(a, 0 ,len-1);

    printf("\nSorted array is \n");
    printArray(a, len);
    return 0;

}
