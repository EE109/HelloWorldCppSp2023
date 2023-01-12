/*
Alabama A&M University - EE109 Engineering Computing - Spring 2023
PM: Prof. John Zehnpfennig

Description: HelloWorldCpp is the classic 'first program' for new programmers.
We will use this code in class in Lesson 2 to:
  1. demonstrate and learn basic C++ I/O functions
  2. demonstrate and use Github version control capabilities
  3. demonstrate how to 'invite' multiplayer partners into a Repl
  4. demonstrate collaborative coding
  5. demonstrate proper commenting

*/

#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string name;
  int age;
  int askAge;
  cout << "Enter your name\n";
  cin>>name;
  cout<<"\n Hello " <<name;
  cout<<"\n May I ask for your age (1-Yes 2-No)?";
  cin>>askAge;
  if(askAge==1){
    cout<< "Enter your age";
  else
    cout<<""
  }
}