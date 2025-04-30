## Section 4: Memory Management and Error Handling ..

---

## 1. **Memory Management**

### What is it?

It refers to the **control of memory allocation and deallocation** that a program uses during execution.

### Why is it important?

- To avoid **memory leaks**
- To improve **program performance**
- To maintain **system stability**

### How is memory managed?

#### 1. **Static Memory Allocation**

- Memory is allocated during **compile time**.
- Example: defining a variable in C:
  ```c
  int x = 5;
  ```

#### 2. **Dynamic Memory Allocation**

- Memory is allocated during **runtime**.
- Example: using `malloc` or `new` in C/C++:
  ```c
  int* ptr = (int*) malloc(sizeof(int));
  ```

### In languages like Java and Python:

- There's something called a **Garbage Collector**: a tool that automatically frees unused memory without the programmer needing to do it manually.

## 2. **Error Handling**

### What is it?

It refers to the methods and techniques used by programmers **to handle errors that occur during program execution**, such as invalid input, network failures, or calculation errors.

### Types of errors:

1. **Syntax Errors**: Mistakes in code syntax, detected before the program runs.

   ```python
   print("Hello  # ← Missing closing quote
   ```

2. **Runtime Errors**: Errors that occur while the program is running.

   ```python
   x = 10 / 0  # Division by zero
   ```

3. **Logic Errors**: The code runs but produces incorrect results.

### How is error handling done?

#### In most programming languages:

You use **try-catch blocks (or try-except in Python)**:

##### Python:

```python
try:
    x = 10 / 0
except ZeroDivisionError:
    print("Cannot divide by zero!")
```

##### Java:

```java
try {
    int x = 10 / 0;
} catch (ArithmeticException e) {
    System.out.println("Error: " + e.getMessage());
}
```

### Goals of Error Handling:

- Prevent the program from crashing
- Display clear messages to the user
- Take automatic corrective actions when possible

## Summary:

| Concept           | Definition                    | Goal                                         |
| ----------------- | ----------------------------- | -------------------------------------------- |
| Memory Management | Organizing memory usage       | Improve performance and prevent memory leaks |
| Error Handling    | Detecting and handling errors | Avoid crashes and improve user experience    |

Would you like to see live examples in a specific language like Python or C++?

#### (ChatGPT)
