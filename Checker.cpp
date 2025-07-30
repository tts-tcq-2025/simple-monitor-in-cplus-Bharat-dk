#include <assert.h>
#include <iostream>
using namespace std;

bool batteryTempIsOk(float temperature)
{
  return temperature >= 0 && temperature <= 45;
}

bool batterySocIsOk(float soc)
{
  return soc >= 20 && soc <= 80;
}

bool batteryCRIsOk(float chargeRate)
{
  return chargeRate <= 0.8;
}

bool batteryIsOk(float temp, float sc, float cRate) 
{
    bool a = batteryTempIsOk(temp) && batterySocIsOk(sc) && batteryCRIsOk(cRate);
  return a;
}

int main() {
  assert(batteryIsOk(40, 40, 0.2) == true);
  assert(batteryIsOk(50, 85, 0) == false);
  
}
