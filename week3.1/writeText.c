#include <stdio.h>
#include <stdlib.h>

#define SIZE 100

//prints out csv text to stdout
//run with "writeText > numbers.csv"
//check size with "ls -lh numbers.csv"

//why is this larger than the binary version?

int main(){
 int i,k;
 for (k=0;k<10000;k++){
  for (i=100000;i<100000+SIZE;i++){
   fprintf(stdout,"\"%d\",",i);
		}
		fprintf(stdout,"\n");
	}	 
 return 1;
}
