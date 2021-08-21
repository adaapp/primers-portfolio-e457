void carClass(void) {
		std::cout << " - carClass: not yet implemented\n\n";
}





#include <iostream>
using namespace std; 


class AreaofShape{
 private:  //user cannot change the PI value
  float PI = 3.1415;

public:
AreaofShape(){
  //float PI = 3.1415; //PI is declared
   }
  float size(float a){ //area of circle calculation
  // a = radius 
  // a = r(^)2
    float areaAnswer = (a*a) * PI;
    return areaAnswer;
  }
  float size(float b,float c){ //area of triangle calculation
  // pass 2 parameter:
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
cout<<"\nThe area of the circle "<<area.size(47)<<endl;
cout<<"\nThe area of the triangle "<<area.size(10,3)<<endl;
cout<<"\nThe area of the trapezoid "<<area.size(10,3,4)<<endl;
}


void areaOf(void) {
	shapeArea();
    
}