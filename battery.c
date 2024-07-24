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
#include "battery.h"

BreachType checkRange(float value, float low, float high) {
    if (value < low) {
        return TOO_LOW;
    }
    if (value > high) {
        return TOO_HIGH;
    }
    return NORMAL;
}

BreachType isTemperatureOk(float temperature) {
    return checkRange(temperature, 0, 45);
}

BreachType isSocOk(float soc) {
    return checkRange(soc, 20, 80);
}

BreachType isChargeRateOk(float chargeRate) {
    return checkRange(chargeRate, 0, 0.8);
}

void printBreachType(const char* parameter, BreachType breach) {
    switch (breach) {
        case TOO_LOW:
            printf("%s too low!\n", parameter);
            break;
        case TOO_HIGH:
            printf("%s too high!\n", parameter);
            break;
        case NORMAL:
            break;
    }
}

int batteryIsOk(float temperature, float soc, float chargeRate) {
    BreachType temperatureStatus = isTemperatureOk(temperature);
    BreachType socStatus = isSocOk(soc);
    BreachType chargeRateStatus = isChargeRateOk(chargeRate);

    int isOk = (temperatureStatus == NORMAL) && (socStatus == NORMAL) && (chargeRateStatus == NORMAL);

    if (temperatureStatus != NORMAL) {
        printBreachType("Temperature", temperatureStatus);
    }
    if (socStatus != NORMAL) {
        printBreachType("State of Charge", socStatus);
    }
    if (chargeRateStatus != NORMAL) {
        printBreachType("Charge Rate", chargeRateStatus);
    }

    return isOk;
}
