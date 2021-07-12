#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>


int rotateLeft(unsigned int num, unsigned int rotation)
{

    while (rotation--)
        num = (num << 1) | (1 & (num >> 31));

    return num;
}

int main()
{

    unsigned int num;
    unsigned int rotation;

    printf("Enter a hex number: ");
    scanf("%x", &num);

    printf("Enter number of rotation: ");
    scanf("%d", &rotation);


    printf("%x left rotated %d times = %x\n\n", num, rotation, rotateLeft(num, rotation));

}
