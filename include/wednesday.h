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

#include <iostream>
#include <fstream>
#include <sys/stat.h>
#include <sstream>
#include <vector>
#include <iomanip>
using namespace std;



void checkSalary()
{
    ifstream ip("salary.csv");
    string firstName;
    string initial;
    string lastName;
    string salary;
    string row;
    
    //Length of columns
    int len_column_1 = 7;
    int len_column_2 = 9;
    int len_column_3 = 6;
    
    //Showing column headings
    cout<<"Initial"<<string(1,' ')
    <<"Last"<<string(len_column_2-3,' ')
    <<"Salary"<<endl;

    //Showing column underlines
    cout<<string(len_column_1,'-');
    cout<<' '<<
    string(len_column_2,'-');
    cout<<' '<<
    string(len_column_3,'-')
    <<endl;


    while(ip.good()){
        //Get each row seperated by a new line character
        getline(ip,row);
        stringstream ssrow(row);
        //Get each record seperated by a comma
        getline(ssrow,firstName,',');
        getline(ssrow,lastName,',');
        getline(ssrow,salary,',');
      
        initial = firstName[0];
        salary  =  "£"+salary;

        cout<<initial+'.'<<string(len_column_1-1,' ')
        <<lastName<<
        string(len_column_2 - lastName.length()+1,' ')<<
        salary<<"\n";

    }
    
}


void dataFileParser(void) {
	checkSalary();

}