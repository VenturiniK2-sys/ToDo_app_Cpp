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
        cout << "Create new task - 1" << endl;
        cout << "Delete task - 2" << endl;
        cout << "List tasks - 3" << endl;
        cout << "Mark task as completed - 4" << endl;
        cout << "Exit - 5" << endl;

        cout << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            string name;
            cout << "Enter task name: ";
            getline(cin >> ws, name);
            createTask(name);
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
        }

    } while (choice != 5);

    return 0;
}