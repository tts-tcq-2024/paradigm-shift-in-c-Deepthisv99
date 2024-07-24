#ifndef BATTERY_H
#define BATTERY_H

typedef enum {
    NORMAL,
    TOO_LOW,
    TOO_HIGH
} BreachType;

BreachType checkRange(float value, float low, float high);
BreachType isTemperatureOk(float temperature);
BreachType isSocOk(float soc);
BreachType isChargeRateOk(float chargeRate);
void printBreachType(const char* parameter, BreachType breach);
int batteryIsOk(float temperature, float soc, float chargeRate);

#endif // BATTERY_H
