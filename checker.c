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
#include <assert.h>

int batteryIsOk(float temperature, float soc, float chargeRate) {
  // Check all conditions using a single expression
  int is_all_ok = (0 <= temperature && temperature <= 45) && (20 <= soc && soc <= 80) && (chargeRate <= 0.8);
 
  if (!is_all_ok) {
    // Print error messages only if necessary (reduced redundancy)
    if (temperature < 0 || temperature > 45) {
      printf("Temperature out of range!\n");
    }
    if (soc < 20 || soc > 80) {
      printf("State of Charge out of range!\n");
    }
    if (chargeRate > 0.8) {
      printf("Charge Rate out of range!\n");
    }
    return 0;
  }
 
  return 1;
}

int main() {
  assert(batteryIsOk(25, 70, 0.7));
  assert(!batteryIsOk(50, 85, 0));
}
