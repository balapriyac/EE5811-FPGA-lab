#include <stdio.h>

int main(){
    unsigned char  X=0x01,Y=0x01,Z=0x00;
    unsigned char one = 0x01;
    unsigned char F;
    F = ~(X&(~Y));
    printf("F = %x", one&F);
    return 0;
}
