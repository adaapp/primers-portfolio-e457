
#include <iostream>
#include <regex>
using namespace std;
//function to count numbers
// function to count alphabets

//The use of regex to minimise lines of code 
//helper functions created to reduce side effects enlisted in one main function
// helper functions to check if the password has a number, character and special character - depending on the password complexity 



bool checkNo (string userInput)
{


 regex number ("[\\[0-9]");	//built-in data type 
  if (regex_search (userInput, number))
    {				//using regex search function to check if there are numbers, user out match pattern if true return 1, if false return 0
      return true;
    }
  else
    {
      return false;
    }
}

bool
checkAlpha (string userInput)
{

  regex alpha ("[\\[^A-Za-z]");	//built-in data type 
  if (regex_search (userInput, alpha))
    {				//using regex search function if there are letter characters, user out match pattern if true return 1, if false return 0
      return true;
    }
  else
    {
      return false;
    }
}


bool
checkSpecial (string userInput)
{

  regex special ("[^a-zA-Z0-9]+");	//built-in data type, regex checks for special characters
  if (regex_search (userInput, special))
    {				//using regex search function if there are letter characters, user out match pattern if true return 1, if false return 0
      return true;
    }
  else
    {
      return false;
    }

}

//create a function to check how many numbers there are in a string
//create a loop to go through each character of the string 
// If there are no numbers then 0 will be the output, if there are numbers the expected output is the number count 
//create a variable to initailse the counter e.g. totalNoOfNumbers

int countNo(string userInput){
    int totalNoOfNumbers = 0;
    
    for(int i =0; i<userInput.length();i++){  //loops throught the length of the string
        if(isdigit(userInput[i])){ //if userInput has any numbers -- isdigit()
            totalNoOfNumbers +=1;
        }
    } return totalNoOfNumbers;
}

//create a function to check how many alpha characters there are in a string  
//create a loop to go through each character of the string 
// If there are no alphabets in the string then 0 will be the output, if there are alphabets the expected output is the alphabet count 

int countAlpha(string userInput){
//create a loop to check input
int totalNoOfAlpha = 0;

for(int i =0; i<userInput.length();i++){
    if(isalpha(userInput[i])){//is alpha checks if character is alphabetic
        totalNoOfAlpha +=1;
    } 
}   return totalNoOfAlpha;
}

//boolean function for a 0 to equal false, and a 1 to equal true 
//weak password is value 1 : only numeric and alpha char
bool
weakPassword (string userInput){

  if(((checkNo(userInput)==true) && (checkAlpha(userInput)==true)) || (checkSpecial(userInput)==true))
    {
      return false;
    }
  else
    {
      return true;
    }
}

//at least 8 characters; including at least 2 numeric and at least 4 alphabetic
bool
strongPassword (string userInput)
{

  if((countAlpha (userInput)>=4) && (userInput.length()>=8) && (countNo(userInput)>=2) && (checkSpecial(userInput)==false)){
      return true;
    }

  else
    {
      return false;
    }

}

//at least 8 characters; including at least 2 numeric, at least 4 alphabetic and 1 special
// conditions added to check if the userinput has a very strong password complying with the rules above

bool
veryStrongPassword(string userInput)
{

  if((countAlpha (userInput)>=4) && (userInput.length()>=8) && (countNo(userInput)>=2) && (checkSpecial(userInput)==true)){
      return true;
    }
  else
    {
      return false;
    }
}

//moderate the last password complexity checker; complier reads the functions top to bottom 
// at least 4 characters and is not ‘Weak’, ‘Strong’ or ‘Very Strong’
// set functions to false to return true when a moderate password is entered 
bool
moderatePassword(string userInput)
{
   if((weakPassword (userInput) ==false) && (strongPassword(userInput)==false) && (veryStrongPassword(userInput)==false) && (userInput.length()>=4)){
       return true;
   }
    return false;
}

//instead of cout a string an integer will be the output of the type of password the user enters e.g. 1 = weak password

int passwordComplexityCheck(string userInputPassword){
    
    if(weakPassword(userInputPassword)==true){
        return 1;
    }
    if(moderatePassword(userInputPassword)==true){
        return 2;
    }
    if(strongPassword(userInputPassword)==true){
        return 3;
    }
    if(veryStrongPassword(userInputPassword)==true){
        return 4; 
    } 
    return 0; //function may not return an integer then return 
}


void passwordComplexityChecker(void) {
	
string userInput;
  cout << "Enter your password:";
  cin >> userInput;
  //helper functions commeted out used for test if inputs are contain a character, number or special character
//   cout << weakPassword (userInput) << endl;
//   cout << "check your input's number" << checkNo (userInput) << endl;
//   cout << "check if userinput has alphabet" << checkAlpha (userInput) << endl;
//   cout << "check if userinput has special character" <<
//     checkSpecial (userInput);
  if(passwordComplexityCheck(userInput)==1){
      cout << "The password"<<"'"<< userInput <<"'"<< "is Weak";
  }
  else if(passwordComplexityCheck(userInput)==2){
      cout << "The password"<<"'"<< userInput <<"'"<< "is Moderate";
  }
  else if(passwordComplexityCheck(userInput)==3){
      cout << "The password"<<"'"<< userInput <<"'"<< "is Strong";
 }
 else if (passwordComplexityCheck(userInput)==4){
      cout << "The password"<<"'"<< userInput <<"'"<< "is Very Strong";
 }


}

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;


void removeEmployeeName()
{
  int nameCount = 5; //To keep track of the user input for names
	const int n = 5;//the array has 5 values
	bool found = false;
	string arrayNames[n] = {"John Smith", "Jaelynn Stuart","Kaley Barajas","Walter Collier","Cale Myers"}; //the store of the names
	list<string> v(arrayNames, arrayNames+n);
	list<string>::iterator it;
  while(v.size()>0){
  cout<<"\n\nThere are "<<v.size()<<" employees: "<<endl;

    
 	for(it = v.begin(); it != v.end(); it++)
 	{
	
	cout<<"\n"<<*it;
	
 	}
    
    
  cout <<endl;
	string removeName;
	cout<<"\nEnter an employee name to remove: ";
	getline(cin, removeName);
	
     
  for(it = v.begin(); it != v.end(); it++)
 	{
	
	if(*it==removeName){
	    found = true;
	}

 	} 

 v.remove(removeName);
	if(found == false){
	    cout<<"\nThe name entered needs to have a capital letter for the first and last name.";
	    cout<<"\n\nPlease enter the name again: ";
	}



}
cout<<"\nThere are no names to delete in the database."<<endl;
cout<<"\nThank-you.";
}
void employeeListRemoval(void) {

  removeEmployeeName();
	
}