#include <iostream>
using namespace std;


class Car {
  private:

    const string defaultColour = "White";
    const string DefaultMake = "Honda";

    string carColour; 
    string carMake; 
    bool engineTurnedOn;
    bool carLocked;
    string engineLabel;
    string lockedLabel;


    void initCar(string colour, string make, bool running, bool isLocked){
      carColour = colour;
      carMake = make;
      engineTurnedOn = running;
      carLocked = isLocked;
    }

  public:
    Car() {
      cout << "\ncreated no params";
      initCar(defaultColour, DefaultMake, false, true);
    }
   
    Car(string colour, string make) {
      cout << "\ncreated with params";
      initCar(colour, make, false, true);
    }

    Car(string colour) {
      cout << "\ncreated with params";
      initCar(colour, DefaultMake, false, true);
    }

    ~Car() {
     cout << "\ndestroyed\n";
    }

    void setColour(string colour) { 
      carColour = colour;
    }

    string getColour(void) { 
      return carColour;
    }

    void setMake(string make) { 
      carMake = make;
    }
    string getMake(void) { 
      return carMake;
    }
    
    void engineOn(void) { 
      engineTurnedOn = true;
    } 


    void locked(bool isLocked) { 
      if(isLocked) {
        carLocked = true;
      } else {
        carLocked = false;
      }
    } 

    void status(void) {
      engineTurnedOn ? engineLabel = "Running" : engineLabel = "Off";

      if (engineTurnedOn) {
        engineLabel = "Running";
      }

      if(carLocked == true){
        lockedLabel = "Locked";
      }else{
        lockedLabel = "Unlocked";
      }

      cout << "\nCar Status: colour: " << carColour << ", make: " << carMake << ", engine: " << engineLabel << ", " << lockedLabel;
    }

    void engineOff(void) {
      if(engineTurnedOn) {
        engineTurnedOn = false;
      }else {
        cout << "\nSorry, the engine is already off"; 
      }
    }

};
//Options
// 1. Turn Engine On
// 2. Turn Engine Off
// 3. Lock Car
// 4. Unlock Car
// Please select an option (or 0 to finish): 2


void carExample() {

  Car myCar;
  
  //user input enquiry - entering a number to continue or finish the programme
  string userInputString;
  
  int userInput = 1;

  while (userInput > 0) {
    myCar.status();

    cout<<"\nPlease select an option (or 0 to finish): ";
    getline(cin,userInputString);
    userInput = stoi(userInputString);
    
    if(userInput == 1){
      myCar.engineOn();
    }
    else if(userInput == 2){
      myCar.engineOff();
    }
    else if(userInput == 3){
      myCar.locked(true);
    }
    else if(userInput == 4){
      myCar.locked(false);
    }
    else{
      if(userInput != 0){
        cout<<"Invalid option selected";
      }
    }
  }

}



void carClass(void) {		
carExample();
}



#include <iostream>
using namespace std; 


class AreaofShape{
 private:  //user cannot change the PI value
  float PI = 3.1415;

public:
~AreaofShape(){
 cout<<"\nDestroyed";
   }
  float size(float a){ //area of circle calculation
  // a = radius 
  // a = r(^)2
    float areaAnswer = (a*a) * PI;
    return areaAnswer;
  }
  float size(float b,float c){ //area of triangle calculation
  // pass 2 parameters:
  //b = base
  //c = height
     float areaAnswer = (b*c) * 0.5;
    return areaAnswer;
  }
  //area of trapezoid
  // pass 3 parameters :
  //d = top base
  //e = bottom base
  //f = height
  float size(float d, float e, float f){
     float areaAnswer = (((d+e)/2)*f);
     return areaAnswer;
  }

};

void shapeArea(){
AreaofShape area;
cout<<"\nArea of circle (r = 47): "<<area.size(47)<<endl;
cout<<"\nArea of triangle (b = 10, h = 3): "<<area.size(10,3)<<endl;
cout<<"\nArea of trapezoid (b = 3, h = 4 ,a = 3 ): "<<area.size(10,3,4)<<endl;
}


// Area of Circle (r = 4.5): 63.6172
// Area of Triangle (b = 8, h = 12): 48
// Area of Trapezoid (b = 14, h = 7.5, a = 6): 75


void areaOf(void) {
	shapeArea();
    
}