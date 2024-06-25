#include <stdio.h>
#include <assert.h>

int batteryIsOk(float temperature) 
{
  if(temperature < 0 || temperature > 45)
  {
    printf("Temperature out of range!\n");
    return 0;
  }
  return 1;
}
  int socIsOk(float soc)
  {
   if(soc < 20 || soc > 80) 
   {
    printf("State of Charge out of range!\n");
    return 0;
  } 
return 1;
  }
   int chargeRateIsOk(float chargeRate)
    {
    if(chargeRate > 0.8)
    {
    printf("Charge Rate out of range!\n");
    return 0;
    }
      return 1;
    }



int main() {
  assert(batteryIsOk(25));
  assert(!batteryIsOk(50));
  assert(socIsOk(70));
  assert(!socIsOk(85));
  assert(chargeRateIsOk(0.7));
  assert(!chargeRateIsOk(0));
}
