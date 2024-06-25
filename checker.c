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
#include <stdbool.h>  // For boolean data type
 
bool isTemperatureOk(float temperature);
bool isSocOk(float soc);
bool isChargeRateOk(float chargeRate);
bool batteryIsOk(float temperature, float soc, float chargeRate);
 
int main() {
  // Test cases
  if (batteryIsOk(25, 70, 0.7f)) {
    printf("Test 1 passed: Battery OK\n");
  } else {
    printf("Test 1 failed: Battery not OK\n");
  }
 
  if (!batteryIsOk(50, 85, 0.0f)) {
    printf("Test 2 passed: Battery not OK (as expected)\n");
  } else {
    printf("Test 2 failed: Battery should not be OK\n");
  }
 
  printf("All tests completed.\n");
  return 0;
}
 
bool isTemperatureOk(float temperature) {
  if (temperature < 0 || temperature > 45) {
    printf("Temperature is out of range!\n");
    return false;
  }
  return true;
}
 
bool isSocOk(float soc) {
  if (soc < 20 || soc > 80) {
    printf("State of Charge is out of range!\n");
    return false;
  }
  return true;
}
 
bool isChargeRateOk(float chargeRate) {
  if (chargeRate > 0.8) {
    printf("Charge Rate is out of range!\n");
    return false;
  }
  return true;
}
 
bool batteryIsOk(float temperature, float soc, float chargeRate) {
  return (isTemperatureOk(temperature) && isSocOk(soc) && isChargeRateOk(chargeRate));
}
