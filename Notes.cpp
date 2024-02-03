#include <iostream> // I/O library  // Header file // Header files are of 2 types - system defined and user defined

using namespace std; // we don't have to use std:: always but not a good practice

int global=45; // Global variable

void fn1(); // declaring functions
int fn2(int a, int b);

int main(){ // Main function

    // Variables

    // There are two types of variables - global and local; if both are present together then local >> global ; 
    // Scope resolution operator :: it shifts the scope to global variable - cout<<::global<<endl; - will select the global variable
    int var {5};
    int num1;
    float num2 = 3.4;
    double num3 = 9.8; 
    char char_1 = 'a'; 
    std::string name;
    auto auto_var = "Z";
    bool testvar {true}; // a always true boolean 

    // Typecasting
    float z = 34.4; // when passing in any function, floats are usually considered as double
    long double y = 34.67
    /*
    34.4f - it tells compiler to consider it a float no.
    34.67l - it tells compiler to consider it a long double no.
    */

    // Integer modifiers
    /*
    signed - used to store no.s from -2billion to 2 billion
    unsigned - used to store no.s from 0 to 4billion
    short - gives 2 bytes of memory
    long - 4 or 8 bytes of memory
    */ 

   // size and precision of no. datatypes
   /*
   type                 size                   precision (no. of decimal digits)                    
   int                  4                       none
   float                4                       7
   double               8                       15
   long double          12                      >double
   */

    cout << "hello world" << ends; // print without new line , without std:: as abnove specified
    std::cout << "hello world"<< std::endl; //Printing statement [std::endl puts new line]
    std::cout << "the value of variable can be printed : " << var << " in this way" << endl; // Printing variable data


    cin >> num1; //Input commnand
    std::getline(std::cin,name); // can fetch data with spaces
    

    cout << name << num1 << endl;
    std::cerr << "This is a error message" << std::endl;//print errors to console
    std::clog << "This is a log message" << std::endl;//print log messages to the console

    // Number system
    int num6 = 15; // Decimal
    int num7 = 017; // Octal
    int num8 = 0x0F; // Hexadecimal
    int num9 = 0b00001111; // Binary
    cout << "num6 : " << num6 << endl;
    cout << "num7 : " << num7 << endl;
    cout << "num8 : " << num8 << endl;
    cout << "num9 : " << num9 << endl;

    // Arithmetic operators
    /*
    + add
    - subtract
    * multiply
    / divide
    % modulus (returns sign of numerator always)
    */

    // Arithmetic Operator precedence
    /*
    1st / * %
    2nd + -
    3rd =

    (In case of same precedence it goes line by line)

    */

    // logical Operators
    /*
    && and
    || or
    ! not
    ^ xor
    */

    // Operator Precedence
    /*
    1st !
    2nd * / %
    3rd + -
    4th < > <= >= 
    5th == !=
    6th &&
    7th ||
    8th =
    */

    //FUNCTIONS
    fn1(); //calling a function
    num1 = fn2(num1 , 5); //calling a function


    return 0; 
}

//Notes
/*
sizeof(variable) - a function used to find size of datatypes or variable
*/

/*
    Compile time errors
    when you forget to put semicollon or terminate statements then it may show compile time errors

    Runtime errors
    when you run a line or loop which keeps on running then we get a runtime error

    warnings
    warning are simple messages given by compiler when we write a wrong code
    */

// Functions    [void for no value intake or return and int for value processing]
/*
            VOID FUNCTIONS

function_name(); - calling a function (U can call funtions from any other function)

void function_name(){
    statements;
}

            INT FUNCTIONS

var_to_store_functions_return_value = function_name( value1 , value2 , etc); - calling a function

int function_name( parameter1 , parameter2 , etc){
    statements;
}

*/

void fn1(){
    cout << "this function doesnt return any value" << endl;
}

int fn2(int a, int b){
    int sum = a+b;
    return sum;
}

