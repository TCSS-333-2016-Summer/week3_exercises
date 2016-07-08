#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
 char a[100]="hello";
 char *b=a;
 char *c=malloc(100);
 char *d="hello";
 char e[]="hello";

 printf("sizeof a[100] is %d\n",sizeof(a));
 printf("strlen a[100] is %d\n",strlen(a));
 printf("sizeof *b=a is %d\n",sizeof(b));
 printf("sizeof *c=malloc(100) is %d\n",sizeof(c));
 printf("sizeof *d=\"hello\" is %d\n",sizeof(d));
 printf("strlen(d) is %d\n",strlen(d));
 printf("sizeof e[]=\"hello\" is %d\n",sizeof(e));
 printf("strlen(e) is %d\n",strlen(e));
 printf("sizeof int is %d\n",sizeof(int));
 return 0;

}
