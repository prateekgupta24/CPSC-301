#include <string>
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <sstream> //to split string

using namespace std;

int main()
{
   ifstream data; //to read data
   ofstream outData; //to write data
   string date;
   string temperatures;
   string temp;
   string tempLine;
   int numOfTemps = 0;
   string ranges[] = {" < 0: ","<= 9: ","<= 19: ","<= 29: ","<= 39: ","<= 49: ","<= 59: ","<= 69: ","<= 79: ","<= 89: ","<= 99: "," > 99: "};
   int high[100];
   int low[100];
   int histogram[12] = {0};
   double highAvgTemp = 0.0;
   double lowAvgTemp = 0.0;
   double sumHigh = 0.0;
   double sumLow = 0.0;
   double highTemp = 0.0;
   double lowTemp = 0.0;

   data.open("temperature.txt");
   if (data.fail())
   {
     cerr << "Could not open file" << endl;
     exit(2);
   }

   getline(data, date);
   data >> numOfTemps;
   getline(data, temp);;
   int i = 0;
   for(int x = 0; x < numOfTemps; x++) 
   {
     //atoi() = convert integer to string
     //.c_str() = splits strings
       getline(data,tempLine);
       stringstream ss(tempLine);
       ss >> temp;
       high[i] = atoi(temp.c_str());
       ss >> temp;
       low[i] = atoi(temp.c_str());
       i++;
   }

   for(int j = 0; j < i; j++)
   {
       sumHigh += high[j];
   }
   highAvgTemp = sumHigh/i;

   for(int j = 0; j < i; j++)
   {
       sumLow += low[j];
   }
   lowAvgTemp = sumLow/i;

   outData.open ("report.txt");
   outData << "Temperature on " << date << endl;
   outData << "Average High " << highAvgTemp << " F" << endl;
   outData << "Average Low " << lowAvgTemp << " F" << endl;

   for(int j = 0; j < i; j++)
   {
       if(high[j] > highTemp)
       {
           highTemp = high[j];
       }
   }

   for(int j = 0; j <i ; j++)
   {
       if(low[j] < lowTemp)
       {
           lowTemp = low[j];
       }
   }
   outData << "Highest Temperature for the day: " << highTemp << " F" << endl;
   outData << "Lowest Temperature for the day: " << lowTemp << " F" << endl;

   outData << "Histogram of High Temperature:" << endl << "Vertical Axis: Range of Temperatures" << endl << "Horizontal Axis: Number of Temperatures in that range" << endl;

   for(int j = 0; j < i; j++)
   {
       if(high[j] < 0)
           histogram[0]++;
       else if(high[j] > 0 && high[j] <= 9)
           histogram[1]++;
       else if(high[j] > 9 && high[j] <= 19)
           histogram[2]++;
       else if(high[j] > 19 && high[j] <= 29)
           histogram[3]++;
       else if(high[j] > 29 && high[j] <= 39)
           histogram[4]++;
       else if(high[j] > 39 && high[j] <= 49)
           histogram[5]++;
       else if(high[j] > 49 && high[j] <= 59)
           histogram[6]++;
       else if(high[j] > 59 && high[j] <= 69)
           histogram[7]++;
       else if(high[j] > 69 && high[j] <= 79)
           histogram[8]++;
       else if(high[j] > 79 && high[j] <= 89)
           histogram[9]++;
       else if(high[j] > 89 && high[j] <= 99)
           histogram[10]++;
       else if(high[j] > 99)
           histogram[11]++;

   }

   for(int j = 0; j < 12; j++)
   {

       if(j != 11)
       {
           outData << ranges[j];
           for(int s = 0; s < histogram[j]; s++)
               outData << "*";
       }
       else
       {
           outData << ranges[j];
           for(int s = 0; s < histogram[11]; s++)
               outData << "*";
       }
       outData << endl;
   }
   return 0;
}
