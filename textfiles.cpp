#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int n1 = 12345;
  float n2 = 88.9922;

	ofstream outFile;
	outFile.open("test.txt");

	outFile << n2 << endl;
	outFile << n1 << endl;


	outFile.close();

	ifstream inFile;
	inFile.open ("abc.txt");

  inFile >> n2;
	inFile >> n1;

	inFile.close();

	cout << "n1: " << n1 << endl;
	cout << "n2: " << n2 << endl;

  return 0;
}
