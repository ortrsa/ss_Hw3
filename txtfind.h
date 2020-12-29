//
//  txtfind.h
//  ss_hw3_part2
//
//  Created by Or Trabelsi on 22/12/2020.
//

#ifndef txtfind_h
#define txtfind_h

#include <stdio.h>

#define LINE 256
#define WORD 30
//typedef char Line_String[LINE];
//typedef char Word_String[WORD];

int getLine(char s[]);

int getword(char w[]);

int substring( char * str1, char * str2);

int similar (char *s, char *t, int n);

void print_lines(char * str);

void print_similar_words(char * str);

int substring( char * str1, char * str2);

int String_len (char * str);

int similar (char *s, char *t, int n);

void print_lines(char * str);

void print_similar_words(char * str);


#endif /* txtfind_h */
