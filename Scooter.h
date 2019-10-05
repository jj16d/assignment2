//
//Created by Joshua John on 10/4/19
//
#ifndef DRIVINGSIMULATOR_SCOOTER_H
#define DRIVINGSIMULATOR_SCOOTER_H

#include "PoweredVehicle.h"

class Scooter : public PoweredVehicle {

 private:
  string myEngineSize;
 public:
  Scooter();

  explicit Scooter(string brand, string model, string fuelType,
               string engineSize);

  virtual ~Scooter();
  string getEngineSize();
  void setEngineSize(string engineSzie);
  virtual double mileageEstimate(double time);
  virtual string toString();
};



#endif //DRIVINGSIMULATOR_JET_H
