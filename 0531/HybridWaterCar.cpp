#include <iostream>

#include "HybridWaterCar.h"
using namespace std;

HybridWaterCar::HybridWaterCar() : waterGauage(300){}
HybridWaterCar::HybridWaterCar(int gas, int electric, int water) :HybridCar(gas, electric), waterGauage(water) {}

void HybridWaterCar::ShowCurrentGauge()
{
	cout << "�ܿ� ���ָ�: " << GetGasGauge() << endl;
	cout << "�ܿ� ���ⷮ: " << GetElecGauge() << endl;
	cout << "�ܿ� ���ָ�: " << waterGauage << endl;
}