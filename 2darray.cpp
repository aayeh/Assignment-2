#include <iostream>
using namespace std;

int main()
{
  //creating 2d array
  int a[4][5];

  //for loop for inputing numbers
  for (int i = 0; i < 4; ++i)
  {
    cout << "Enter 5 numbers: " << endl;
    for (int n = 0; n < 5; ++n)
    {
      cin >> a[i][n];
    }
  }

  //for loop for printing numbers
  for (int x = 0; x < 4; ++x)
  {
    cout << endl;
    for (int y = 0; y < 5; ++y)
    {
      cout << a[x][y];
    }
  }
  cout << endl;
}
