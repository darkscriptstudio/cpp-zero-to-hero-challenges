# 🌟 Programming Basics with [Mohammad Tanvir](https://github.com/villainXtanvir) – Powered by [Dark Script Studio](https://github.com/orgs/darkscriptstudio/)

Welcome to this beginner-friendly guide where we'll explore:

- ✅ What is Programming?
- ✅ What is C++?
- ✅ Why Should You Learn C++?
- ✅ How to Set Up C++ on Your Device

---

## 🧠 What is Programming?

**Programming** is the art of **telling a computer what to do** — step by step, just like giving instructions to a robot.

Imagine you have a robot at home, and you want it to make tea for you.  
You have to give it clear, simple instructions like:

1. Go to the kitchen  
2. Take a kettle  
3. Fill it with water  
4. Turn on the stove  
5. Boil the water  
6. Put a tea bag in a cup  
7. Pour hot water into the cup  
8. Add sugar  
9. Stir well  
10. Serve the tea  

➡️ These steps are a **program**.

🧠 So, programming is just like that — you write **step-by-step instructions** that a computer can follow.

---

## 💻 What is C++?

**C++** is one of the most powerful and widely used programming languages in the world.

It was created by **Bjarne Stroustrup** and is often used for:
- Game development 🎮  
- System software (like OS and drivers) ⚙️  
- High-performance apps (like 3D engines and trading systems) 🚀  
- Competitive programming and interviews 🎯

Think of C++ as the **Swiss Army Knife** of programming — fast, flexible, and built for serious performance.

---

## ❓ Why Should You Learn C++?

Here’s why I, **Mohammad Tanvir**, from **Dark Script Studio**, recommend learning C++:

### 🔥 1. Super Speed  
C++ is super fast because it’s close to the machine (hardware). Perfect for apps where speed matters!

### 🧠 2. Brain Booster  
It trains your logic and thinking. You’ll become a **problem-solving ninja**.

### 🛠 3. Real-World Use  
Many big tech companies still use C++ for core software (Google, Microsoft, etc.).

### 🕹 4. Game Development  
Most professional game engines (like Unreal Engine) use C++.

### 🎯 5. Strong Foundation  
If you learn C++, other languages like Python, Java, and JavaScript will feel much easier.

> 💬 **Motivational Note:**  
> "Programming is not just a skill, it's a superpower.  
> Every great app started with one line of code. Start yours today!"

---

## 🛠 How to Set Up C++ Environment (Windows & Android)

### ✅ Option 1: For Windows (PC or Laptop)

### 📥 Step 1: Download and Install a Compiler

You can use **MinGW** or **TDM-GCC** for Windows.

#### 🔗 Download MinGW:
[https://sourceforge.net/projects/mingw/](https://sourceforge.net/projects/mingw/)

> During installation, make sure to check:
> `mingw32-gcc-g++`

### 🧰 Step 2: Install a Code Editor

Choose any:
- **Code::Blocks** – Beginner-friendly
- **Visual Studio Code** – Lightweight and powerful
- **Dev-C++** – Simple and fast

### 🛣 Step 3: Add to Environment Variables

After installing MinGW, add its `bin` folder path (e.g., `C:\MinGW\bin`) to **System Environment Variables > Path**.

---

### ✅ Option 2: For Android (using Termux)

You can even code in C++ on Android using **Termux**!

#### 📲 Step-by-Step:

1. Install [**Termux** from F-Droid](https://f-droid.org/en/packages/com.termux/) 
2. Run these commands:

```bash
pkg update && pkg upgrade -y
pkg install clang
```
3. To compile a C++ file:
```bash
clang++ filename.cpp -o output
./output
```
> 🔥 That’s it! You're now coding C++ on your phone like a pro! 

#### 👨‍🏫 First Simple C++ Program
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello from Mohammad Tanvir and Dark Script Studio!" << endl;
    return 0;
}
```

#### ✅ How to Run:
- Save as `main.cpp`
- Compile with: `g++ main.cpp -o main` or `clang++ main.cpp -o main`
- Run with: `./main`



---

#### 🎯 Final Words from Tanvir

Programming is not just about typing code...
It's about building dreams, solving problems, and creating tools that can change the world.

> "Start small. Think big.
From hello world to building your own software empire — step by step, line by line."



Keep learning, keep coding.
From [Mohammad Tanvir](https://github.com/villainXtanvir) & the team at [Dark Script Studio](https://github.com/orgs/darkscriptstudio/) — Happy coding! 🚀

### Next Step : [Learn C++ Basics](./basic.md)