# Challenge 01: Even or Odd Analyzer

**Difficulty:** 🟢 Easy  
**Category:** Input/Output & Basic Math

## 🧠 Objective
Understand basic input/output and conditional logic using the modulus operator.

## 📝 Problem Description
Write a C++ program that takes an integer input and checks whether it is even or odd.

## 📥 Input Format
- A single integer.

## 📤 Output Format
- Print either `Even` or `Odd` based on the input.

## 🛠️ Things You Can Use
- `int` variables
- `%` modulus operator
- `if`, `else` statements
- `cin`, `cout` for input/output

## 🧪 Example Test Cases
- **Input:** `4`  
  **Output:** `Even`
- **Input:** `7`  
  **Output:** `Odd`
- **Input:** `0`  
  **Output:** `Even`

<details>
<summary><h2> 💡 Extra Hint </h2></summary>

You can use the modulus operator `%` to find the remainder when a number is divided by `2`.
- If a number `% 2 equals 0`, then it's `even`.
- If a number `% 2 equals 1`, then it's `odd`.

### For example:
```cpp
4 % 2 = 0 → Even  
7 % 2 = 1 → Odd
```

<details>
<summary><h3>🔎 Bonus Tip: </h3></summary>
Even 0 is considered an even number, because `0 % 2 == 0`.
</details>
</details>