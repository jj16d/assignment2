//
//Joshua John
//
#include "Jet.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>

Jet::Jet(){
  numOfEngines = 1;
  setBrand("Custom");
  setModel("VTx");
}
Jet::Jet(string brand, string model, string fuelType, int numOfEngines) {
  setBrand(brand);
  setModel(model);
  setNumOfEngines(numOfEngines);
  setFuelType(fuelType);

}
Jet::~Jet() = default;
string Jet::getNumOfEngines(){
  return to_string(numOfEngines);
}

void Jet::setNumOfEngines(int num){
  if(num > 0)
    numOfEngines = num;
  else
    numOfEngines = 1;
}
double Jet::mileageEstimate(double time){
  srand(std::time(NULL));
  double mileage = (rand() % 60) + 40;
  if(fuelType == "Rocket" && numOfEngines > 2)
    {
      mileage += mileage * 0.055;
    }
  return mileage;
}
string Jet::toString(){
  return "-> Jet\n" + PoweredVehicle::toString() + "\n\tNumber of engines: "
    + getNumOfEngines();
}
