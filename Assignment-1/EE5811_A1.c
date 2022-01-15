#include <stdio.h>

int main(){
    unsigned char  X,Y,Z;
    printf("X: ");
    scanf("%x", &X);
    printf("Y: ");
    scanf("%x", &Y);
    printf("Z: ");
    scanf("%x", &Z);
    
    unsigned char one = 0x01;
    unsigned char F;
    F = ~(X&(~Y));
    printf("F = %x\n", one&F);
    return 0;
}

