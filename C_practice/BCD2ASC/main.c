#include <stdio.h>
#include <stdlib.h>

#include "utils.h"


int main(void)//测试程序
{
    const unsigned char ascii[12] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C'};
    unsigned char bcd[6];
 
    ASC2BCD(bcd, ascii, 12, 0); 
    
    int i = 0;
 
    printf("ascii = %s\n", ascii);
 
    for(; i < 6; i++) {
        printf("bcd = 0x%.2x\n", bcd[i]);
    }   
 
    /*  
       unsigned char ascii[13] = {0};
       const unsigned char bcd[6] = {0x01, 0x23, 0x45, 0xCD, 0xEF, 0xAB};
       BCD2ASC(ascii, bcd, 6, 0);
       printf("ascii = %s\n", ascii);
       */
    return 0;
}
