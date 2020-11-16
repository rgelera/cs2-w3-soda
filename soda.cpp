#include <iostream>

using namespace std;

struct soda {
  int gramsOfSugar;
  float gramsOfCarbonation;
};

int main() {
  soda **sodaArray = new soda*[3];

  sodaArray[0] = new soda;
  sodaArray[0]->gramsOfSugar = 10;
  sodaArray[0]->gramsOfCarbonation = 20.5;

  sodaArray[1] = new soda;
  sodaArray[1]->gramsOfSugar = 20;
  sodaArray[1]->gramsOfCarbonation = 12.3;

  sodaArray[2] = new soda;
  sodaArray[2]->gramsOfSugar = 34;
  sodaArray[2]->gramsOfCarbonation = 32.0;

  for (int i=0; i < 3; i++) {
    cout << "Sugar: " << sodaArray[i]->gramsOfSugar << "g" << endl;
    cout << "Carbonation: " << sodaArray[i]->gramsOfCarbonation << "g" << endl;
  }
  for (int i=0; i < 3; i++) {
    delete sodaArray[i];
  }
  delete [] sodaArray;
}