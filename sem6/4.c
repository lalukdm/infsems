#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void radixSort(int arr[], int rang, int len_arr){

    int depth = 0;
    int figure; 

    int max_num = arr[0]; 
    for (int i = 1; i < len_arr; i++)
        max_num = (max_num < arr[i]) ? arr[i] : max_num;
    
    
    while (max_num != 0) { 
        depth++; 
        max_num /= 10; 
    }
    
    int ** buf_arr = (int **)calloc(rang, sizeof(int *));
    for (int i = 0; i < rang; i++)
        buf_arr[i] = (int *)calloc(len_arr, sizeof(int));

    for (int i = 0; i < depth; i++) {
        for (int j = 0; j < rang; j++) {
            for (int k = 0; k < len_arr; k++) { 
                figure = (arr[k] / (int)pow(10, i)) % 10;
                buf_arr[figure][k] = arr[k];
            }                
        }

        int p = 0;
        for (int j = 0; j < rang; j++) { 
            for (int k = 0; k < len_arr; k++) {
                if (buf_arr[j][k] != 0) {
                    arr[p++] = buf_arr[j][k];
                    buf_arr[j][k] = 0;
                }
            }    
        }
    }
    
    for (int i = 0; i < rang; i++)
        free(buf_arr[i]);
    free(buf_arr);

}

void merge(int arr[], int l, int m, int r) { 
    int i, j, k; 
    int len_l = m - l + 1; 
    int len_r = r - m; 

    int left_arr[len_l], right_arr[len_r]; 
  
    for (i = 0; i < len_l; i++) 
        left_arr[i] = arr[l + i]; 
    for (j = 0; j < len_r; j++) 
        right_arr[j] = arr[m + 1+ j]; 
  
    i = 0; 
    j = 0; 
    k = l; 
    while (i < len_l && j < len_r) { 
        if (left_arr[i] <= right_arr[j])
            arr[k] = left_arr[i++]; 
        else
            arr[k] = right_arr[j++];
            
        k++; 
    } 
  
    while (i < len_l)
        arr[k++] = left_arr[i++]; 

    while (j < len_r)
        arr[k++] = right_arr[j++]; 
} 

void mergeSort(int arr[], int l, int r) { 
    if (l < r) { 
        int m = l + (r - l) / 2; 
  
        mergeSort(arr, l, m); 
        mergeSort(arr, m + 1, r); 
  
        merge(arr, l, m, r); 
    } 
} 



int main() {
    int arr[] = {12, 5, 664, 63, 0, 73, 93, 127, 432, 64, 34};
    
    int len_arr = sizeof(arr) / sizeof(int);

    radixSort(arr, 10, len_arr);
 
    for(int i = 0; i < len_arr; ++i)
        printf("%d ", arr[i]); 
    

    puts("");


    int arr2[] = {12, 5, 664, 63, 0, 73, 93, 127, 432, 64, 34};
    
    int len_arr2 = sizeof(arr2) / sizeof(int);

    mergeSort(arr2, 0, len_arr2 - 1); 

    for(int i = 0; i < len_arr2; i++)
        printf("%d ", arr2[i]);



    return 0;
}