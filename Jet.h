//
//Created by Joshua John on 10/4/19
//
#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

 private:
  int numOfEngines;
 public:
  Jet();

  explicit Jet(string brand, string model, string fuelType,
	       int numberOfEngines);

  virtual ~Jet();
  string getNumOfEngines();
  void setNumOfEngines(int num);
  virtual double mileageEstimate(double time);
  virtual string toString();
};



#endif //DRIVINGSIMULATOR_JET_H


