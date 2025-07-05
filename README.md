# Employee Payroll System

A simple, console-based application written in C++ to manage basic employee payroll functions. This project allows users to register employees, calculate salaries, view company-wide payroll, and perform other administrative tasks through an interactive command-line interface.

## 🚀 Features

* **Employee Registration:** Add new employees with their ID, name, hours worked, and hourly rate.
* **Individual Salary Calculation:** Compute and display the total salary for each employee based on their hours worked and rate.
* **Company Payroll Calculation:** Calculate the total payroll cost for the entire company.
* **Salary Analytics:** Instantly find and display the employees with the highest and lowest salaries.
* **Data Updates:** Modify an existing employee's hours worked and hourly rate using their ID.
* **View All Employees:** Display a comprehensive list of all registered employees and their details.
* **Interactive Menu:** A user-friendly, menu-driven interface for easy navigation.

## 🛠️ Technologies Used

* **C++:** The core programming language used for the application logic.
* **Standard Libraries:** `iostream` for input/output and `string` for text manipulation.
* **Windows-specific Libraries:** `windows.h` and `conio.h` are used for console-specific features like `Sleep()` and `getch()`.

## ⚙️ How to Compile and Run

This program is designed for a Windows environment due to its use of specific Windows libraries.

### Prerequisites

* A C++ compiler that supports C++11 or later (like MinGW g++ or the Visual Studio C++ compiler).

### Compilation Steps

1.  **Open a terminal or command prompt.**
2.  **Navigate to the directory** where you have saved the `Employee Payroll System (PF Project).cpp` file.
3.  **Compile the code** using your C++ compiler. For example, with g++:
    ```sh
    g++ "Employee Payroll System (PF Project).cpp" -o PayrollSystem.exe
    ```
4.  **Run the executable** file that was generated:
    ```sh
    .\PayrollSystem.exe
    ```

## 🕹️ How to Use

Once the application is running, you will be presented with a main menu.

1.  Enter the number corresponding to the action you wish to perform.
2.  Follow the on-screen prompts to enter employee details or view information.
3.  After each operation, you will be returned to the main menu to select another action.
4.  Choose the "Exit" option to close the application.

---

*This project was created as a demonstration of fundamental programming concepts in C++.*
