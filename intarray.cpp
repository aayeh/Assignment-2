#include <iostream>
using namespace std;

int main()
{
  int input;
  int myArray[10];
  cout << "Enter ten non negative integers" << endl;
  for (int i = 0; i < 10; ++i)
  {
    cin >> input;
    myArray[i] = input;
  }
  cout << "The numbers you inputed are";
  for (int n = 0; n < 10; ++n)
  {
    cout << ", " << myArray[n];
  }
  cout << endl;
  return 0;
}
