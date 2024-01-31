# More Learning ..

**INFO 1: "Static Memory Allocation VS Dynamic Memory Allocation"**

"**Static Memory Allocation:**
   - **Memory Size Determined at Compilation Time:** Memory is allocated during the compilation process.
   - **Variables Remain Fixed in Size:** The size of variables is determined statically before the program runs and cannot be changed during program execution.
   - **Immutable Variables (const):** Memory can be allocated for constant variables using `const`.

   ```cpp
   int main() {
       // Static memory allocation
       int staticArray[5]; // Memory size determined at compilation time
       const int constVar = 10; // Immutable variable
       return 0;
   }
   ```

**Dynamic Memory Allocation:**
   - **Memory Size Determined at Runtime:** Memory is allocated during program execution using functions like `malloc` or `new`.
   - **Variable Size Can Change:** The size of variables can be changed during program execution using `realloc` in C and `resize` in C++, or by using `new` to create dynamic arrays.
   - **Manual Memory Management Required:** Programmers need to manually manage memory and free it when done using functions like `free` in C or `delete` in C++.

   ```cpp
   int main() {
       // Dynamic memory allocation
       int *dynamicArray = new int[5]; // Memory size determined at runtime
       int *resizedArray = new int[10]; // Changing array size
       delete[] dynamicArray; // Freeing memory after use
       delete[] resizedArray;
       return 0;
   }
   ```

**Appropriate Use:**
   - Static memory allocation is preferred when the size of data is fixed and known before the program runs.
   - Dynamic memory allocation is preferred when the size of data is unknown at compilation time or subject to change during program execution." **(ChatGPT)**

---

**INFO 2: "Static Memory Allocation VS Dynamic Memory Allocation"**

"**The main difference between static memory allocation and dynamic memory allocation is the time at which the memory is allocated. Static memory is allocated at compile time, while dynamic memory is allocated at runtime.**

**Static memory allocation**

In static memory allocation, the memory is allocated at compile time. The size of the memory to be allocated is determined during the writing of the program, and the memory is allocated in the main memory.

Static memory allocation can be used when the size of the memory required is known in advance. For example, static memory allocation can be used to allocate memory for arrays or structures.

**Advantages of static memory allocation:**

* Static memory allocation can be used to improve performance, as the memory is allocated at compile time.
* Static memory allocation can be used to improve stability, as the memory is allocated in the main memory.

**Disadvantages of static memory allocation:**

* Static memory allocation can be inflexible, as the size of the memory required must be determined in advance.
* Static memory allocation can be inefficient, as more memory space may be allocated than is actually needed.

**Dynamic memory allocation**

In dynamic memory allocation, the memory is allocated at runtime. The size of the memory to be allocated is determined during runtime, and the memory is allocated in the heap memory.

Dynamic memory allocation can be used when the size of the memory required is not known in advance. For example, dynamic memory allocation can be used to allocate memory for data elements that are created dynamically.

**Advantages of dynamic memory allocation:**

* Dynamic memory allocation can be used to improve flexibility, as the memory can be allocated in any size as needed.
* Dynamic memory allocation can be used to improve efficiency, as the exact memory space is allocated as needed.

**Disadvantages of dynamic memory allocation:**

* Dynamic memory allocation can be unsafe, as the programmer must deallocate the allocated memory after use.
* Dynamic memory allocation can be inefficient, as more memory space may be allocated than is actually needed.

**Summary**

The difference between static memory allocation and dynamic memory allocation can be summarized in the following points:

| Property | Static memory allocation | Dynamic memory allocation |
|---|---|---|
| Allocation time | Compile time | Runtime |
| Allocation location | Main memory | Heap memory |
| Flexibility | Inflexible | Flexible |
| Stability | Safe | Unsafe |
| Efficiency | Inefficient | Efficient |

**When choosing the appropriate type of memory allocation, the following factors should be considered:**

* Size of memory required
* Allocation time
* Allocation location
* Flexibility
* Stability
* Efficiency." **(Google Bard)**

---
