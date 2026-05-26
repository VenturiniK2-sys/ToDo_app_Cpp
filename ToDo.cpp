#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Struct to represent a Task
struct Task
{
    string name;
    bool completed;
};

// Global vector to store tasks
vector<Task> tasks;

void createTask(string name)
{
    Task newTask;
    newTask.name = name;
    newTask.completed = false;

    tasks.push_back(newTask);
}

void deleteTask(string name)
{
    for (int i = 0; i < tasks.size(); i++)
    {
        if (tasks[i].name == name)
        {
            tasks.erase(tasks.begin() + i);
            cout << "Task removed!" << endl;
            return;
        }
    }
    cout << "Task not found!" << endl;
    cout << endl;
}

void listTasks()
{
    for (int i = 0; i < tasks.size(); i++)
    {
        if (tasks[i].completed)
        {
            cout << "[X]";
        }
        else
        {
            cout << "[ ]";
        }
        cout << tasks[i].name << endl;
    }
    cout << endl;
    cout << "Press enter to continue";
    cout << endl;
}

void completeTask(string name)
{
    for (int i = 0; i < tasks.size(); i++)
    {
        if (tasks[i].name == name)
        {
            tasks[i].completed = true;
            cout << "Task completed!" << endl;
            return;
        }
    }
    cout << "Task not found!" << endl;
}

int main()
{
    int choice; // variable to store user choice

    do
    {
        // Main menu

        cout << "[1] Create new task" << endl;
        cout << "[2] Delete task" << endl;
        cout << "[3] List tasks" << endl;
        cout << "[4] Mark task as completed" << endl;
        cout << "[5] Exit" << endl;

        cout << endl;
        cout << "Choose a option: ";
        cin >> choice;
        cout << endl;

        switch (choice)
        {
        case 1:
        {
            string name;
            cout << "Enter task name: ";
            getline(cin >> ws, name);
            createTask(name);
            system("cls");
            break;
        }
        case 2:
        {
            string name;
            cout << "Enter task name: ";
            getline(cin >> ws, name);
            deleteTask(name);
            break;
        }
        case 3:
        {
            listTasks();
            cin.ignore();
            cin.get();
            break;
        }
        case 4:
        {
            string name;
            cout << "Enter task name: ";
            getline(cin >> ws, name);
            completeTask(name);
            break;
        }
        default:
        {
            cout << "Insert a valid option" << endl;
            cout << endl;
        }
        }

    } while (choice != 5);

    return 0;
}