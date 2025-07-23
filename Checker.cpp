#include <assert.h>
#include <iostream>
using namespace std;

bool batteryTempIsOk (float temperature)
{
  if(temperature < 0 || temperature > 45) 
  {
    cout << "Temperature out of range!\n";
    return false;
  }
  else
  {
    return true;
  }
}

bool batterySocIsOk (float soc)
{
 if(soc < 20 || soc > 80) 
 {
    cout << "State of Charge out of range!\n";
    return false;
 }
 else
 {
     return true;
 }
}
  
bool batteryCRIsOk (float chargeRate)
{
  if(chargeRate > 0.8) 
  {
    cout << "Charge Rate out of range!\n";
    return false;
  }
  else
  {
    return true;
  }
}

bool batteryIsOk(float temp, float sc, float cRate) 
{
return batteryTempIsOk(temp) && batterySocIsOk(sc) && batteryCRIsOk(cRate);
}

int main() {
  assert(batteryIsOk(40, 40, 0.2) == true);
  assert(batteryIsOk(50, 85, 0) == false) ;
}
