//  Preprocessor directives - tells C++ what I can use
#include <iostream>
// #include - what files to include
// <  <- opening bracket ??? closing bracket -> >
// iostream = The program can interact with the console

using namespace std;
// so I don't need to type "std::" before console command
// eg. std::cout<< can now be written cout<<

// declares the main program all c++ programs must have one (at least for this course)
int main() {
// int = integer or whole numbers (1,2,3...) the program will retrun a whole number
// main = control program, it commands the actions of other subprograms
// ( <- left right ->) () are used to pass information into the main() (argurments / parameters)
// { curcly brace opens a program and nees a closing }

  std::cout << "Hello World!\n";
// cout = console output 
// << is data direction
// "" what is being printed as a sentence (a string) 
cout << "5+7 \n";
cout << 5 + 7 << endl;
// what is the difference between \n and <<endl? (endl = endline)
// \n is used in " "
// <<endl is used in any cout statement
}

