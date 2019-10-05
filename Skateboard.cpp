#include "Skateboard.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <string>
#include <random>
Skateboard::Skateboard(string brand, string model){
  setBrand(brand);
  setModel(model);
}
Skateboard::~Skateboard() = default;
double Skateboard::mileageEstimate(double time){
  srand(std::time(NULL));
  std::random_device rd;
  std::default_random_engine generator(rd()); // rd() provides a random seed
  std::uniform_real_distribution<double> distribution(0.1,0.5);
  double mileage =  distribution(generator);
  if(time > 25 && time < 250)
    {
      std::uniform_real_distribution<double> distribution(1,time/3);
      double num = distribution(generator);
      mileage += num;
    }
}
string Skateboard::toString(){
  string s = "-> Skateboard\n\t";
  return "->Skateboard\n" + Vehicle::toString();
}
