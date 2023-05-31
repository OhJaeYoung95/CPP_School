#pragma once
#include "Car.h"

class HybridCar : public Car
{
private:
	int electricGauge;
public:
	HybridCar();
	HybridCar(int gas, int electric);
	int GetElecGauge();
};