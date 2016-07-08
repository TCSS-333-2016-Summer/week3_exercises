#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strcpyIndices(char *a, char *b);
void strcpyPtrs(char *a, char *b);

void strcpyIndices(char *a, char *b){
 int i=0;
 while(a[i]=b[i++]);
}	
void strcpyPtrs(char *a, char *b){
 while(*a++ = *b++);
}
int main (){
 char a[]="Copied with indices";
 char b[]="Copied with pointers";
 char c[100];
 strcpyIndices(c,a);
 printf("%s\n",c);
 strcpyIndices(c,b);
 printf("%s\n",b);
 return 1;
}
