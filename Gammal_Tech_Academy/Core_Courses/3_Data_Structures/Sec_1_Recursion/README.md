## Section 1: Recursion ..

---

**Recursion** is a concept in programming where a function calls itself directly or indirectly to solve a problem by breaking it down into smaller subproblems of the same type. Recursion is commonly used to solve problems that can be divided into similar parts, such as traversing tree structures, solving sorting and searching problems, and mathematical problems like calculating factorials or Fibonacci sequences.

### 🔹 Components of Recursion:

For a recursive function to work correctly and avoid infinite loops, it must include:

1. **Base Case**: The condition that stops the recursion and prevents infinite calls.
2. **Recursive Case**: The part where the function calls itself with a smaller input until it reaches the base case.

### 🔹 Example: Factorial Calculation

Factorial is the product of all numbers from `1` to `n`, represented as:  
📌 `n! = n × (n-1)!`  
With the condition that `0! = 1`.

#### 🔹 C++ Code:

```cpp
#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) // Base case
        return 1;
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}
```

🔹 **How the code works for `n = 5`**:

```
factorial(5) → 5 * factorial(4)
factorial(4) → 4 * factorial(3)
factorial(3) → 3 * factorial(2)
factorial(2) → 2 * factorial(1)
factorial(1) → 1 * factorial(0)
factorial(0) → 1  (Base case)
```

Then, the values return back up to compute the final result.

### 🔹 Another Example: Fibonacci Sequence

The Fibonacci sequence is defined as:  
📌 `F(n) = F(n-1) + F(n-2)`  
With initial values: `F(0) = 0` and `F(1) = 1`.

#### 🔹 C++ Code:

```cpp
#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0; // Base case 1
    if (n == 1) return 1; // Base case 2
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int num = 6;
    cout << "Fibonacci of " << num << " is " << fibonacci(num) << endl;
    return 0;
}
```

### 🔹 Advantages and Disadvantages of Recursion:

✅ **Advantages**:

- Reduces code complexity and makes it more readable for recursive problems.
- Efficiently handles **tree structures** and **graph traversal**.

❌ **Disadvantages**:

- May consume **extra memory** due to repeated function calls (Stack Overflow if the base case is not well-defined).
- In some cases, **iteration** (loops) is more efficient than recursion.

### 🔹 When to Use Recursion?

- When dealing with problems that can be **divided into smaller subproblems**.
- When working with **tree structures** or **graphs**.
- When needing **clearer and more readable code**, even if it's less efficient than iteration.

#### (ChatGPT)

---
