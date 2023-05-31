#include <iostream>

#include "Car.h"
#include "HybridCar.h"

Car::Car() : gasolineGauge(100){ }
Car::Car(int gauge) : gasolineGauge(gauge){ }


int Car::GetGasGauge() { return gasolineGauge; }