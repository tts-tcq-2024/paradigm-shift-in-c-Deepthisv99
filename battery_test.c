#include <assert.h>
#include "battery.h"

void testBatteryIsOk() {
    assert(batteryIsOk(25, 70, 0.7));
    assert(!batteryIsOk(50, 85, 0.9));
    assert(!batteryIsOk(-1, 70, 0.7));
    assert(!batteryIsOk(25, 10, 0.7));
    assert(!batteryIsOk(25, 70, 0.9));
    assert(!batteryIsOk(50, 10, 0.9));
    printf("All tests completed.\n");
}

int main() {
    testBatteryIsOk();
    return 0;
}
