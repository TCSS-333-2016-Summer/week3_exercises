#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//concatenates using repeated strcat

//Why is this slower than strcat2?

#define SIZE 1000000
int main(){
 char a[SIZE+1];
 a[0]='\0';
 fprintf(stderr,"concatenating %d elements using strcat\n",SIZE);
 char b[]="b";
 for (int i=0;i<SIZE;i++){
  strcat(a,b);
 }
 return 0; 
}
