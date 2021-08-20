#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <sstream>
#include <vector>
#include <algorithm>
using namespace std;

void phoneCollegeDirectory(){

string userInput;
bool found = false;
string row;

cout<<"\nPlease enter a name or number to search: ";
getline(cin,userInput);//enter a user userinput
cout<<"Searching 10 records ...\n";


// read every column data of a record and store it in a string variable, the college name and phone
  
  string collegeName;
  string phoneNo;

  ifstream ip("phone.csv");
 
  while(ip.good()){
    getline(ip,row);
    stringstream rowss(row);
    getline(rowss,collegeName,',');
    getline(rowss,phoneNo,',');
    //cout<<phoneNo;
  
  //get rid of whitespace
  phoneNo.erase(remove(phoneNo.begin(), phoneNo.end(), ' '), phoneNo.end());
  
//check the user input is in the phone directory
  if(userInput == collegeName || userInput == phoneNo){
  found = true;
  cout<<"\n\nContact details: "<<endl;
  cout<<collegeName << ", T: "<<phoneNo;

}
 
}
ip.close();
//If the user input is not in the phone directory, then tell the user that'sorry, no contact details found'.
if(found == false){
 cout<<"\nSorry, no contact details found";
}}


void phoneDirectory(void) {
	
phoneCollegeDirectory();

}







void dataFileParser(void) {
	std::cout << " - dataFileParser: not yet implemented\n\n";
}