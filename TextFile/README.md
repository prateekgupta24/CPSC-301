# CPSC-301
Programming Lab Practicum

1.	Read /review chapter on files.  

2.	What we want to do is to test our ability to write to a text file and later read from it.  Suppose we wrote a program like the following:
(just the main body)

	int n1 = 3;
	int n2 = 10;

	ofstream outFile; 
	outFile.open(“test.txt”);

	outFile << n1 << endl;
	outFile << n2 << endl;

	outFile.close();

	ifstream inFile;
	inFile.open (“test.txt”);

	inFile >> n1;
	inFile >> n2;

	inFile.close();

	cout << “n1: “ << n1 << endl;
	cout << “n2: “ << n2 << endl;

If you ran this and it printed out 3 for n1 and 10 for n2, is this proof that your program correctly wrote to a text file and then read from it?	If you think so, try copying it and running it.  

3.	After it runs, try modifying the second file name “test.txt” to “abc.txt” and see how it runs.  What’s going on?

4.	Add test.txt to resource files in your project.  Where was the file located?  If you were going to add a file to a project for reading data, what directory would you put that file in?  Did you find abc.txt in this directory?

5.	Change the type of the variable to be an integer and a float.  Initialize these variables to interesting values such as 12345 and 88.9922.  Rerun the program after making any modifications to get it to run.

6.	Reverse the order of reading the values from the file.  What is the result and why?
