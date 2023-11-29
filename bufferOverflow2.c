#include <stdio.h> 
typedef struct MyStruct
{
  char buf[5];
  int  i;
} MyStruct;

int main(void){
  MyStruct my;
  my.i = 10;
  printf ("my.i is %d\n", my.i);
  printf ("Enter a number greater than 5 digits:"); //fill the buffer
  gets(my.buf);//deprecated and insecure function
  printf ("my.buf is >%s<\n", my.buf);
  printf ("my.i is %d\n", my.i);
  return(0);
}
