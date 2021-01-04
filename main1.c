//
//  main.c
//  ss_hw3
//
//  Created by Or Trabelsi on 21/12/2020.
//

#include <stdio.h>
#include "isort.h"
#define len 50
typedef int arr[len];

int main() {
         arr ar;

        
    for (int i=0 ; i<50; i++) {
        int x;
        scanf(" %d" , &x);
        *(ar + i) = x ;

    }
   
            insertion_sort(ar, len);
          

    
    
    for (int i = 0; i< len; i++) {
        printf("%d", *(ar+i));
        if(i!=len-1){
            printf(",");
        }
    }
    
        return 0;
    }


