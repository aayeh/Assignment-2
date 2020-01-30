#include <iostream>
using namespace std;

//a function to add sales tax to an item and return the final cost
float addTax(float taxRate, float cost)
{
  //calculation to include tax rate
  cost += (cost*(taxRate/100));
  //return final cost
  return cost;
}
