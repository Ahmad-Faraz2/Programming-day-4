#include <iostream>
using namespace std;
void printMenu() 
 {
    cout << "UNIVERSITY ADMISSION MANAGEMENT SYSTEM" << endl;
    cout << "1. Calculate Aggregate" << endl;
    cout << "2. Compare Marks" << endl;
 }

void calculateAggregate(string name, float matric_Marks, float inter_Marks, float ecat_Marks)
 {
    float aggregate = ((matric_Marks/1100)*0.3) + ((inter_Marks/560)*0.3) + ((ecat_Marks/400)*0.4);
    cout << "Aggregate of " << name << ": " << aggregate << endl;
 }

void compareMarks(string nameStd1, int ecatMarksStd1, string nameStd2, int ecatMarksStd2)
 {
    if(ecatMarksStd1 > ecatMarksStd2) {
        cout << nameStd1 << " has higher marks.Roll no.1 is assigned to Std1" << endl;
 }  
	 if(ecatMarksStd1 < ecatMarksStd2){
         cout << nameStd2 << " has higher marks.Roll no.1 i assigned to Std2" << endl;
 }
 }

int main() {
    printMenu();
    int option;
    cin >> option;

	if(option == 1) 
 {
        string name;
        float matric_Marks, inter_Marks, ecat_Marks;

        cout << "Enter name: ";
        cin >> name;

        cout << "Enter matric marks: ";
        cin >> matric_Marks;

        cout << "Enter inter marks: ";
        cin >> inter_Marks;

        cout << "Enter ecat marks: ";
        cin >> ecat_Marks;

        calculateAggregate(name, matric_Marks, inter_Marks, ecat_Marks);
 }
        if(option == 2) 
 {
        string nameStd1, nameStd2;
        int ecatMarksStd1, ecatMarksStd2;

        cout << "Enter name of student 1: ";
        cin >> nameStd1;

        cout << "Enter ecat marks of student 1: ";
        cin >> ecatMarksStd1;

        cout << "Enter name of student 2: ";
        cin >> nameStd2;

        cout << "Enter ecat marks of student 2: ";
        cin >> ecatMarksStd2;

        compareMarks(nameStd1, ecatMarksStd1, nameStd2, ecatMarksStd2);
 } 
    
}


