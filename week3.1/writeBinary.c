#include <stdio.h>
#include <stdlib.h>

#define  SIZE 100
//prints out binary numeric values to stdout
//run with "writeBinary > numbers.bin"
//check size with "ls -lh numbers.bin"

//why is this smaller than the text version?

int main(){
 int i,k;
 for (k=0;k<10000;k++)
  for (i=100000;i<100000+SIZE;i++)
   fwrite(&i,sizeof(int),1,stdout);   
 return 1;
}
