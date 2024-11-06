//auther:   Swarup Sikder
//judge:    codeChef
//contest:  start 159d
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function
int partition(int array[], int low, int high) {
    int pivot = array[high];
    int i = (low - 1);

    for (int j = low; j < high; j++) {
        if (array[j] <= pivot) {
            i++;
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}

// QuickSort function
void quickSort(int array[], int low, int high) {
    if (low < high) {
        int pi = partition(array, low, high);

        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

void body(){
    //---------------//
    //     input     //
    //---------------//
    int n,x;
    scanf("%d %d", &n, &x);

    //-----------------//
    //     process     //
    //-----------------//
    int a[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &a[i]);
    }

    int b[n];
    for(int i=0; i<n ;i++){
        scanf("%d", &b[i]);
    }

    //count, how much votes need for A's win
    int flag[n];
    for(int i=0; i<n ;i++){
        if(a[i]>b[i]){
            flag[i]=0;
        }
        else if(a[i]==b[i]){
            flag[i]=1;
        }
        else{
            flag[i]=b[i]-a[i]+1;
        }
    }

    //sort flag array
    quickSort(flag, 0, n-1);

    //casting new votes
    for(int i=0; i<n ;i++){
        if(flag[i]!=0){
            x= x-flag[i];
            if(x>=0){
                flag[i]= 0;
            }
            else{
                break;
            }
        }
    }


    // for(int i=0; i<n ;i++){
    //     printf("%d ", flag[i]);
    // }
    // printf("\n");

    //count A's win
    int count=0;
    for(int i=0; i<n ;i++){
        if(flag[i]==0){
            count++;
        }
    }

    //printf("%d\n", count);

    

    //----------------//
    //     output     //
    //----------------//
    if(count>(n/2)){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    

    

}
int main(){
    //-------------------//
    //     test case     //
    //-------------------//
    int t;
    scanf("%d", &t);

    while(t--){
        body();
    }

    return 0;
}