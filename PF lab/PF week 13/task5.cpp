#include<iostream>
#include<fstream>
#include<string>
using namespace std;

void getStudentDetails(string names[], int adNumbers[], float percentages[], int &count);
void saveToFile(string names[], int adNumbers[], float percentages[], int count);

main()
{
    string names[100];
    int adNumbers[100];
    float percentages[100];
    int count = 0;
    getStudentDetails(names, adNumbers, percentages, count);
    saveToFile(names, adNumbers, percentages, count);
}

void getStudentDetails(string names[], int adNumbers[], float percentages[], int &count)
{
    string choice;
    string adnum;
    string per;
    fstream file;
    file.open("Task5.txt", ios::in);

    for (int i = 0; !file.eof(); i++)
    {
        getline(file, names[i]);
        getline(file, adnum);
        adNumbers[i]= stoi(adnum);
        getline(file, per);
        percentages[i]= stof(per);
        count++;
    }

    file.close();
}
void saveToFile(string names[], int adNumbers[], float percentages[], int count)
{
    fstream file2;
    file2.open("Task5topperstudents.txt", ios::out);

    for (int i = 0; i < count; i++)
    {
    	if(percentages[i]>70)
    	{
        file2 << "Name: ";
        file2 << names[i];
        file2 << '\n';
        file2 << "Admission Number: ";
        file2 << adNumbers[i];
        file2 << '\n';
        file2 << "Percentage: ";
        file2 << percentages[i];
        file2 << '\n';
        file2 << '\n';
    }
    }

    file2.close();
}

