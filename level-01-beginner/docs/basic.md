# 📘 Structure of a C++ Program  
### by Mohammad Tanvir | Powered by ⚡ Dark Script Studio

Understanding the basic structure of a C++ program is the first step toward becoming a successful programmer.

---

## 🧱 Basic Structure

Every C++ program follows a similar skeleton, no matter how simple or complex. Here's the basic structure:

```cpp
#include <iostream>  // Header file for input/output

using namespace std; // Using standard namespace

int main() {         // Main function where program starts
    // Code goes here
    return 0;
}
```

---

## 🔍 Let's Break It Down

1. `#include <iostream>`

- This is called a preprocessor directive.

- It tells the compiler to include the input/output stream library.

- Required for using `cout` (print) and `cin` (input).

> Think of this like importing tools to use in your project.


---

2. `using namespace std`;

- std stands for standard.

- Every function like `cout`, `cin`, etc. belongs to the `std namespace`.

- If we don’t write this, we must use `std::cout` and `std::cin`.


- So instead of writing:
```cpp
std::cout << "Hello";
```
- We write:
```cpp
cout << "Hello";
```
> ✅ Tip: For beginners, using namespace std; keeps your code clean and simple.




---
3. `int main()`

- Every C++ program must have a main function.

- It’s the starting point of the program.

- int means the function will return an integer (usually 0 at the end).



---

### ✏️ Full Example Code
```cpp
#include <iostream>      // Step 1: Include header

using namespace std;     // Step 2: Use standard namespace

int main() {             // Step 3: Main function starts
    cout << "Hello, World from Mohammad Tanvir!" << endl;
    return 0;            // Step 4: Return 0 to end program
}
```

---

### 📤 Output
```bash
Hello, World from Mohammad Tanvir!
```

---

## 🧠 Real Life Analogy

- Imagine writing a letter:

- `#include <iostream>` = bringing your pen and paper

- `using namespace std;` = choosing a writing style

- `main()` = writing the actual letter content

- `return 0;` = saying "I’m done writing"



---

## 🎯 Beginner Task

### ✅ Task:
Write a C++ program that prints your name and your favorite quote.

### 📝 Example Output:
```bash
My name is Mohammad Tanvir.
Code is like poetry – clean and meaningful.
```

---

## 💬 Final Thought

Learning the structure of a C++ program is like learning the grammar of a new language.
It may feel new, but with practice — you'll speak it fluently.

> “Start where you are. Use what you have. Do what you can.”

– From [**Mohammad Tanvir**](https://github.com/villainXtanvir) & [**Dark Script Studio**](https://github.com/orgs/darkscriptstudio) 🚀

### Stay tuned for the next lesson: [Learn Variables and Data Types](./variables-and-data-types.md) 
### Previous lesson: [Introduction to Programming](./README.md)