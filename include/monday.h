#include <iostream>
using namespace std;

float ftoc(float f) {
  return ((f - 32) * 5 / 9); //Fahrenheit to Centigrade.
}

float ctof(float c) {
  return ((c * 9 / 5) + 32); //Centigrade to Fahrenheit.
}

// use kelvin convertor float k

void tempC() {
  string temp;
  string label;
  float ortemp = 0.0;
  float t = 0.0;

  cout << "\nPlease enter the starting temperature: ";
  getline(cin, temp);
  ortemp = stof(temp);//checks to see if the user is using a non-numeric.

  cout << "\nPress ‘C’ to convert from Fahrenheit to Centigrade";
  cout << "\nPress ‘F’ to convert from Centigrade to Fahrenheit.\n\n";

  cout << "\nYour choice: ";
  getline(cin, temp);

  if(temp == "C" || temp == "c") {
    t = ftoc(ortemp);
    label = "Fahrenheit";
  }

  if(temp == "F" || temp == "f") {
    t = ctof(ortemp);
    label = "Centigrade";
  }

  cout << ortemp << " degrees " << label << " is " << t << "\n";

}

void fahrenheitCentigradeConversion(void) {

  tempC();

}






void selfServiceCheckout(void) {
	std::cout << " - selfServiceCheckout: not yet implemented\n\n";
}

