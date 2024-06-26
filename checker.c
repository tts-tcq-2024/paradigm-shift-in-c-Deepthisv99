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
#include <stdbool.h>
#include <assert.h>

bool check_temp_limit(float temperature) {
  if (temperature < 0 || temperature > 45) {
    printf("Temperature is out of range!\n");
    return false;
  }
  return true;
}

bool check_soc_limit(float soc) {
  if (soc < 20 || soc > 80) {
    printf("State of Charge is out of range!\n");
    return false;
  }
  return true;
}

bool check_charge_rate_limit(float charge_rate) {
  if (charge_rate > 0.8) {
    printf("Charge rate is out of range!\n");
    return false;
  }
  return true;
}

bool battery_is_ok(float temperature, float soc, float charge_rate) {
  return check_temp_limit(temperature) && check_soc_limit(soc) && check_charge_rate_limit(charge_rate);
}

int main() {
  assert(battery_is_ok(25, 70, 0.7) == true);
  assert(battery_is_ok(50, 85, 0) == false);
  return 0;
}
