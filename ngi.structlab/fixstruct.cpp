// Nia
//cs1300 s20
// struct practice
// Oct 30

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

ifstream inFile;
ofstream outFile;

struct student
  {
        int ID;
        string fName;
        string lName;
  };
const int MAX = 5;

//void function to read data into the struct
void readData(student list[]);
//void function that writes data to both the screen and the output file
void printData(student list[]);

int main()
   {
        //code to open inFile and use struct.txt
        inFile.open("struct.txt");
        //code to open outFile with an appropriate name
        outFile.open("ngiout.txt");
        student list[MAX];
        //struct test

        inFile >> list[0].ID >> list[0].fName >> list[0].lName;
        cout << list[0].ID << " " << list[0].lName << "  " << list[0].fName << endl;
        // call to void function to read in data
        readData(list);
        // call to void function to output data
        printData(list);

        inFile.close();
        outFile.close();


    return 0;
   }

// function definition to read in data
void readData(student list[])
{
  for(int i= 1; i < MAX; i++)
    inFile >> list[i].ID >> list[i].fName >> list[i].lName;
}

// function definition to output data
void printData(student list[])
{
  for(int i= 1; i < MAX; i++)
  {
    outFile << list[i].ID << " " << list[i].lName << "  " << list[i].fName << endl;
    cout << list[i].ID << " " << list[i].lName << "  " << list[i].fName << endl;
  }
}