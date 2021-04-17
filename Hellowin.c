#include<stdio.h>
int main()
{
    unsigned short test = 0x1234;
    if (*(unsigned char*)&test == 0x34)
        printf("My computer apply littleEndian");
    else
        printf("My computer apply bigEndian");
    return 0;
}