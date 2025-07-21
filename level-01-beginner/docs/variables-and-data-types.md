# 📚 Understanding Variables in C++  
### by [Mohammad Tanvir](https://github.com/villainXtanvir) | Powered by 🚀 [Dark Script Studio](https://github.com/orgs/darkscriptstudio)

---

## 🧠 What are Variables?

Variables are like **containers** that store data in your program.  
You give them a **name**, and they hold a **value** that you can change or use later.

> Think of a variable as a **labeled jar**:  
> You can store sugar in one, water in another — and take it out whenever needed.

---

## 🏷️ Types of Variables in C++

Here are the most common variable types every beginner must know:

| Type         | Example Value       | Purpose                                  |
|--------------|---------------------|------------------------------------------|
| `int`        | 5, -100, 2025        | Whole numbers                            |
| `float`      | 3.14, -0.01          | Decimal numbers (less precision)         |
| `double`     | 3.1415926535         | Decimal numbers (more precision)         |
| `char`       | 'A', 'z', '7'        | Single character (in single quotes)      |
| `bool`       | true, false          | True or false (Yes or No)                |
| `std::string`| "Hello", "Dark Script"| Sequence of characters (words/sentences) |

---

## 🔍 Variable Declaration Syntax

```cpp
data_type variable_name = value;

Example:

int age = 18;
float price = 9.99;
char grade = 'A';
bool isOnline = true;
std::string name = "Tanvir";
```

--- 

### 🔧 Full Example Program
```cpp
#include <iostream>
#include <string>         // Required for std::string

using namespace std;

int main() {
    int age = 18;
    float temperature = 36.5;
    double pi = 3.1415926535;
    char grade = 'A';
    bool isStudent = true;
    string name = "Mohammad Tanvir";

    cout << "Hello from " << name << "!" << endl;
    cout << "Age: " << age << endl;
    cout << "Body Temperature: " << temperature << "°C" << endl;
    cout << "Value of PI: " << pi << endl;
    cout << "Grade: " << grade << endl;
    cout << "Are you a student? " << (isStudent ? "Yes" : "No") << endl;

    return 0;
}
```

### 📤 Output
```bash
Hello from Mohammad Tanvir!
Age: 18
Body Temperature: 36.5°C
Value of PI: 3.1415926535
Grade: A
Are you a student? Yes
```
---

## 🔗 Real Life Analogy

- 🛒 Think of variables like different types of containers in a grocery store:

- `int` jar = whole apples 🍎

- `float` bottle = half-filled milk 🥛

- `char` box = a label like 'A'

- `bool` switch = ON or OFF

- `string` bag = a sentence written on a note 📝

---

## 🎯 Beginner Task

### Task:
- Write a C++ program that stores and prints the following information:

- Your name

- Your favorite number (as `int`)

- Your current body temperature (as `float`)

- A single grade character

- Whether you're a programmer (`true` or `false`)

- A short message using string


### Sample Output:
```bash
Name: Mohammad Tanvir
Favorite Number: 99
Temperature: 36.6
Grade: A
Are you a programmer? Yes
Message: Keep coding with Dark Script Studio!
```

---

## 💬 Final Note from [Mohammad Tanvir](https://github.com/villainXtanvir)

> “Every variable you write is a step closer to mastering the world of programming.”
Start simple, stay consistent, and you'll soon create wonders.



Stay tuned for more learning with [Dark Script Studio](https://github.com/orgs/darkscriptstudio)! 🚀 

---

### Next lesson: [Learn Input/output](./input-output.md)
### Previous lesson: [Learn C++ basic](./basic.md)