//Balloon Volume Calculator Program
//Intro C++, Lesson 4
//Written by Andrew Amirr, 06/22/2019

#include <iostream>
using namespace std;

int main() 
{
  //Declare variables and constants
  double balloonRadius = 0.0;
  int ballonsPurchased = 0;
  const double PI = 3.1415;
  double balloonVolume = 0.0;
  double balloonTotalVolume = 0.0;

  //Prompt user to enter inputs
  cout << "Enter the balloon radius: ";
  cin >> balloonRadius;
  cout << "Enter the number of balloons purchased: ";
  cin >> ballonsPurchased;

  //Program calculations
  balloonVolume = 1.3333 * PI * balloonRadius * balloonRadius * balloonRadius; 
  balloonTotalVolume = balloonVolume * ballonsPurchased;

  //Display output item 
  cout << "The total volume of all balloons purchase: " << balloonTotalVolume << endl;

  system("pause");
  return 0;
} //end of main function
