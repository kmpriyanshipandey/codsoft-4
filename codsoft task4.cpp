#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> tasks;

void showTasks() {
    if (tasks.empty()) {
        cout << "No tasks available." << endl;
        return;
    }
    cout << "To-Do List:" << endl;
    for (size_t i = 0; i < tasks.size(); i++) {
        cout << i + 1 << ". " << tasks[i] << endl;
    }
}

void addTask() {
    string task;
    cout << "Enter task: ";
    cin.ignore();
    getline(cin, task);
    tasks.push_back(task);
    cout << "Task added successfully!" << endl;
}

void removeTask() {
    showTasks();
    if (tasks.empty()) return;
    int taskNumber;
    cout << "Enter task number to remove: ";
    cin >> taskNumber;
    if (taskNumber > 0 && taskNumber <= tasks.size()) {
        tasks.erase(tasks.begin() + taskNumber - 1);
        cout << "Task removed successfully!" << endl;
    } else {
        cout << "Invalid task number." << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "\nTo-Do List Manager\n";
        cout << "1. Show Tasks\n2. Add Task\n3. Remove Task\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: showTasks(); break;
            case 2: addTask(); break;
            case 3: removeTask(); break;
            case 4: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice, try again." << endl;
        }
    } while (choice != 4);

    return 0;
}

            
        

   
   
   

    
