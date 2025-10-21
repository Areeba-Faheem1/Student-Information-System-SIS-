**Student Information System (SIS) – C++ OOP Learning Project**

This project is a simple yet effective C++ implementation of a Student Information System (SIS) designed to demonstrate fundamental Object-Oriented Programming (OOP) concepts for beginners. It models a real-world entity—`Student`—using a well-structured class that encapsulates data and behavior.

The `Student` class includes four private member variables: `name` (string), `age` (int), `rollNo` (int), and `gpa` (float), ensuring data is hidden from direct external access. Public getter and setter methods provide controlled interaction with this data, illustrating the principle of **encapsulation**. The class features two constructors: a default constructor that initializes attributes to sensible defaults, and a parameterized constructor with default arguments—showcasing **constructor overloading** and flexibility in object creation. A destructor is also implemented to display a cleanup message when an object goes out of scope.

Additional methods include `displayInfo()`, which prints student details in a clean, readable format, and `calculateGrade()`, which converts GPA into a letter grade (A–F). This method exemplifies **abstraction**, as the internal grading logic is hidden from the user.

The code is organized into three standard files:  
- `Student.h`: Class declaration  
- `Student.cpp`: Method definitions  
- `main.cpp`: Driver code that creates three student objects using different constructors and demonstrates all core functionalities  

The project avoids advanced features like `const` correctness and `<iomanip>` formatting to keep the code accessible for learners. It compiles cleanly with standard C++ compilers (e.g., `g++ main.cpp Student.cpp -o sis`) and runs on all major platforms.

Ideal for students new to C++ and OOP, this prototype reinforces key concepts—encapsulation, abstraction, constructors, destructors, and modular design—while solving a practical problem: managing student records efficiently. Use it as a foundation to explore inheritance, polymorphism, or file-based persistence in future enhancements.
