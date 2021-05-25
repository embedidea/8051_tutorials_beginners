/*
 */

#include <mcs51/8051.h>
#define led P1_1
void main(void)
{
unsigned int i;
    // Insert code
led = 0;
    while(1)
        {
          led = 1;
          for(i=0;i<=40000;i++);
          led = 0;
          for(i=0;i<=40000;i++);
        }

}
