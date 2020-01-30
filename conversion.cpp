#include <iostream>
using namespace std;

//function for user input
bool userInput(float &m_feet, float &m_inches)
{
  //stating variable for user input to exit or not
  string input;

  //outputting to console to ask if user wants to exit
  cout << "Would you like to exit? (Type exit if so)";

  //inputting their answer
  cin >> input;

  //if else statemnt to return false or true
  if (input == "exit")
  {
    return false;
  }
  //else statement asks user for feet and inches
  else
  {
    cout << "Enter how much feet you want to convert: ";
    cin >> m_feet;
    cout << "Enter how much inches you want to convert: ";
    cin >> m_inches;
    return true;
  }

}

//function for calculation
void calculation(float &m_feet, float &m_inches, float &m_centimeter, float &m_meter)
{
  m_inches += (m_feet * 12);
  cout << m_inches;
  m_centimeter = (m_inches * 2.54);
  m_meter = m_centimeter / 100;
}

//function for output to console
void output(float &m_centimeter , float &m_meter)
{
  cout << "The amount of centimeter(s) are: " << m_centimeter << " and meter(s) are: " << m_meter << endl;
}

//main function
int main()
{
  //stating variables
  float feet = 0;
  float inches = 0;
  float centimeter = 0;
  float meter = 0;

  //while loop to loop through the 3 functions
  while (userInput(feet, inches) == true)
  {
    calculation(feet, inches, centimeter, meter);
    output(centimeter, meter);
  }
  return 0;
}
