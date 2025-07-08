## More Learning ..

---

## ✅ First: What are **Literals**?

**Literals** are **constant values** that are written directly in the code. They represent fixed values like numbers, characters, strings, and boolean values.

### Types of Literals:

| Type               | Example            | Explanation                                                                |
| ------------------ | ------------------ | -------------------------------------------------------------------------- |
| **Integer**        | `42`, `-7`, `0xFF` | Whole numbers, can be decimal, binary (0b), octal (0), or hexadecimal (0x) |
| **Floating Point** | `3.14`, `-0.01`    | Numbers with decimal points                                                |
| **Character**      | `'A'`, `'0'`       | A single character enclosed in single quotes                               |
| **String**         | `"Hello"`          | A sequence of characters in double quotes                                  |
| **Boolean**        | `true`, `false`    | Logical values                                                             |
| **Null Pointer**   | `nullptr`          | Indicates a null or empty pointer (since C++11)                            |

## ✅ Second: What are **Escape Sequences**?

**Escape Sequences** are special symbols that start with a **backslash (`\`)**, used to represent **special characters** within strings or character literals.

### Common Escape Sequences in C++:

| Escape Sequence | Description           | Effect in Output                          |
| --------------- | --------------------- | ----------------------------------------- |
| `\n`            | New line              | Moves the cursor to a new line            |
| `\t`            | Horizontal tab        | Adds a tab space                          |
| `\\`            | Backslash             | Prints a backslash `\`                    |
| `\"`            | Double quotation mark | Prints a double quote `"`                 |
| `\'`            | Single quotation mark | Prints a single quote `'`                 |
| `\a`            | System bell           | Plays a sound (if supported)              |
| `\b`            | Backspace             | Deletes the previous character (visually) |
| `\r`            | Carriage return       | Moves cursor to the start of the line     |
| `\0`            | Null terminator       | Ends a C-style string                     |

### Practical Example:

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello\tWorld!\n";
    cout << "Quote: \"C++ is powerful\"\n";
    cout << "Backslash: \\\n";
    cout << "Bell: \a\n";
    return 0;
}
```

## 📌 Important Notes:

- You cannot include a character like `"` in a string directly without escaping it; you must use `\"`.
- `'\n'` is a **single character**, even though it's written with two symbols.
- Some escape sequences like `\a` or `\b` may not work in all environments or may not be visually noticeable.

#### (ChatGPT)

---
