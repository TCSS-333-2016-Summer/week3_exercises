#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//concatenates strings using strcpy and moving the pointer
//this is faster method than using multiple strcats as we keep track of end of string

#define SIZE 1000000
int main(){
 char a[SIZE+1];
 char b[]="b";
 char *aptr=a;
 fprintf(stderr,"concatenating %d elements using strcpy\n",SIZE);
 for (int i=0;i<SIZE;i++){
  strcpy(aptr++,b);
 }
 return 0; 
}
