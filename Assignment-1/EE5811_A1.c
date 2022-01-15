#include <stdio.h>

int main(){
    unsigned char  X=0x00,Y=0x00,Z=0x00;
    unsigned char one = 0x01;
    unsigned char F;
    F = ~(X & (~Y));
    printf("XYZ = %x%x%x : Output F = %x\n", one&X,one&Y,one&Z,one&F);
    return 0;
}

