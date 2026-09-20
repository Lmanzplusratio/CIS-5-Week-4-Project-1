#include<iostream>
#include<string>

// Project 01 - Isaiah Salvatierra
// CIS 05 - Student Card

// Shortcuts for us to declare we are going to use these tools in our main code, lets us use just cout, cin, string etc. without having to do the "std::" everytime
using std::cout;
using std::cin;
using std::string; 

// Meat of the code, where all main code is going to be in 
int main() {

  // These are all the different integers, double digit integers, string and subtraction tools we learned how to use, and those being declared
  const int CURRENT_CREDITS = 40;
  string first = "";
  int age = 0;
  int credits = 0;
  double gpa = 0.0;
  int credits_needed = 60 - CURRENT_CREDITS;

// This setup is asking a question with "cout" on the terminal, then once a response is taken, "cin" takes that and the it repeats
  cout << "\nWhat is your First Name? ";                      cin >> first;
  cout << "What is your Age? ";                               cin >> age;
  cout << "How many credits are you currently taking? ";      cin >> credits;
  cout << "What is your GPA? ";                               cin >> gpa;

  // This is just a string like way of displaying what we did on the terminal with the "<<" signs
  cout << "\n=== Student Card ==="  << "\nName: " << first << "\nAge: " << age << "\nCurrent Credits: " << credits << "\nGPA: " << gpa << "\nCredits Left To Take: " << credits_needed << "\n" << "\n";

return 0;
}