/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <assert.h>
int temperatureIsOk(float temperature)
{
  if(temperature < 0 || temperature > 45) {
    printf("Temperature out of range!\n");
    return 0;
  } 
}

int socIsOk(float soc)
{
if(soc < 20 || soc > 80) {
    printf("State of Charge out of range!\n");
    return 0;
  }
}
int chargeRateIsOk(float chargeRate)
{
if(chargeRate > 0.8) {
    printf("Charge Rate out of range!\n");
    return 0;
  }
}
int batteryIsOk(float temperature, float soc, float chargeRate) 
{
  if (temperatureIsOk(temperature))
  {
     if (socIsOk(soc))
     {
         if(chargeRateIsOk(chargeRate))
         {}
     }
  }
}
  
int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
    
