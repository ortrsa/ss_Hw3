//
//  txtfind.c
//  ss_hw3_part2
//
//  Created by Or Trabelsi on 22/12/2020.
//

#include "txtfind.h"



int getLine(char s[]){
    char temp;
    int i = 0;
    while(scanf("%c", &temp)!= EOF && i<LINE && temp != '\n'){
        s[i] = temp;
        i++;
        }
    
    s[i] = '\0';
    if(i==0 && temp!='\n' )return -1;
    return i;
}

int getword(char w[]){
    char temp;
    int i = 0;
    while(scanf("%c", &temp)!= EOF && i<WORD && temp != '\n' && temp!= ' ' && temp != '\t'){
        w[i] = temp;
        i++;
        }
    
    w[i] = '\0';
    if(i==0 && temp!='\n' && temp!= ' ' && temp != '\t' )return -1;
    return i;
}

int String_len (char * str){
    int i=0;
    while (str[i]!='\0') {
        i++;
    }
    return i;
}

int substring( char * str1, char * str2){
    int str1_len = String_len(str1);
    int str2_len = String_len(str2);
    if(str2_len>str1_len)return 0;
    
    for(int i = 0 ; i< str1_len ; i++ ){
        int j =0;
        while(str1[i] == str2[j] && str1_len - i >= str2_len -j ){
            j++;
            i++;
            if(j==str2_len){
                return 1;
            }
        }
    
    }
    return 0;
}


int similar (char *s, char *t, int n){
   
    int s_len = String_len(s);
    int t_len = String_len(t);
    
    if(s_len!= t_len+n) return 0;
    int j =0 ;
    for (int i =0; i<s_len; i++) {
        if(s[i]==t[j]) j++;
        }
    if(j==t_len)return 1;
    
  
    
    return 0;
}


void print_lines(char * str){
    char S[LINE];
    while (getLine(S)!= -1) {
        
        if(substring(S, str)==1){
                   
        int i =0;
        while (S[i]!='\0') {
            printf("%c" , S[i]);
            i++;
        }
        printf("\n");
        
        
    
    }
}
}


void print_similar_words(char * str){
    
    char W[WORD];
    while (getword(W)!=-1){
        if(similar(W, str, 1)==1||similar(W, str, 0)==1){
            int i =0;
            while(W[i]!='\0'){
                printf("%c",W[i]);
                i++;
            }
            printf("\n");
        }
    }
    
    
    
    
    
}

