#include "app_main.h"
#include "stm32g4xx_hal.h"
#include <stdio.h>



void app_main(void){
    setvbuf(stdout, NULL, _IONBF, 0);
    char *str = "A dog and a lazy fox";
    char ch = 'a';
    int  whole_num = 420000;
    float decimal_num = 123.4567;
    printf ("Printf tutorial");
    while(1){
        printf("string: %s\r\nchar: %c\r\nint:  %d\r\ndouble: %3.3f\r\n", str,ch,whole_num,decimal_num);
        HAL_Delay(500);
    }

}