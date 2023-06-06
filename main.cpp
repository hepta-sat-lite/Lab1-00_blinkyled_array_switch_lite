#include "mbed.h"
DigitalOut myled[]={LED1, PB_1};
int main()
{
    int i=0;
    while (true) {
        switch(i){
            case 1:
                myled[0] = 1;
                break;
            case 2:
                myled[1] = 1;
                break;
            case 3:
                myled[0] = 0;
                myled[1] = 0;
                i = 0;
                break;   
        }
        i++;
        wait_ms(500);
    }
}
