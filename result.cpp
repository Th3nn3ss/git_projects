#include <iostream>
#include <string>
#include <map>
#include <iterator>
using namespace std;


string grading(int s) {
    // This is a function that detamines the grade
    string grade;
    if (s > 69) grade = "A";
    else if ( s > 59) grade = "B";
    else if ( s > 49) grade = "c";
    else if ( s > 44) grade = "D";
    else grade = "F";

    return grade;
    }


int main() {
    double numb_of_courses, total_credit = 0.0;
    double gpa = 0.0;
    double score;
    double credit_load;
    double total_gp = 0.0;
    double gp = 0.0;
    double total_gpa = 0.0;
    int answer;
    int counter = 1;
    // Empty map container
    map<string, string> result_sheet;
    string department_name, student_name, course_code;

    
    cout << "Enter Your Department name: ";
    getline(cin, department_name);
    cout << "Enter Your Name: ";
    getline(cin, student_name);
    jump:
    cout << "Enter the Number of Courses offered in the session: " << endl;
    cin >> numb_of_courses;

    for(int i = 1; i <= numb_of_courses; i = i + 1){
        cout << "Enter the Number Of Units for course number " << i << endl;
        cin >> credit_load;
        cout << "Enter Course code: ";
        cin >> course_code;
        cout << "Enter Your score in the course: " << endl;
        cin >> score;
        total_credit = total_credit + credit_load;
        if (grading(score) == "A")  gpa = credit_load * 5;
        else if(grading(score) == "B") gpa = credit_load * 4;
        else if(grading(score) == "C") gpa = credit_load * 3;
        else if(grading(score) == "D") gpa = credit_load * 2;
        else gpa = credit_load * 0;

        cout << "Your Grade for " << course_code << " is: " << grading(score) << endl;
        result_sheet.insert(pair<string, string> (course_code, grading(score)));

        total_gp = total_gp + gpa;
    }
    gp = total_gp / total_credit;
    // print out the map for result_sheet
    map<string, string>:: iterator itr;
    cout << "\nThe Result Sheet for this session is: \n";
    cout << "\tCourse\tGrade\n";
    for (itr = result_sheet.begin(); itr != result_sheet.end(); ++itr)
    {
        cout << '\t' << itr->first << '\t' << itr->second << '\n';
    }
    cout << endl;
    cout << "Your GP for that session is: " << gp << endl;
    cout << " \n\n";
    total_gpa = total_gpa + gp;

    cout << "Enter (1) to Enter for another session or any other number to end the program.";
    cin >> answer;
    if (answer == 1) counter = counter + 1;
    if (answer == 1) goto jump;   
    else {
        cout << "\n\n";
        cout << "The student " << student_name << " of the department of " << department_name << " has a Final GP of " << total_gpa / counter << endl;

    }


    return 0;
}