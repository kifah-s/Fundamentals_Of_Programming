## Section 2: Dynamic Memory Allocation ..

---

### **🔹 Concept of Dynamic Memory Allocation**

**Dynamic Memory Allocation** is a technique for reserving (allocating) memory during **program execution (runtime)** instead of **at compile-time**. This approach is used when the required memory size is unknown in advance, making the program more **flexible** and efficient in memory usage.

### **🔹 Difference Between Static and Dynamic Memory Allocation**

| **Static Memory Allocation**                                  | **Dynamic Memory Allocation**                                             |
| ------------------------------------------------------------- | ------------------------------------------------------------------------- |
| Memory is allocated at **compile-time**.                      | Memory is allocated at **runtime**.                                       |
| The size is **fixed** and cannot be changed during execution. | The size is **flexible** and can be modified during execution.            |
| Stored in **stack memory**.                                   | Stored in **heap memory**.                                                |
| Less complex but **wastes memory if not fully utilized**.     | More efficient in memory management but requires **manual deallocation**. |

### **🔹 Dynamic Memory Allocation Functions in C++**

In **C++**, dynamic memory is allocated using **pointers** with the `new` and `delete` keywords.

#### 📌 **Allocating a Single Variable Dynamically**

```cpp
#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;  // Allocating a single variable in the heap
    *ptr = 10;  // Storing a value in the allocated memory

    cout << "Value: " << *ptr << endl;  // Printing the value

    delete ptr;  // Freeing the memory
    return 0;
}
```

#### 📌 **Allocating an Array Dynamically**

```cpp
#include <iostream>
using namespace std;

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int* arr = new int[size];  // Allocating an array dynamically

    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
    }

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;  // Freeing the entire array
    return 0;
}
```

🔹 **Important Notes**:

1. Always use **`delete`** or **`delete[]`** to free memory after use; otherwise, a **memory leak** will occur.
2. Using **smart pointers (`unique_ptr`, `shared_ptr`)** in **modern C++** makes memory management safer.

### **🔹 Using `malloc()` and `free()` in C**

In **C**, memory is allocated using `malloc()` and freed using `free()`, as shown in the example below:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*) malloc(sizeof(int));  // Allocating a single variable
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    *ptr = 42;
    printf("Value: %d\n", *ptr);

    free(ptr);  // Freeing the memory
    return 0;
}
```

In **C++**, it is preferable to use `new` and `delete` instead of `malloc()` and `free()`.

### **🔹 Issues with Dynamic Memory Allocation**

❌ **Memory Leak**: Occurs when memory is allocated but never freed.  
❌ **Dangling Pointer**: Happens when trying to access memory that has already been freed.  
❌ **Memory Fragmentation**: Repeated allocation and deallocation may cause fragmented memory, making it harder to reuse.

### **🔹 When to Use Dynamic Memory Allocation?**

✅ When dealing with **variable-sized data structures** (e.g., linked lists).  
✅ When **array size is unknown** at compile-time.  
✅ When working with **large objects** that need to be stored in the heap instead of the stack.

### **🔹 Summary**

- **Static Memory Allocation** occurs at **compile-time**, while **Dynamic Memory Allocation** happens at **runtime**.
- In **C++**, `new` and `delete` are used for memory allocation and deallocation.
- In **C**, `malloc()` and `free()` are used.
- **Freeing memory is crucial** to prevent memory leaks and improve program performance.

#### (ChatGPT)
