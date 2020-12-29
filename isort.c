//
//  isort.c
//  ss_hw3
//
//  Created by Or Trabelsi on 21/12/2020.
//

#include <stdio.h>
#include "isort.h"

void shift_element(int* arr,int i){
    for (int x = i; x>0 ; x--){
        *(arr+x)=*(arr+x-1);
    }
}

void insertion_sort(int* arr , int len){
    for (int i =1; i<len; i++) {
        int count = 0;
        for (int j = i; j>0 && *(arr+j-1)>*(arr+i); j--) {
            count++;
          
        }
        int temp =*(arr+i);
        shift_element(arr +i - count , count);
        if(count!=0){
        *(arr +i - count)= temp;
        }
    }
    
}
    

