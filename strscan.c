#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int sim(char i1[100], char i2[100]);

int main()
{
char s1[100];
char s2[100];
printf("enter first word :\n");
scanf("%s", s1);
printf("enter second word :\n");
scanf("%s", s2);
int result = sim(s1, s2);
printf("%d", result);
printf("%\n");
}

int sim(char i1[100], char i2[100])
{
// defining vars
 int len1 = strlen(i1);
 int len2 = strlen(i2);
 int p = 0;
 int length;
 int *bin;
 int ma = 0;
// check if the length of both words
 if ( len1 == len2 ) {
 p = 1;
 } else if ( len1 > len2 ) {
 p = 1;
 } else if ( len1 < len2 ) {
 p = 2;
 }
// set lengths 
 if ( p == 1 ) {
 length = len1;
 bin = (int*)malloc(length * sizeof(int));
 } else if ( p == 2 ) {
 length = len2;
 bin = (int*)malloc(length * sizeof(int));
 }
// for loop that makes the binary
 for ( int i = 0; i < length; i++ ) {
 if ( i1[i] == i2[i] ) {
 bin[i] = 1;
 ma++;
 } else {
 bin[i] = 0;
 }
 }
// for loop that prints out the binary
 for ( int i = 0; i < length; i++) {
 printf("%d", bin[i]); 
 }
// calculate percent and return value
 free(bin);
 printf("\n");
 float r = (float)ma / length * 100;
 int resrounded = (int)roundf(r);
 return resrounded;
}
