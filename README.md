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

The layout of the primer took into evaluation the steps of the example output. The layout included a precision of words outputted to the console and correct temperature conversions. Furthermore, the conversions calculations were contained inside a function with parameters of the desired value a user would input and a calculation would occur in that particular function. During refactoring, four functions for temperature conversions were created to improve the clarity of the code. As previous code revisions, included one function for a Fahrenheit conversion and the other for a Centigrade conversion. However, this made the code less easy to read and caused further bugs to develop. Therefore, further functions made the C++ code more effective due to fewer runtime bugs. 

The biggest issue related to testing the areas my solution failed. I tested to see if it worked - however, it wasn’t until I tried to break it that I found some issues with my pseudocode implementation. For example, the user input variable had to a data type called float. This data type can hold in memory 4 bytes of data in regards to a decimal. However, if a user entered a string, the console would display an error. As a result, the method of stof() was added to the code. This method was effective as the user could not enter a string. As a result, the console instructed the user to enter a correct value. 


Although using namespace std is not recommended, as a beginner to C++, I wanted to focus on the fundamentals of loops, functions, and variables conventions. For future reference, the using namespace with will be removed in later practice and assigned with :

* using std:: cout; 
* std:: cin;
* std:: string; 

As std:: uses the whole standard library, this would arise the possibility for a naming conflict to occur in an upgraded C++ version.

---

### Primer 2 - Self-service Checkout

The self-service checkout primer required the user to enter the quantity of the item and then the console would further prompt the user to enter the item's price. Moreover, the self-service checkout would be completed when the user enters zero. The price would total to include the shopping tax.

To help complete this challenge I needed to break the overall problem down into the following main tasks: 

* A while loop to repeat the question after user input 
* The data type for the item and quantity variable
* The item variable had to be a float to represent a price. For example, £3.99 is a float.
* The quantity variable had to be an integer
* The user input has to be a float
* Create an exit condition from the loop when zero is entered
* Addition of shopping tax and the total
* Round the subtotal to two decimal places


### Reflection

The biggest challenge with primer 2 was to ensure the while loop conditions were correct according to the user's input. For example, the while loop had to have the quantity < 0 conditions. This was due to the quantity declared as a variable set to 1. Therefore, the iteration would occur in the program and produce prompt questions to the user. From there on, I had to ensure to break the loop once the user entered the integer zero to the console. 

However, the while loop produced fewer runtime bugs once the while loop was further developed. Moreover, an addition to the code was the header file. In C++, one header file to add was the include <iomanip>. As a result, the method of setprecision could now round the subtotal to 2 decimal places. 

---


### Primer 3 - Password complexity checker


The password complexity checker primer required the user to type a password into the console. The console would then display the complexity of that particular password.

The complexity levels included :

* Weak
* Moderate
* Strong
* Very strong

Each password complexity was accustomed to particular rules such as :

* Weak password - only numeric or only alphabetic characters.

* Moderate password - at least 4 characters and is not ‘Weak’, ‘Strong’ or ‘Very Strong’.

* Strong password - at least 8 characters; including at least 2 numeric and at least 4 alphabetic.

* Very strong password - at least 8 characters; including at least 2 numeric, at least 4    alphabetic, and 1 special. 


To help complete this challenge I needed to break the overall problem down into the following main tasks: 

* Create a function that accepts a password as a passed argument and returns the value; do not return a string
* Check if a string contains a digit
* Check if a string contains a character 
* Check if a string contains a special character
* Create different functions with if conditions to compare a user input password 
 


### Reflection

The strength was to break the code by inputting different passwords to test the functionality of the user input password. The first step I took was to check if the string contained a special character, alphabet, number. This was implemented with regex. I used regex as I did not hard code all due to code refactoring. Moreover, functions such as isdigit and isalpha were useful to determine if a character was a numeric value or an alphabet value. 

At first, the code did break, as the input of a very strong password kept resulting in a moderate password outcome. Therefore, this was down to the conditions in the moderate password function. For example, if I entered a special character,8 characters, 2 numeric, and 4 alphabetic values. The console would display 'moderate password'. From further testing, the moderate password function was missing a condition to check if the password entered equals to false in terms of the veryStrongPassword function. This line was code was added to the moderate password if condition statement (veryStrongPassword(userInput)==false).

Once this was changed, when the user would input a very strong password the console would display 'The password ‘Password2021!’ is Very Strong'.

---


### Primer 4 - Employee list removal

The employee list removal primer would display a list of employee names. The user is then prompted to enter an
employee's name. The console will then display the remaining names.


To help complete this challenge I needed to break the overall problem down into the following main tasks: 

* C++ arrays are static, cannot be implemented
* Place the names into a variable
* The for loop needs to repeat the list of employees
* Implement the for loop to display deleted names
* getline to include the first name, space, and last name of the user input


### Reflection

The strength in this primer challenge was the level of understanding to use a for loop. Since the conditions were known beforehand into the number of names in the database. In this case, only five names were in the database. 

The biggest challenge was the constraints in the user input. For example, if the user inputted the name in a lower case or misspelled the name, The console had to cout : 'Please enter the name again' or "The name entered needs to have a capital letter for the first and last name."  



---

### Primer 5 - Phone directory







To help complete this challenge I needed to break the overall problem down into the following main tasks: 

* Create a CSV file with college names and numbers
* Open the file
* User inputs the college name or college number
* Get search from user
* Read line
* Compare to the user input
* If there is a match display in the console
* Close the file

### Reflection

The biggest challenge in this primer was the C++ reading the file correctly. After several attempts, the problem was the whitespace in the CSV file affecting a result to display on the console the particular college name or college number.






---

### Primer 6 - Data file parser
To help complete this challenge I needed to break the overall problem down into the following main tasks: 
### Reflection


---

### Primer 7 - Sleep timer

The sleep timer primer included the introduction to multi-threading. This technique is used in C++ to run functions at the same time instead of running a function one at a time. 


To help complete this challenge I needed to break the overall problem down into the following main tasks: 
### Reflection


---


### Primer 8 - Joining & Detaching threads
To help complete this challenge I needed to break the overall problem down into the following main tasks: 
### Reflection


---

### Primer 9 - Car class
To help complete this challenge I needed to break the overall problem down into the following main tasks: 
### Reflection


---

### Primer 10 - Area of
To help complete this challenge I needed to break the overall problem down into the following main tasks: 
### Reflection
I did not want to use PI instead I created varibale assigned to PI as I di not need to include a library. 



---
## Section 2 - Programming Paradigms
### Programming Paradigms

 





| Programming Paradigms     | Examples |
| ----------- | ----------- |
| Object-oriented   | Java        |
| Structured   | C#        |
| Declarative      | SQL       |
| Imperative      | C++       |
| Event driven      | C       |










---
## Section 3 - Continued Professional Development

### Benefits of becoming a Polyglot Programmer


The term 'polyglot programmer' describes a person who can understand and utilise two or more programming languages. These languages can range from different programming paradigms such as imperative with Java to declarative with SQL. 

Most programming languages share similar concepts. The fundamentals for most programming paradigms include variables, functions, loops, and conditions. 
Therefore, if a programmer is confident with a particular programming language, an introduction to a different paradigm may be less complex than a person programming for the first time. 

An example would be my ability to understand JavaScript and bringing this knowledge to C++, a new language I have never developed an algorithm before. 

Learning a programming language comes with many benefits in terms of problem-solving, self-confidence, independence, and patience. These qualities improve the programmer inside and outside of programming in the workplace or as a hobby. Being a 'polyglot programmer' ensures that a person can pick up terminology more easily during work or studies. For example, if programmers understood the concepts of Python and JavaScript, and were introduced to Ruby. The 'polyglot programmer' would easily adapt to the syntax and understand different concepts which are deemed similar to the two previous languages the programmer is familiar with. Furthermore, there is research evidence based on bilingual children and their ability to outperform children who speak only one language in problem-solving(BBC,2012). Although, this research applies to non-programming languages,the same theory can apply to 'polyglot programmers'. Therefore, a programmer who has the ability to understand more than two programming languages has the ability to filter and focus on important information. As a result, the programmer is better at problem-solving and this can increase their self-confidence in writing and reusing code.  


Lastly, the benefits of a 'polyglot programmer' are adapting to different programming paradigms. This is significant due to the ever-changing technology industry.  


![barchart](https://statisticsanddata.org/wp-content/uploads/2020/10/the-top-10-most-popular-programming-languages-1024x576.jpg)
(Barchart showing 2009's most popular programming languages, n.d.)


In 2009, the most popular programming languages were Java and PHP. The technology industry at this time was predominately focused on website development and DevOps. For example, Facebook's back-end development is built using PHP. Hence, certain programming languages popularity at the time.



![piechart](https://i.redd.it/xpc4w785i2j61.png)

(Piechart showing 2021's most popular programming languages, n.d.)

However, twelve years later the popularity of certain programming languages has changed.
Referring to the piechart, Python is the most popular programming language as of 2021. Whereas, in 2009 the language was ranked in fifth place in terms of popularity. Therefore, the shift in the technology industry leaning more towards data analysis and machine learning may have an impact on the results. Moreover, programming languages such as JavaScript and Ruby might be less effective in the future. This reasoning is evaluated through previous programming languages such as Fortran and PHP.

Therefore, if a programmer is a 'polyglot programmer' then this aspect is beneficial as a 'polyglot programmer's adaptable to different programming paradigms and is likely to remain consistent in the technology industry. 


References

1. BBC(2012) Bilingual children 'better at problem-solving skills' [Online]. Available at https://www.bbc.co.uk/news/uk-scotland-glasgow-west-19109883 (Accessed 24 August 2021).

2. [Barchart showing 2009's most popular programming languages] (n.d.) [Online]. https://statisticsanddata.org/wp-content/uploads/2020/10/the-top-10-most-popular-programming-languages-1024x576.jpg(Accessed 24 August 2021).

3. [Piechart showing 2021's most popular programming languages] (n.d.) [Online]. Available at https://i.redd.it/xpc4w785i2j61.png (Accessed 24 August 2021).