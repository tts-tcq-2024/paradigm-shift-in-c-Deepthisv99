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
bool isTemperatureOk(float temperature) {
    return !(temperature < 0 || temperature > 45);
}
bool isSocOk(float soc) {
    return !(soc < 20 || soc > 80);
}
bool isChargeRateOk(float chargeRate) {
    return !(chargeRate < 0.0f || chargeRate > 0.8f);
}
bool batteryIsOk(float temperature, float soc, float chargeRate) {
    if (!isTemperatureOk(temperature)) {
        printf("Temperature is out of range!\n");
        return false;
    }
    if (!isSocOk(soc)) {
        printf("State of Charge (SOC) is out of range!\n");
        return false;
    }
    if (!isChargeRateOk(chargeRate)) {
        printf("Charge rate is out of range!\n");
        return false;
    }
    return true;
}
int main() {
    
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
