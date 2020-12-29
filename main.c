//
//  main.c
//  ss_hw3_part2
//
//  Created by Or Trabelsi on 22/12/2020.
//

#include <stdio.h>
#include "txtfind.h"


int main() {
    
    
    char Q[WORD];
    

    
    char q;
    getword(Q);
    scanf("%c", &q);
    
    if(q == 'a'){
       
       print_lines(Q);
    }
    
    
   else if(q=='b'){
       
       print_similar_words(Q);
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
