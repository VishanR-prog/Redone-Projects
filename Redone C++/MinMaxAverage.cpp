#include <iostream> 
#include <iomanip>

using namespace std;

int main () {
    //Initially, set min_grade to 101 - the highest value of grade
    //Initially, set max_grade to -1, the lowest value of grade
    double min_grade = 101;
    double max_grade = -1;

    double avg_grade = 0; 
    double grade = 0;
    // total_grades represent total number of entries by teacher
    int total_grades = 0; 

    //Iterate loop till entered value is -1
    while (grade!= -1) {
        // Ask to enter a grade
        cout << "Enter grade [1-100] or -1 to exit : " << endl;
        cin >> grade;
        // If grade is valid
        // Increment total_grades by 1
        //add grade to avg_grade
        //compare min and max and update value accodringly
        if (grade >= 0 && grade <= 100) {
            total_grades +=1;
            avg_grade += grade;
            
            if (min_grade > grade) {
                min_grade = grade;
            }
            if (max_grade < grade) {
                max_grade = grade; 
            }
        }
        // If grade is -1, print exit message
        else if(grade == -1) {
            cout << "EXIT!" << endl;
        } else {
            cout << "Invalid grade!!" << endl;
        }
    }
    // Calculate avg_grade by dividing it from total_grades
    avg_grade = avg_grade/total_grades;
    
    //Print results
    cout << "Minimum grade: " << fixed << setprecision(2) << min_grade << endl;
    cout << "Maximum grade: " << fixed << setprecision(2) << max_grade << endl;
    cout << "Average grade: " << fixed << setprecision(2) << avg_grade << endl;
    return 0; 
}