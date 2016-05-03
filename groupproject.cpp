// This program creates and saves a statistics report 
// for the test scores of an unspecified amount of students.
#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
using namespace std;

// Function prototypes
double total(int, int, double []);
double average(int, int, double []);
double standardDeviation(int, int, double [], double, double);
double highest(int, int, double []);
double lowest(int, int, double []);
void saveToFile(int, int, double [], double, double, double, double);


// CHERI- Obtain test scores.
int main()
{
// Setting up array to store test scores.
	int students;
	
	cout << "Enter the number of students: ";
	cin >> students;
	
// Creating array.
	double scores[students];
	
// Other variables.
	int count;
	double sum; // Holds the sum of the scores in the array.
	double avg; // Holds the average of the scores.
	double stdv; // Holds the standard deviation of the scores.
	double hs; // Holds the highest score.
	double ls; // Holds the lowest score.
	
	// Getting test scores.
	for (count = 0; count < students; count++)
	{
		cout << "Enter the score earned by student "
				<< (count + 1) << ": ";
		cin >> scores[count];
	}
	
	// Displaying the scores.
	cout << "The scores you entered are: " << endl;
	for (count = 0; count < students; count++)
	{
		cout << "Student " << (count + 1) << ": ";
		cout << scores[count] << endl;
	}
	cout << endl;

  // Running other functions.
	sum = total(count, students, scores);
	
  avg = average(count, students, scores);

  stdv = standardDeviation(count, students, scores, sum, avg);

  hs = highest(count, students, scores);
	
ls = lowest(count, students, scores);

  saveToFile(students, count, scores, avg, stdv, hs, ls);

  // Done.
  return 0;
}


// AHMED- Get the average of the test scores.
double total (int count, int students, double scores[])
{
	double sum = 0 ;   //initialize the accumulator to 0

for (count = 0; count < students; count++)
	sum += scores[count];


cout <<"The sum of the scores are: "<<sum<<endl;
	
return sum;
}


// Needs a TUPLE
double average(int count, int students, double scores[])
{
double sum = 0 ;   //initialize the accumulator to 0

for (count = 0; count < students; count++)
	sum += scores[count];

cout <<"The average of the scores are: "<<sum/students<<endl;
	
return sum/students;
}


// SUI- Display the standard deviation of the test scores.
double standardDeviation(int count, int students, double scores[], double sum, double avg)
{
	sum+=(scores[count]-avg)*(scores[count]-avg);
cout << "The standard deviation is: " << sqrt(sum/students) << endl; 
	return sqrt(sum/students);
}


//ATTIAH- Display the statistics of the scores.
double highest(int count, int students, double scores[])
{
double highest = 0.0;
	
	highest = scores[0];
	
	for (count = 0; count < students; count++) 
	{
		if (highest < scores[count])
			highest = scores[count];
	}
	
	cout << "Highest score: " << highest << endl;
	
	return highest;
}


double lowest(int count, int students, double scores[])
{
double lowest = 0.0;
	
	
	lowest = scores[0];
	
	for (count = 0; count < students; count++) 
	{
		if (lowest > scores[count])
			lowest = scores[count];
	}
	
	cout << "Lowest score: " << lowest << endl;
	
	return lowest;
}


// JOSHUA- Save data to a file.
void saveToFile(int students, int count, double scores [], double avg, double stdv, double hs, double ls)
{
    ofstream outputFile;


// Saves data to a file.
outputFile.open("Report.txt");

cout << "Saving Report to file." << endl;
outputFile << "CLASS GRADE REPORT" << endl <<endl;
 
outputFile << "Number of students entered: " <<students << endl <<endl;
outputFile << "The scores you entered are: " << endl;
	for (count = 0; count < students; count++)
	{
		outputFile << "Student " << (count + 1) << ": ";
		outputFile << scores[count] << endl;
	}
	outputFile << endl;

 outputFile << "Average:" << avg << endl;
 outputFile << "Standard Deviation: " << stdv << endl;
 
outputFile << "Highest Score: " << hs << endl;
outputFile << "Lowest Score: " << ls;


outputFile.close();
}

