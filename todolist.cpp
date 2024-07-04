#include <iostream>
#include <vector>
#include <string>
using namespace std;

class task {
public:
    string desc;
    bool status;
    task( string &d) : desc(d), status(false) {}
};

class list {
private:
    vector<task>tasks;

public:
    void add(string &abttask) {
        tasks.emplace_back(abttask);
        cout << "Task added: " << abttask<< endl;
    }

  void view(){
        if (tasks.empty()) {
            cout << "No tasks left" << endl;
        } else {
            cout << "list:" << endl;
            for (size_t i = 0; i < tasks.size(); ++i) {
                cout << i + 1 << ") " << tasks[i].desc << (tasks[i].status ? " Done" : " Not Done")  << endl;
            }
        }
    }

    void setdone(size_t k) {
        if (k < 1 || k > tasks.size()) {
            cout << "Invalid task no." << endl;
        } else {
            tasks[k - 1].status = true;
            cout << "Task set as done: " << tasks[k - 1].desc << endl;
        }
    }

    void del(size_t l) {
        if (l < 1 || l > tasks.size()) {
            cout << "Invalid task no." << endl;
        } else {
            cout << "Task deleted: " << tasks[l - 1].desc << endl;
            tasks.erase(tasks.begin() +l - 1);
        }
    }
};

int main() {
    list todo;
    int c;
    string taskname;
    size_t taskno;

    do {
        cout << "\n********To-Do List Manager******" << endl;
        cout << "1)Add task" << endl;
        cout << "2)View tasks" << endl;
        cout << "3)Set as Done" << endl;
        cout << "4)Delete task" << endl;
        cout << "5)Exit" << endl;
        cout << "Enter your choice: ";
        cin >> c;
        switch (c) {
            case 1:
                cout << "Enter task Name ";
                cin>>taskname;
                todo.add(taskname);
                break;
            case 2:
                todo.view();
                break;
            case 3:
               cout << "Enter task no. to set done: ";
                cin >> taskno;
                todo.setdone(taskno);
                break;
            case 4:
                cout << "Enter task no. to delete: ";
                cin >> taskno;
                todo.del(taskno);
                break;
            case 5:
                cout << "Exited" << endl;
                break;
            default:
                cout << "Invalid choice" << endl;
        }
    } while (c!= 5);

    return 0;
}