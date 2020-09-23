//Prateek Gupta
#include <iostream>
using namespace std;

int main()
{
  int table [10];
  int count;

  //Entering values into Array
  cout << "Enter 10 numbers into the array: " << endl;
  for(int i = 0; i < 10; i++)
  {
    cin >> table[i];
    count++;
  }

  //Printing the values of the array
  cout << "Number of numbers read in: " << count << endl;
  cout << "The numbers are: " << endl;
  for(int n = 0; n < 10; n++)
  {
    cout << table[n] << endl;
  }

  //Average of Array
  double sum = 0.0;
  double average = 0.0;
  for(int a = 0; a < 10; a++)
  {
    sum += table[a];
  }
  average = sum /10;
  cout << "Average of Array is: " << average << endl;

  //Numbers greater than average
  cout << "Numbers that are greater than the average are: ";
  for(int x = 0; x < 10; x++)
  {
    if(table[x] > average)
    {
      cout << table[x] << " ";
    }
  }
  cout << endl;

  //Number less than Average
  cout << "Numbers that are less than the average are: ";
  for(int y = 0; y < 10; y++)
  {
    if(table[y] < average)
    {
      cout << table[y] << " ";
    }
  }
  cout << endl;

  //Locate specific value in Array
  int value;
  char response;
  bool valueFound = false;
  do{
    cout << "What value do you want to locate: ";
    cin >> value;
    for(int b = 0; b < 10; b++)
    {
      if(table[b] == value)
      {
        cout << "Found at index: " << b << endl;
        valueFound = true;
      }
    }
    if(valueFound == false)
    {
      cout << "Value not found" << endl;
    }
    cout << "Do you want to find another value (y/n); ";
    cin >> response;
  }while(response == 'Y'||response == 'y');

  //Locate smallest element in array
  int smallest = table[0];
  for(int t = 1; t < 10; t++)
  {
    if(smallest > table[t])
    {
      smallest = table[t];
    }
  }
  cout << "The smallest value is: " << smallest << endl;
  return 0;
}
