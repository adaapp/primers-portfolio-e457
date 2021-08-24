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

The biggest challenge with primer 2 was to ensure the while loop conditions were correct according to the user's input. For example, the while loop had to have the quantity < 0 conditon. This was due to the quantity declared as a variable set to 1. Therefore, the iteration would occur in the program and produce the prompt questions to the user. From there on, I had to ensure to break the loop once the user entered the integer zero to the console. 

However, the while loop produced less runtime bugs once the while loop was further developed. Moreover, an additon to the code was the header file. In C++, one header file to add was the include <iomanip>. As a result, the method of setprecision could now round the subtotal to 2 decimal places. 

---


### Primer 3 - Password complexity checker


To help complete this challenge I needed to break the overall problem down into the following main tasks: 

* A while loop to repeat the question after user input 

significance of header files in C++
refactoring and purpose is to break the code
check if a string contains an
isdigit
is alpha


naming conventions for functions and variables 

---


### Primer 4 - Employee list removal
---

### Primer 5 - Phone directory

---

### Primer 6 - Data file parser

---

### Primer 7 - Sleep timer

---


### Primer 8 - Joining & Detaching threads

---

### Primer 9 - Car class

---

### Primer 10 - Area of

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


The term ‘ polyglot programmer’ describes a person who can understand and utilise two or more programming languages. These languages can range from different programming paradigms such as imperative with Java to declarative with SQL. 

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