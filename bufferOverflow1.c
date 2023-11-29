#include <stdio.h>
#include <stdlib.h>
 
enum { BUFFER_SIZE = 10 };
 
int main() {
    char buffer[BUFFER_SIZE];
    int check = 0;
    sprintf(buffer, "%s", "This string is too long!");//trying to overflow the buffer
    printf("check: %d", check);//should not return 0
    return 1;
}
