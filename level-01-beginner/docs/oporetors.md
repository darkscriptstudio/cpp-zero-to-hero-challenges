# C++ Operators Explained  
### by Mohammad Tanvir | Powered by 🔥 Dark Script Studio

---

## 1. Arithmetic Operators

| Operator | Meaning        | Example        | Output |
|----------|----------------|----------------|--------|
| `+`      | Addition       | `5 + 3`        | `8`    |
| `-`      | Subtraction    | `10 - 6`       | `4`    |
| `*`      | Multiplication | `4 * 2`        | `8`    |
| `/`      | Division       | `8 / 2`        | `4`    |
| `%`      | Modulus        | `7 % 3`        | `1`    |

### Example uses:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;
    cout << "a + b = " << a + b << endl;
    cout << "a - b = " << a - b << endl;
    cout << "a * b = " << a * b << endl;
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    return 0;
}
```

### Output:
```bash
a + b = 13
a - b = 7
a * b = 30
a / b = 3.33333333
a % b = 1
```
---

## 2. Relational (Comparison) Operators

Used to compare values. Always returns `true` (`1`) or `false` (`0`).

| Operator | Meaning	         | Example | Result |
|--------- |---------------------|---------|--------|
| ==	   | Equal to	         | 5 == 5  | true   |
| !=	   | Not equal to	     | 3 != 4  | true   |
| <	       | Less than	         | 2 < 5   | true   |
| >	       | Greater than	     | 6 > 2   | true   |
| <=	   | Less than or equal	 | 5 <= 5  | true   |
| >=	   | Greater or equal	 | 3 >= 4  | false  |

```cpp
int x = 5, y = 10;
cout << (x < y) << endl;    // Outputs 1 (true)
cout << (x == y) << endl;   // Outputs 0 (false)
```

---

## 3. Logical Operators

Used to combine conditions.

| Operator | Name |	Meaning                 |
|----------|------|-------------------------|
| &&	   | AND  |	True if both are true   |
| ||	   | OR   | True if one are true    |
| !	       | NOT  |	Inverts the condition   |

```
int age = 20;
bool hasID = true;

if (age >= 18 && hasID) { // check age is getter then or equal 18 and hasId = true
    cout << "You are allowed!" << endl;
}
```

> Note: You will only understand the operator `if` condition is taught to you in the next lesson. 

---

## Real Life Example

### Traffic Light:
- greenLight `==` `true` `&&` roadClear `==` `true` → GO
- greenLight `==` `false` `||` roadBlocked `==` `true` → STOP


### Just like in code:
```cpp
if (greenLight && !roadBlocked) { // check greenLight == True and not roadBlocked (not false)
    cout << "Drive forward." << endl; // If both condition are true show "Drive forward"
} 
```

## Final Words from Mohammad Tanvir

> “Operators are the tools that help you make decisions, perform calculations, and control your program’s logic.”
Master these, and you’re well on your way to building intelligent programs with Dark Script Studio.

Stay sharp, think logically, and code like a villain! 😎

---

## Interactive Practice Challenges:
<details>
<summary>[Basic Io and oporetor](../challenges/stage-01/basic-i-o-operators/README.md)</summary>  
- [01. Sum of two numbers](../challenges/stage-01/basic-i-o-operators/01-sum-of-two-numbers/README.md)
- [02. Simple Calculator](../challenges/stage-01/basic-i-o-operators/02-simple-calculator/README.md)

</details>

### Next Lesson: [Learn Control Structures (if-else, switch)](./control-structures.md)
### Previous Lesson: [Learn Input/Output](./input-output.md)