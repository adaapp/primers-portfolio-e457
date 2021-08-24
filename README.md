# Primer Portfolio

## Section 1 - Primer Challenges


For Ada's advanced programming module, the introduction of C++ and completion of 10 primer challenges using this programming language was calibrated. The C++ general-purpose language contains rules such as declaring the data type of a variable. In addtion, the most used features each primer included were loops, conditions, and functions. The features ensured less effective runtime bugs occurred in the code. The primers were solved differently in regards to the example output. Initially, pseudocode was issued and implemented with C++ and a standard library.  Moreover, code refactoring was the last step to complete a primer. This step provided clarity towards the code. 



### Primer 1 - Fahrenheit / Centigrade Conversion
This challenge required the user to enter a value before selecting whether to convert the number from Fahrenheit to Centigrade or Centigrade to Fahrenheit. The extension task for including Kelvin in the conversion was also incorporated. As part of the initial design, the conversion algorithms were needed for both calculations.  

To help complete this challenge I needed to break the overall problem down into the following main tasks: 
* Get data from the user
* Verify the data is in a suitable format
* The user input has to be a float
* Create a method to convert F->C
* Create a method to convert C->F
* Create a method to convert K->C
* Create a method to convert K->F
* A while loop to repeat the question after user input 

 
### Reflection (as well as issues, challenges & resolutions)

The layout of the primer took into evaluation the steps of the example output. The layout included a precision of words outputted to the console and correct temperature conversions. Furthermore, the conversions calculations were contained inside a function with parameters of the desired value a user would input and a calculation would occur in that particular function. During refactoring, four functions for temperature conversions were created to improve the clarity of the code. As previous code revisions , included one function for a Fahrenheit conversion and the other for a Centigrade conversion. However, this made the code less easy to read and caused further bugs to develop. Therefore, further functions made the C++ code more effective due to less runtime bugs. 

The biggest issue related to testing the areas my solution failed. I tested to see if it worked - however, it wasn’t until I tried to break it that I found some issues with my pseudocode implementation. For example, the user input variable had to a data type called float. This data type can hold in memory 4 bytes of data in regards to a decimal. However, if a user entered a string, the console would display an error. As a result, the method of stof() was added to the code. This method was effective as the user could not enter a string. As a result, the console instructed the user to enter a correct value. 


Although using namespace std is not recommended, as a beginner to C++, I wanted to focus on the fundamentals of loops, functions and variables conventions. For future reference, the using namespace with will be removed in later practice and assigned with :

* using std:: cout; 
* std:: cin;
* std:: string; 

As std:: uses the whole standard library, this would arise the possibility for a naming conflict to occur in an upgraded C++ version.

---

### Primer 2 - Self-service Checkout
The self-service checkout primer required the user to enter the quantity of the item and then the console would prompt the user to enter the item's price. Moreover, the self-service checkout would be completed when the user enters zero. The price would total to include the shopping tax.

To help complete this challenge I needed to break the overall problem down into the following main tasks: 

* A while loop to repeat the question after user input 
* The data type for the item and quantity variable
* The item variable had to be a float to represent a price. For example, £3.99 is a float.
* The quantity variable had to be an integer
* The user input has to be a float
* Create an exit condition from the loop when zero is entered

The biggest challenge with primer 2 was to ensure the while loop created.

include <iomanip>  //setprecision method to occur for rounding to 2 decimal places

### Primer 3 - Password complexity checker


significance of header files in C++
refactoring and purpose is to break the code
check if a string contains an
isdigit
is alpha

naming conventions for functions and variables 



### Primer 4 - Employee list removal

### Primer 5 - Phone directory


### Primer 6 - Data file parser


### Primer 7 - Sleep timer



### Primer 8 - Joining & Detaching threads

### Primer 9 - Car class

### Primer 10 - Area of

I did not want to use PI instead I created varibale assigned to PI as I di not need to include a library. 



---
## Section 2 - Programming Paradigms
### Programming Paradigms
Simply put, a programming paradigm, for example, procedural, object-oriented, functional, structured, declarative, imperative and event driven can be described as a specific approach used when trying to solve a problem.  Although many programming languages can (and do) support multiple paradigms this discussion will focus more specifically on the possible benefits with examples of the potential differences and similarities of five from the above list. These are ...

well-considered outline and discussion on five of the following programming
paradigms: procedural, object-oriented, functional, structured, declarative, imperative and event
driven.


| Programming Paradigm      | Example |
| ----------- | ----------- |
| Procedural      | Fortran       |
| Object-oriented   | Java        |
| Functional      | Haskell       |
| Structured   | C#        |
| Declarative      | SQL       |
| Imperative      | C++       |
| Event driven      | C       |






---
## Section 3 - Continued Professional Development

### Benefits of becoming a Polyglot Programmer




The term ‘ polyglot programmer’ describes a person who can understand and utilise two or more programming languages. These languages can range from different programming paradigms such as imperative with Java to declarative with SQL. 

Most programming languages share similar concepts. The fundamentals for most programming paradigms include variables, functions, loops, and conditions. 
Therefore, if a programmer is confident with a particular programming language then an introduction to a different paradigm may be less complex compared to a person programming for the first time. 

An example would be my ability to understand JavaScript and bringing this knowledge to C++, a new language I have never developed an algorithm before. 

Learning a programming language comes with many benefits in terms of problem-solving, self-confidence, independence, and patience. These qualities improve the programmer inside and outside of programming in the workplace or as a hobby. During work or studies, being a polygon programmer ensures that a person can pick up terminology more easily. For example, if programmers understood the concepts of Python and JavaScript, and were introduced to Ruby. The polyglot programmer would easily adapt to the syntax and understand different concepts which are deemed similar to the two previous languages the programmer is familiar with.  
