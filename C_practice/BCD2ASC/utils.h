#include <stdio.h>

/*BCD 与 ASCII码转换*/
//typedef unsigned char32_t uint32_t;
/*******************************************************************
函数名:  asc2bcd 
功能描述:将ascii码转换为bcd码
参数:    
         bcd:转换后的BCD码
         asc:需转换的ASCII码串
         len:需转换的ascii码串长度
返回值:  uint32 
                              0：成功
                              其他:失败
********************************************************************/
uint32 asc2bcd(uint8* bcd, const uint8* asc, uint32 len);
 
/*******************************************************************
函数名: bcd2asc 
功能描述:将bcd码转换为ascii码串
参数:    
         asc:转换的ASCII码串
         bcd:需转换的BCD码
         len:需转换的BCD码长度
返回值:  uint32 
                              0：成功
                              其他:失败
********************************************************************/
uint32 bcd2asc(uint8* asc, const uint8* bcd, uint32 len);
