#pragma once
#include "HybridCar.h"

class HybridWaterCar : public HybridCar
{
private:
	int waterGauage;
public:
	HybridWaterCar();
	HybridWaterCar(int gas, int electric, int water);
	void ShowCurrentGauge();
};