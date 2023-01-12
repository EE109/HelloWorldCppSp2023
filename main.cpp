/*
Alabama A&M University - EE109 Engineering Computing - Spring 2023
PM: Prof. John Zehnpfennig

Description: HelloWorldCpp is the classic 'first program' for new programmers.
We will use this code in class in Lesson 2 to:
  1. demonstrate and learn basic C++ I/O functions
  2. demonstrate and use Github version control capabilities
  3. demonstrate how to 'invite' multiplayer partners into a Repl
  4. demonstrate collaborative coding
  5. demonstrate proper commenting R9

*/
    
#include <iostream>

int main() 
{
  int number1 = 67;
  float number2 = 0.0; 
  float number3 = 0.0;

  std::cout << "Enter two numbers and hit <Enter>\n";
  std::cin >> number1 >> number2;     // proof of concept that cin can take more than one input on a single line
  number3 = number1 + number2; // summing the inputs
    
   std::cout << "Hello new World!\n" << "\n " << number3;
}
