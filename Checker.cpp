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
  bool a = batteryTempIsOk(temp);
  bool b = batterySocIsOk(sc);
  bool c = batteryCRIsOk (cRate);
  
  if ( a && b && c == true)
  {
    cout << "All looks Good!!\n";
    return true;
  }
  else
  {
    return false;
  }
}

int main() {
  assert(batteryIsOk(40, 40, 0.2) == true);
  assert(batteryIsOk(50, 85, 0) == false) ;
}
