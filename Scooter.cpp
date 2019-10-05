#include "Scooter.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
Scooter::Scooter(){
  setBrand("Custom");
  setModel("VTx");
}
Scooter::Scooter(string brand, string model, string fuelType, string engineSize)
{
  setBrand(brand);
  setModel(model);
  setFuelType(fuelType);
  setEngineSize(engineSize);
}
Scooter::~Scooter() = default;
string Scooter::getEngineSize(){
  return myEngineSize;
}
void Scooter::setEngineSize(string engineSize)
{
  if (engineSize == "unknown" || engineSize == "small" ||
      engineSize == "medium" || engineSize == "grande") {
    myEngineSize = engineSize;
  } else {
    myEngineSize = "unknown";
  }

}
double Scooter::mileageEstimate(double time) {
  double mileage = 15 * time;
  if (fuelType == "electricity") {
    mileage += mileage * 0.06;
  }
  return mileage;
}
string Scooter::toString() {
  return "-> Scooter\n" + PoweredVehicle::toString() + "\n\tEngine Size: " +
    getEngineSize();
}
