# Input & Output in C++ (`std::cout` & `std::cin`)
### by Mohammad Tanvir | 🚀 Powered by Dark Script Studio

---

## What is `std::cout`?

- `std::cout` (Console Output) is used to **print messages or values** to the screen.
- It stands for **"character output"**.
- Comes from the `iostream` library.

### Syntax:

```cpp
std::cout << "Your message here";
```
### Use << to send multiple things:
```cpp
std::cout << "My name is " << "Tanvir" << endl;
```
> 🔹 endl moves the output to a new line.
---

## 🎤 What is std::cin?
- `std::cin` (Console Input) is used to take input from the user.
- It stands for "character input".

### Syntax:
```cpp
std::cin >> variable;
```
### You can use multiple inputs:
```cpp
int a, b;
std::cin >> a >> b;
```
> 🔹 Input is typed by the user during program execution.

---

## Basic Output Formatting

- `\n` = New line

- `\t` = Tab space

- `endl` = Line break (like pressing Enter)

### Example:
```cpp
cout << "Hello\nWorld!" << endl;
cout << "A\tB\tC";
```

### Full Example Code
```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    cout << "\n Hello, " << name << "!" << endl;
    cout << "You are " << age << " years old." << endl;

    return 0;
} 
```

### Sample Output
```bash
Enter your name: Tanvir
Enter your age: 18

Hello, Tanvir!
You are 18 years old.
```
> ✅ Note: cin >> name only takes one word. For full name input, use getline(cin, name); instead.

## Real Life Analogy
- `cout` = Talking to someone
- `cin` = Listening to their reply

 Just like filling a form:
- `cin` is you typing in the form
- `cout` is the system showing messages

---

## Beginner Task

### Task:
- Create a C++ program that asks the user for:
- Their name (use `getline`) 
- Their favorite color
- Their favorite number
Note : Just a heads up: use `getline` to grab the whole line of text with spaces. 
```cpp
string name;

getline(cin, name);
```

### Then display a formatted message like this:
```bash
Hello, Mohammad Tanvir!
Your favorite color is Blue.
Your favorite number is 7.
```

---

## 💬 Final Words from Mohammad Tanvir

> “Every time you use cin and cout, you're making your program more alive and interactive.”
Keep practicing, and soon you’ll be building fully interactive apps with Dark Script Studio!

---

### Stay tuned for the next lesson: [Operators in C++](./oporetors.md)
### Previous lesson: [Learn Variables and Data Types](./variables-and-data-types.md)