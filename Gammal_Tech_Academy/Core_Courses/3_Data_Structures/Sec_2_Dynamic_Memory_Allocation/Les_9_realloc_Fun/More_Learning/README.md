# More Learning ..

**INFO 1: "realloc() function"**

"The `realloc()` function in the C++ programming language is used to resize (or reallocate) the memory space that was previously allocated using a function such as `malloc` or `calloc`. `realloc()` can be used to dynamically change the size of the allocated space to be larger or smaller.

The basic syntax for the `realloc()` function is as follows:

```cpp
#include <cstdlib>

// Resize (reallocate) a previously allocated memory space
void* realloc(void* pointer, size_t size);
```

Where:
- `pointer`: A pointer to the beginning that points to the allocated space you want to resize.
- `size`: The new size you want to allocate for the space.

`realloc()` returns a pointer to the beginning of the resized space. Programmers should store the returned pointer value from `realloc()` as it may differ from the original pointer if the space is moved to another location in memory.

Here is an example of how to use `realloc`:

```cpp
#include <iostream>
#include <cstdlib>

int main() {
    // Allocate memory for an array of 5 integers
    int *arr = (int*)malloc(5 * sizeof(int));

    if (arr != nullptr) {
        // Use the array as needed

        // Resize the space to accommodate 10 integers
        int *newArr = (int*)realloc(arr, 10 * sizeof(int));

        if (newArr != nullptr) {
            // Use the new array

            // Don't forget to free the memory when done using it
            free(newArr);
        } else {
            // Failed to reallocate memory
            // We can retain the original space here or handle it differently
        }
    } else {
        // Failed to allocate memory
    }

    return 0;
}
```

`realloc()` can be used to resize previously allocated memory space, whether to increase or decrease the size, as needed by the program." **(ChatGPT)**

---

**INFO 2: "realloc() function"**

"In the C++ programming language, the `realloc()` function is a dynamic memory reallocation function. It is used to change the size of the memory block that was previously allocated using `malloc()`, `calloc()`, or `realloc()`.

**Syntax of the realloc() function:**

```c++
void* realloc(void* ptr, size_t new_size);
```

where:

* `ptr` is a pointer to the memory block that needs to be reallocated.
* `new_size` is the new size of the memory block in bytes.

**Return value of the realloc() function:**

* If the reallocation is successful, `realloc()` returns a pointer to the newly reallocated memory block.
* If the reallocation is not successful, `realloc()` returns a null pointer.

**Examples of using the realloc() function:**

```c++
int* numbers = (int*) malloc(10 * sizeof(int));
// ... Use the array numbers ...
numbers = (int*) realloc(numbers, 20 * sizeof(int));
```

The previous code allocates memory for 10 integer elements, uses it to store some data, and then reallocates the memory to 20 elements.

**When to use the realloc() function:**

The `realloc()` function is useful for dynamically resizing memory blocks as needed. For example, it can be used to increase the size of an array when it becomes full.

**Here are some important things to keep in mind when using the realloc() function:**

* The `ptr` parameter must point to a valid memory block that was previously allocated using `malloc()`, `calloc()`, or `realloc()`.
* The `new_size` parameter must be larger than or equal to the original size of the memory block.
* The contents of the memory block are preserved up to the lesser of the old and new sizes. If the new size is larger than the old size, the newly allocated memory is uninitialized.

**In conclusion, the `realloc()` function is a versatile tool for dynamic memory management in C++. It allows you to resize memory blocks as needed without having to allocate new memory and copy the contents.**" **(Goggle Bard)**

---
