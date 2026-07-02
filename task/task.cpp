#include <iostream>
#include <string>
#include <vector>
#include <fstream>
using namespace std;

void saveTasks(vector<string> &tasks) {
    ofstream outFile("tasks.txt");
    for (int i = 0; i < tasks.size(); i++) {
        outFile << tasks[i] << endl;
    }
    outFile.close();
}
void loadTasks(vector<string> &tasks) {
    ifstream inFile("tasks.txt");
    string line;
    while (getline(inFile, line)) {
        tasks.push_back(line);
    }
    inFile.close();
}

int main() {
    int action;
    cout << "Enter an action(1: Add, 2: View, 3: Remove task, 4: Quit): ";
    cin >> action;
    cin.ignore();
    vector<string> tasks;
    string task;
    loadTasks(tasks);
    
    switch (action) {
        case 1:
            cout << "Enter a task: ";
            cin >> task;
            tasks.push_back(task);
            saveTasks(tasks);
            break;
        case 2:
            if (tasks.empty()) {
                cout << "No tasks yet!" << endl;
            } else {
                for (int i = 0; i < tasks.size(); i++) {
                    cout << (i + 1) << ". " << tasks[i] << endl;
                }
            }
            break;
        case 3:
            if (tasks.empty()) {
                cout << "There are no tasks!" << endl;
                break;
            }
            cout << "Enter task number: ";
            int num;
            cin >> num;
            if (num < 1 || num > tasks.size()) {
                cout << "Invalid task numbers." << endl;
            } else {
                tasks.erase(tasks.begin() + (num - 1));
                saveTasks(tasks);
                cout << "Task removed." << endl;
            }
            break;
        case 4:
            cout << "Quit";
            break;
        default:
            cout << "Invalid choice";
            break;
    }
}