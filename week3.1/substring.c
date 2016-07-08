#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//as an exercise - write up a full substring routine that returns a string
//hint use malloc
char* substring(char *str, int start, int finish);
	//hint use malloc to allocate the substring	

int main (){
 char a[]="Hello World";
 char b[100];
 //To truncate move the \0 
 fprintf(stdout,"The original string is %s\n",a);
 a[5]='\0'; //truncates - string is not a[0:4]
 fprintf(stdout,"The string truncated at 5 is %s\n",a);
 //to set beginning of the substring to the nth character use pointer arithmetic 
 strcpy(b,a+2);
 fprintf(stdout,"The substring a[2:4] is %s\n",b);
 return 0;
}
