# Cpp_ToDo_app


A simple command-line To-Do List application written in C++. 

This project is part of my learning journey in C++. It features basic CRUD operations for managing daily tasks and is intended to be updated regularly as I improve my programming skills and knowledge of the language.

## Features
- **Add:** Create new tasks.
- **List:** View all current tasks with their completion status (`[ ]` for pending, `[X]` for completed).
- **Complete:** Mark a specific task as done.
- **Delete:** Remove tasks from the list.

## Getting Started
1. Clone this repository.
2. Compile the `ToDo.cpp` file using a C++ compiler (e.g., `g++ ToDo.cpp -o ToDo`).
3. Run the executable: `./ToDo` (or `ToDo.exe` on Windows).

## Current Limitations & Roadmap
As this is a study project, there are known limitations that I plan to address in future updates:

- [ ] (fixed) **Data Persistence:** Currently, tasks are lost when the program closes. I plan to implement file I/O to save/load tasks.
- [ ] **Unique IDs:** Tasks are currently identified by name, which causes issues with duplicate names. I will implement unique IDs for each task.
- [ ] (fixed) **Input Validation:** The program currently lacks robust input handling, which can lead to infinite loops if invalid data is entered.
- [ ] **Refactoring:** Improving code structure and modularity.

## Contributing
Since this is a personal project for learning purposes, contributions are not expected at this time, but feedback is always welcome!
