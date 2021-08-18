#include <iostream>
using namespace std;

// helper functions created for different temperature conversions
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

// void function not returning a value to be used in the  fahrenheitCentigradeConversion(void) function
void tempCon() {
  string temp;// converted temperature
  string label;// the temerature name will change depending on the user input
  float originTemp = 0.0;//original starting temperature from the user input
  float t = 0.0;//Converted temperature

  cout << "\nPlease enter the starting temperature: ";
  getline(cin, temp);//getline() function reads a line of text. It takes cin as the first parameter, and the string temp variable as the second parameter
  originTemp = stof(temp);//restriction checks to see if the user is using a non-numeric- string to float

   //User input to press a particular keyboard character for the conversion to occur
  cout << "\nPress ‘C’ to convert from Fahrenheit to Centigrade";
  cout << "\nPress ‘F’ to convert from Centigrade to Fahrenheit.";
  cout << "\nPress ‘A’ to convert from Kelvin to Centigrade.";
  cout << "\nPress ‘B’ to convert from Kelvin to Fahrenheit.";

// create a while loop to display "your choice" to the user
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


#include <iostream>
#include <iomanip>  //setprecision method to occur for rounding to 2 decimal places
#include <string>
#include <typeinfo>
#include <limits>

using namespace std;
// This function calculates the addItem by using the subtotal, quantity, cost of item
float addItem(float subtotal, int quantity, float itemCost) {
 return subtotal + (quantity * itemCost);
}

bool isDigit(string value){
  //Returns true if string is a valid number
  //Returns false if string is not a valid number
  for(int i=0;i<value.length();i++){
    if((isdigit(value[i])==false) && (value[i] != '.')){
      //for loop checks each character in the string e.g. a letter then retuen false and enterbthe cout question again
      return false;
    }
  }
  return true;
}
//list of variables with their most credible data types accorind to RAM
void selfService() {
  const float shoppingTax = (5.5/100);
  float subtotal = 0;
  bool quit = false;
  int items = 1;
  int quantity= 1;
  string test;
  float itemCost = 0.0;
  float total;
// while loop to continue to run a cout until zero is pressed by the user
  while(quantity > 0) {
     
    cout<<"\nPlease enter the quantity for item "<<items<<" (or 0 to finish):";
    getline(cin >> ws ,test);

    if (isDigit(test)){
      quantity=stoi(test);
      if(quantity > 0) {
        cout<<"Please enter item "<<items<<"’s cost:";
        cin>>itemCost;
        items++;
        subtotal = addItem(subtotal, quantity, itemCost);
      }
    }
  }
 // the total calculation only takes into consideration the subtotal and shopping tax 
  total = (subtotal * shoppingTax) + subtotal;
  cout<<"Thank you.\n\n";
  cout<<"Subtotal:£"<<subtotal;
  cout<<"\nShopping Tax:£"<< fixed<<setprecision(2)<<shoppingTax * subtotal;
  cout<<"\nTotal:£"<< fixed<<setprecision(2)<< total<<"\n";//set precision is used to round the total amount to 2 decimal places.
}



void selfServiceCheckout(void) {
 selfService();
}


