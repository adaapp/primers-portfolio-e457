#include <iostream>
using namespace std;


float fahtocel(float f) {
  return ((f - 32) * 5 / 9); //Fahrenheit to Centigrade.
}

float celtofah(float c) {
  return ((c * 9 / 5) + 32); //Centigrade to Fahrenheit.
}

float keltocel(float a){
return a - 273.15;
} //Kelvin to Centigrade.

float keltofah(float b){
return((b-273.15)*1.8 + 32);
} //Kelvin to Fahrenheit


void tempCon() {
  string temp;
  string label;
  float originTemp = 0.0;//original starting temperature from the user
  float t = 0.0;//Converted temperature

  cout << "\nPlease enter the starting temperature: ";
  getline(cin, temp);
  originTemp = stof(temp);//checks to see if the user is using a non-numeric- string to float

   //User input 
  cout << "\nPress ‘C’ to convert from Fahrenheit to Centigrade";
  cout << "\nPress ‘F’ to convert from Centigrade to Fahrenheit.";
  cout << "\nPress ‘A’ to convert from Kelvin to Centigrade.";
  cout << "\nPress ‘B’ to convert from Kelvin to Fahrenheit.";


  bool promptUser = true;
  while(promptUser == true){
    cout << "\nYour choice: ";
  getline(cin, temp);
  promptUser = false;

  if(temp == "C" || temp == "c") {
    t = fahtocel(originTemp);
    label = "Fahrenheit";
  }//user input is lower or uppercase c then conversion of fahrenheit to centigrade

  else if(temp == "F" || temp == "f") {
    t = celtofah(originTemp);
    label = "Centigrade";
  }//user input is lower or uppercase f then conversion of centigrade to fahrenheit

  else if(temp == "A"|| temp == "a" ){
    t = keltocel(originTemp);
    label = "Kelvin";
  }//user input is lower or uppercase a then conversion of kelvin to centrigrade
  
  else if(temp == "B" || temp == "b"){
    t = keltofah(originTemp);
    label = "Kelvin";
  }//user input is lower or uppercase b then conversion of kelvin to fahrenheit
 else{ cout << "Invalid option" <<endl; promptUser =true;}    
  }


  cout << originTemp << " degrees " << label << " is " << t << "\n";

}

void fahrenheitCentigradeConversion(void) {

  tempCon();

}
int main()
{ fahrenheitCentigradeConversion();
  return 0;
}






void selfServiceCheckout(void) {
	std::cout << " - selfServiceCheckout: not yet implemented\n\n";
}

