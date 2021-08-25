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

The phone directory primer included the C++ code to read a CSV file and prompt the user to enter a college name or phone number. The console would display the amount of records that are being searched. Then display in the console a matched college name and number. 


To help complete this challenge I needed to break the overall problem down into the following main tasks: 

* Create a CSV file with college names and numbers
* Open the file
* User inputs the college name or college number
* Get search from user
* Read line
* Compare to the user input
* If there is a match display the college name and number in the console
* Close the file

### Reflection

The primer challenge strengths included reusing a particular line of code in previous primers. For example, the getline function from primer 4 was reused in this primer. The getline function meant the user can include spaces. This was ideal for the college name and the code reading from the CSV file. 

The biggest challenge in this primer was the C++ code reading the file correctly. After several attempts, the problem was the whitespace in the CSV file affecting a result to display on the console the particular college name and number. Moreover, the user has to input a phone number without spaces. Otherwise, the console will produce an error. 

---

### Primer 6 - Data file parser

This challenge required the C++ code to read the first name, last name, and salary following the CSV file. Then the data with the code needs to contain structure in the form of a grid and the first name to display an initial. 


To help complete this challenge I needed to break the overall problem down into the following main tasks: 

* Open the CSV file
* Spacing between columns is aligned evenly following the example output
* The first name can only display an initial
* created variable to initialise the length of the column 
* Close the CSV file

### Reflection

The primer produced the result of a grid displaying the initial name, last name, and salary from the CSV file. The headings are aligned. 


The biggest challenge with the data file parser primer was the spacing between the columns. Although, the result is aligned with the column headings. The last column has not been executed with the example output. Moreover, the CSV file contains commas separating the three different types of information (first name, last name, and salary). This required reusing the getline function from primer 4 and 5 implemented into the while loop. This was the way to display the information from the file and later closing the file. 

---

### Primer 7 - Sleep timer

The sleep timer primer included the introduction to multi-threading. This technique is used in C++11 and later versions to run programs at the same time instead of running a program one at a time. The purpose is to increase the programs time execution. 


To help complete this challenge I needed to break the overall problem down into the following main tasks: 

* Create a thread object and pass the executing code to be called 
* ‘this_thread’ to block execution relative to the thread making the call.
* The seconds parameter should be optional with a default value of 10 seconds.


### Reflection

The challenge was a great introduction to multi-threading. The primer was executed more simply compared to the other primer challenges. This was due to the primer producing an output from the thread and no user input was required. The sleep timer demonstrated more significance in multi-threading and the fast execution displayed in the console. 

---


### Primer 8 - Joining & Detaching threads

This challenge was a follow-up from primer 7 and includes joining and detaching threads.


To help complete this challenge I needed to break the overall problem down into the following main tasks: 

* The join function returns when the thread execution has completed.
* The detach function separates the thread of execution from a thread object
* The detach function executes to run the thread independently. 


### Reflection

The challenge with primer 8 was with the second thread not ending. This was tested several times with the code. The problem was later resolved and the addition of changing the sleep time parameter to 11 instead of 10. 

However, the join and detach function worked on the third runtime attempt. 

---

### Primer 9 - Car class

The challenge introduced classes and incorporated the example of a car. The class had to showcase the properties of the car. This included the engine turned on or off and whether the car was locked or unlocked. These features had to be determined through user input of numbers one to four. 


To help complete this challenge I needed to break the overall problem down into the following main tasks: 

* Compulsory parameters to describe the car's make and colour - if not provided by the user
* User input of 1 should turn the engine on
* User input of 2 should turn the engine off
* User input of 3 should lock the car
* User input of 4 should unlock the car
* While loop to repeat "Please select an option (or 0 to finish):"
* If the user inputs 0, break the loop 


### Reflection

The biggest challenge was the number of factors to decompose. The class had to incorporate the features of the engine and car lock. At first, the functionality was displaying the wrong information in the console. This was due to user input constraints not in place such as entering the number 4 and the console would display the car was locked.

However, after installing conditions to the functions of the car lock. The user input was producing the correct answer. 

---

### Primer 10 - Area of

The final primer challenge included creating a class, incorporating an overloaded function and a delimiter to calculate three specific shape types. The shape types calculated the area of a triangle, circle, and trapezoid. 

To help complete this challenge I needed to break the overall problem down into the following main tasks: 

* Create an overloaded method and pass parameters 
* The parameters can only hold a certain number e.g. an two overloaded functions cannot hold two parameters.
* Instead two overloaded fucntions can hold one parameter, and the second overloaded function can hold two parameters.
* Include a delimiter ~
* Once the three shapes area have been displayed in the console, the delimiter would indicate the end of the class. 


### Reflection

The biggest challenge was the overloaded function as I first picked to calculate the area of a rectangle, triangle, and circle. The area of a circle was less complex as only one parameter is passed to the overloaded function. This is the radius. However, the area calculation of a rectangle and triangle incorporates two parameters to be passed to the overloaded function. For example :

Area of a rectangle:
* A = L X W
* floatsize(para x, para y)

Area of a triangle:
* A = (B X H) / 2
* floatsize(para q, para w)

The floatsize function would both have two parameters. Therefore, confusion would occur if two parameters are passed through as the program does not know which parameter to execute.

The positives of the challenge was the indication of not using a header file called 
#include<cmath>.
Instead of using a header file to indicate the value of PI. I hard-coded the value of 3.1415 as a float variable.
 
---
## Section 2 - Programming Paradigms
### Programming Paradigms

 In computer programming, paradigms are based on their characterised and therefore categorised. At times, a programming language can be a part of multiple programming paradigms. 

The five programming paradigms I will focus on are object-oriented, structured, declarative, imperative, and event-driven programming languages

This analysis will include the potential strengths and weaknesses of each programming paradigm. While offering explanations for the best-suited paradigm depending on the situation.


| Programming Paradigms     | Examples |
| ----------- | ----------- |
| Object-oriented   | Java        |
| Structured   | C#        |
| Declarative      | SQL       |
| Imperative      | C++       |
| Event driven      | C       |


### OOP
The first programming paradigm is Object-orientated programming also known as OOP. The programming language examples include C++ and Java. The paradigm is based on the creation of a class and concept of objects. In OOP, the class is a template and the object is an instance of a class. Therefore, the paradigm is based on objects rather than functions and logic.

OOP is distinguished by four distinct characteristics: abstraction, inheritance, polymorphism, and encapsulation. Simplicity is ensured by abstraction. Inheritance refers to methods and functions gaining access to the attributes of another class. Polymorphism allows programme code to have multiple meanings or functions, whereas encapsulation is the process of keeping classes private so that external code cannot modify them.

The advantages of the object-orientated programming paradigm are security and re-usability. The concept of encapsulation ensures data can be hidden. Moreover, the re-usability factor occurs due to the creation of a class.

The purpose of the class is not to write the same lines of code, but to contain the properties and methods that the object can use. The object then assigns a value to the specific method or property to run the program. On the other hand, object-oriented programming has disadvantages.

One downside is that when novice programmers learn functions and logic, the language can seem complicated. On the other hand, the body of classes, constructors, and objects may take longer to appear. Also, OOP consumes more CPU. If a program does not require a large number of classes, object-oriented programming may not be the best paradigm.

### Structured programming paradigm


Structured programming makes it easy to create programs with readable code and reusable components. An example of a structured programming paradigm would be C#.


Structured programming encourages the division of applications into a hierarchical structure of self-contained modules or elements, which in turn can contain other similar elements. In each element, you can use relevant code blocks designed for easy reading and maintenance to further build your code. These can include case, which tests variables against a set of values; repetition, while and for, which construct loops until the conditions are met. In all structured programming languages, unconditional transfer of control or goto statements are not recommended, and sometimes they are not even available.

The biggest disadvantage of structured programming is its lower execution efficiency, followed by higher memory usage(Nolle,n.d). Both problems are caused by the introduction of a call to a module or process, which is then returned to the caller after the call is finished.

### Declarative programming paradigm

In declarative programming, the programmer defines what the program should include. However, the programmer does not define how the code should be implemented. Moreover, the code would most likely incorporate built-in methods such as sum() and reduce() instead of using loops. This is different from the imperative programming paradigm, as the imperative paradigm sets a step-by-step instruction to come to a solution. Therefore, there are more lines of code in an imperative paradigm and an average-worse case of time complexity may occur.

Most programmers may find it easier to work with such programming approaches rather than stating more lines of code for the same outcome. Another advantage of declarative programming is it reduces state side effects(Techopedia, 2020). This is due to the paradigm preferring complex constructs like higher-order functions and discouraging variables. The disadvantages of the declarative programming paradigm might be for beginner programmers may not understand built-in methods or higher-order functions. Therefore, imperative programming is most useful to beginner programmers. Due to the simplistic step-by-step prosecutes stated in a particular algorithm or programme. 


### Imperative programming paradigm 

In imperative programming, the programmer describes the steps to implement changes to an algorithm or programme. An example of an imperative programming paradigm is C ++. The imperative programming paradigm is often compared to the declarative programming paradigm since the imperative paradigm appears to state more details of an instruction to the computer. Therefore, an imperative programming paradigm is often used by beginners in programming. 

Furthermore, an advantage of the imperative programming paradigm is that it is relatively easy to learn. Moreover, there are fewer built-in methods to solve a problem. However, a disadvantage can arise. There is more likely for bugs to occur if step-by-step instructions are taken in. More lines of code might cause more bugs to occur. Proofreading imperative code takes longer and some concepts may be not taken into consideration. 


### Event driven programming paradigm 

In event driven programming, the programmer defines the flow of a program execution by events. An example of an event—driven programme paradigm is C. The programmer can instruct the program to conduct the action of a mouse click. This particular programming paradigm is best suited for the creation of operating systems, GUI’s and website development. This is due to the unload of click events that need to occur to progress onto the next event in the paradigm.  Furthermore, the event driven programming paradigm accomplishes the creation of important systems such as GUI’s 

A disadvantage similar to the imperative programming paradigm, GUIs may be slower to load and consume the computer’s RAM. Moreover, an event driven programming paradigm is not needed in certain programming aspects. For example, completing particular algorithms such as reversing a string or calculating the sum of an array. 

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
Referring to the piechart, Python is the most popular programming language as of 2021. Whereas, in 2009 the language was ranked in fifth place in terms of popularity. Therefore, the shift in the technology industry leaning more towards data analysis and machine learning may have an impact on the results. Moreover, programming languages such as JavaScript and Ruby might be less effective in the future. This reasoning is evaluated through previous programming languages such as Fortran and COBOL.

Therefore, if a programmer is a 'polyglot programmer' then this aspect is beneficial as a 'polyglot programmer's adaptable to different programming paradigms and is likely to remain consistent in the technology industry. 


References

1. Nolle(n.d.) Structured programming(modular programming) [Online]. Available at https://searchsoftwarequality.techtarget.com/definition/structured-programming-modular-programming (Accessed 24 August 2021). 

2. Techopedia(2020) Declarative Programming [Online]. Available at: https://www.techopedia.com/definition/18763/declarative-programming (Accessed 24 August 2021).


3. BBC(2012) Bilingual children 'better at problem-solving skills' [Online]. Available at:https://www.bbc.co.uk/news/uk-scotland-glasgow-west-19109883 (Accessed 24 August 2021).

4. [Barchart showing 2009's most popular programming languages] (n.d.) [Online]. Available at : https://statisticsanddata.org/wp-content/uploads/2020/10/the-top-10-most-popular-programming-languages-1024x576.jpg(Accessed 24 August 2021).

5. [Piechart showing 2021's most popular programming languages] (n.d.) [Online]. Available at: https://i.redd.it/xpc4w785i2j61.png (Accessed 24 August 2021).