# CPSC-301
Programming Lab Practicum

For this program, you will read in and analyze temperatures around the nation on a particular day.  The input data will be in a text file called temperature.txt.  The first line of the file will be a date; this can be read in as a string.  This will be followed by an integer that gives the number of locations at which the temperatures were taken; this will be at least 2 and no more than 100.  This is followed by that many lines (2 to 100), where each line has two integers representing the daily high and the daily low at one location.  A short sample content of temperature .txt is given below.

The program should first read in the data from the file.  Use two arrays, one to hold the high temperatures and the other to hold the low temperatures. Once the data has been read in, do the following analysis:

1.  Find the average high and the average low for the day.  Calculate the averages as real numbers, not integers.
2.  Find the highest and the lowest temperature in the nation for the day.

Print the information in a readable format to a file “report.txt”, starting with a title with the date. 

For the high temperatures only, calculate and draw a histogram.  This means counting the number of temperatures that were less than 0, how many in the range 0 to 9, how many in the range 10 to 19, . . . , how many in the range 90 to 99, and how many were 100 or above. The counts must be in an array of size 12, one entry for the 12 ranges given.  The counts should be plotted in a simple graph with a row of *’s giving the count in each range.  The task for getting the correct values for the count array should be implemented as a function.  What will its parameters be?  You may assume that the number of counts in any range will be less than the standard width for the output.  See the example below for the given sample input

Sample contents of temperature.txt
 
March 3, 2010

5

45		 17

72		 54

58		 45

21		 -2

41		 28
 
Sample content of report.txt:

Temperatures on March 3, 2010

Average high: 47.4 F

Average low:  28.4 F

Highest temperature for the day: 72 F

Lowest temperature for the day: -2 F

Histogram of high temperatures:
vertical axis: range of temperatures
horizontal axis: number of temperatures in that range   
 < 0|
 
<= 9|

<=19|

<=29|*

<=39|

<=49|**

<=59|* 

<=69|

<=79|*

<=89|

<=99|

 > 99|

(Hint for printing out labels:  If you want to print out a set of string constants, you can store them in an array and then print them out from the array.  Example

string grade_level [4] = {"Freshman", "Sophomore", "Junior", "Senior"};

for(int level = 0; level < 4; level++)

	cout << grade_level[level] << endl;


