#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct Student {
    string name;
    int score;
    char grade;
};

int main() {
    int n;
    cout << "How many students?: ";
    cin >> n;

    vector<Student> students;
    for (int i = 0; i < n; i++) {
        Student s;
        cout << "Enter name: ";
        cin >> s.name;

        cout << "Enter score: ";

        cin >> s.score;
        if (s.score > 100 || s.score < 0) {
            cout << "Please enter a valid score (0-100)." << endl;
            continue;
        }
        
        if (s.score >= 90) {
            s.grade = 'A';
        } else if (s.score >= 80) {
            s.grade = 'B';
        } else if (s.score >= 70) {
            s.grade = 'C';
        } else if (s.score >= 60) {
            s.grade = 'D';
        } else {
            s.grade = 'F';
        }
        
        students.push_back(s);
    }
    for (int i = 0; i < n; i++) {
        cout << "Name: " << students[i].name << " " << endl << "Score: " << students[i].score << endl <<  "Grade: " << students[i].grade << endl;
    }
}
