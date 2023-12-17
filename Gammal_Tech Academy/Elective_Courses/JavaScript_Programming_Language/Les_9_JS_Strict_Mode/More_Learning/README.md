# More Learning ..

**INFO_1 : "Strict Mode"**

"**In the JavaScript programming language, Strict Mode is a mode that allows programmers to write more secure and stable code. Strict Mode allows the compiler to detect errors and prevent some unwanted behaviors.**

**Here are some of the changes that Strict Mode makes:**

- **It prevents the use of some functions and expressions that may be dangerous or unexpected.** For example, Strict Mode prevents the use of `eval()` and `with()`.
- **It enforces stricter rules on variable and function names.** For example, Strict Mode requires that variable and function names start with a letter or symbol.
- **It prevents some common errors, such as forgetting to return a value from a function.**

**To enable Strict Mode, you can use the `use strict` directive at the beginning of your code. For example:**

```js
use strict;

// ...
```

**You can also enable Strict Mode at the file level using the `strict` property in your `.eslintrc` file. For example:**

```json
{
  "extends": ["eslint:recommended"],
  "rules": {
    "strict": "error"
  }
}
```

**Here are some of the main advantages of using Strict Mode:**

- **It helps to detect errors and prevent unwanted behaviors.**
- **It makes code more secure and stable.**
- **It can help to reduce runtime errors.**

**Here are some of the main disadvantages of using Strict Mode:**

- **It may make code more difficult to read and understand.**
- **It may lead to errors if code is not written correctly.**

**In general, Strict Mode is a good choice for programmers who want to write more secure and stable code."** **(Google Bard)**

---

<br>

**INFO_2 : "Strict Mode"**

"Strict Mode in the JavaScript programming language is a feature used to enhance security and clean up code by enforcing stricter rules and detailed interpretation by the JavaScript engine. Strict mode can be activated either at the program level or within a program unit (function) by including `'use strict';` at the beginning of the program or function.

Here are some key benefits and impacts of using Strict Mode:

1. **Additional Error Notifications:**

   - Strict Mode helps detect common errors and issues warning messages to improve code quality.

2. **Strict Programming Enforcement:**

   - It imposes additional rules to make programming more rigorous, helping to avoid some common pitfalls.

3. **Avoidance of Some Dangerous Features:**

   - Some potentially hazardous features that may cause security or performance issues are disallowed or handled differently in Strict Mode.

4. **Restrictions on `eval` and `with` Usage:**

   - It prohibits the use of `eval` and `with`, two features considered unsafe and potentially problematic.

5. **Error Handling Improvement:**
   - Strict Mode makes common errors more strict and allows for better handling of these errors.

To enable Strict Mode, you can add the following line at the beginning of your program or within a function:

```javascript
"use strict";
```

If you're using it within a function, it looks like this:

```javascript
function myFunction() {
  "use strict";
  // Strict Mode is enabled within this function
}
```

Strict Mode helps enhance code quality and is considered a good practice in JavaScript programming." **(ChatGPT)**

---

<br>
