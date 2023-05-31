#include <iostream>

#include "HybridCar.h"

HybridCar::HybridCar() :electricGauge(200) { }
HybridCar::HybridCar(int gas, int electric) : Car(gas), electricGauge(electric){ }
int HybridCar::GetElecGauge() { return electricGauge; }