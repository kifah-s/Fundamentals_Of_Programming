# More Learning ..

---

In **C++**, there are several **basic types of linked lists**, and each type is used depending on the requirements. The main types are:

### ✅ 1. **Singly Linked List**

Each node contains:

- A value (`data`)
- A pointer to the next node (`next`)

#### 🔹 Example:

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printList(Node* head) {
    while (head != nullptr) {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* head = new Node{1, nullptr};
    head->next = new Node{2, nullptr};
    head->next->next = new Node{3, nullptr};

    printList(head);
    return 0;
}
```

🟢 **Output**: `1 -> 2 -> 3 -> NULL`

### ✅ 2. **Doubly Linked List**

Each node contains:

- A value (`data`)
- A pointer to the next node (`next`)
- A pointer to the previous node (`prev`)

#### 🔹 Example:

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* prev;
    Node* next;
};

void printListForward(Node* head) {
    while (head != nullptr) {
        cout << head->data << " <-> ";
        head = head->next;
    }
    cout << "NULL\n";
}

int main() {
    Node* first = new Node{1, nullptr, nullptr};
    Node* second = new Node{2, first, nullptr};
    Node* third = new Node{3, second, nullptr};
    first->next = second;
    second->next = third;

    printListForward(first);
    return 0;
}
```

🟢 **Output**: `1 <-> 2 <-> 3 <-> NULL`

### ✅ 3. **Circular Linked List**

This is similar to **singly** or **doubly linked list**, but the last node points back to the first node instead of `nullptr`.

#### 🔹 Example (Singly Circular):

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printCircularList(Node* head) {
    Node* temp = head;
    if (head != nullptr) {
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
    }
    cout << "(back to head)\n";
}

int main() {
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};

    head->next = second;
    second->next = third;
    third->next = head;  // creates the circular link

    printCircularList(head);
    return 0;
}
```

🟢 **Output**: `1 -> 2 -> 3 -> (back to head)`

#### (ChatGPT)

---

In the C++ programming language, **Linked Lists** are dynamic data structures used to store data sequentially, consisting of **nodes** where each node contains data and a pointer to the next node (or the previous node in some cases). There are three main types of linked lists:

### 1. **Singly Linked List**:

- **Description**: Each node contains data and a pointer to the next node only. Traversal is in one direction (from head to tail).
- **Example**:

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class SinglyLinkedList {
    Node* head;
public:
    SinglyLinkedList() : head(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    SinglyLinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.display(); // Output: 1 -> 2 -> 3 -> nullptr
    return 0;
}
```

### 2. **Doubly Linked List**:

- **Description**: Each node contains data, a pointer to the next node, and a pointer to the previous node. Allows traversal in both directions.
- **Example**:

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
    Node* head;
public:
    DoublyLinkedList() : head(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->prev = temp;
        }
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " <-> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
};

int main() {
    DoublyLinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.display(); // Output: 1 <-> 2 <-> 3 <-> nullptr
    return 0;
}
```

### 3. **Circular Linked List**:

- **Description**: Can be singly or doubly linked, but the last node is connected to the first node, forming a circle. There is no clear beginning or end.
- **Example** (for a singly circular linked list):

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class CircularLinkedList {
    Node* head;
public:
    CircularLinkedList() : head(nullptr) {}

    void insert(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            head->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    void display() {
        if (!head) return;
        Node* temp = head;
        do {
            cout << temp->data << " -> ";
            temp = temp->next;
        } while (temp != head);
        cout << "(back to head)" << endl;
    }
};

int main() {
    CircularLinkedList list;
    list.insert(1);
    list.insert(2);
    list.insert(3);
    list.display(); // Output: 1 -> 2 -> 3 -> (back to head)
    return 0;
}
```

### Summary:

1. **Singly**: One pointer (next), one direction.
2. **Doubly**: Two pointers (next and previous), two directions.
3. **Circular**: Connected in a circle, no end.

Each type is used based on the application's needs, such as speed, memory, or traversal method.

#### (Grok)

---

In the C++ programming language, there are several basic types of **Linked Lists**, which are:

### 1. **Singly Linked List**

- Each node contains a **value** and a **pointer** to the **next node** only.
- Example:
  ```cpp
  struct Node {
      int data;
      Node* next;
  };
  ```

### 2. **Doubly Linked List**

- Each node contains a **value**, a pointer to the **next node**, and a pointer to the **previous node**.
- Example:
  ```cpp
  struct Node {
      int data;
      Node* next;
      Node* prev;
  };
  ```

### 3. **Circular Linked List**

- Similar to a **Singly Linked List**, but the **last node points back to the first node** (no `NULL` at the end).
- Example:
  ```cpp
  struct Node {
      int data;
      Node* next;
  };
  // The last node points back to the Head
  ```

### 4. **Doubly Circular Linked List**

- A combination of **Doubly** and **Circular** Linked Lists, where each node has two pointers (`next` and `prev`), and the last node points to the first, and vice versa.
- Example:
  ```cpp
  struct Node {
      int data;
      Node* next;
      Node* prev;
  };
  // Last node → points to the first, and first node ← points to the last
  ```

### Full Example of a **Singly Linked List** in C++:

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void printList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node{1, nullptr};
    Node* second = new Node{2, nullptr};
    Node* third = new Node{3, nullptr};

    head->next = second;
    second->next = third;

    printList(head); // Output: 1 -> 2 -> 3 -> NULL

    delete head;
    delete second;
    delete third;

    return 0;
}
```

#### Notes:

- **Singly Linked List** is faster for insertion/deletion at the beginning.
- **Doubly Linked List** allows easier backward/forward traversal but uses more memory.
- **Circular Linked List** is useful in applications like scheduling.
- **Doubly Circular Linked List** is used in structures like **Deque**.

#### (DeepSeek)

---

In the C++ programming language, there are three basic types of **Linked Lists**:

1. **Singly Linked List:**  
   Each node contains two parts:

   - Data value.
   - Pointer to the next node.

   **Example:**

   ```cpp
   #include <iostream>
   using namespace std;

   struct Node {
       int data;
       Node* next;
   };

   void printList(Node* n) {
       while (n != nullptr) {
           cout << n->data << " ";
           n = n->next;
       }
   }

   int main() {
       Node* head = new Node();
       Node* second = new Node();
       Node* third = new Node();

       head->data = 1; head->next = second;
       second->data = 2; second->next = third;
       third->data = 3; third->next = nullptr;

       printList(head);
       return 0;
   }
   ```

   **Output:**

   ```
   1 2 3
   ```

2. **Doubly Linked List:**  
   Each node contains three parts:

   - Data value.
   - Pointer to the previous node.
   - Pointer to the next node.

   **Example:**

   ```cpp
   #include <iostream>
   using namespace std;

   struct Node {
       int data;
       Node* prev;
       Node* next;
   };

   void printList(Node* n) {
       while (n != nullptr) {
           cout << n->data << " ";
           n = n->next;
       }
   }

   int main() {
       Node* head = new Node();
       Node* second = new Node();
       Node* third = new Node();

       head->data = 1; head->prev = nullptr; head->next = second;
       second->data = 2; second->prev = head; second->next = third;
       third->data = 3; third->prev = second; third->next = nullptr;

       printList(head);
       return 0;
   }
   ```

   **Output:**

   ```
   1 2 3
   ```

3. **Circular Linked List:**  
   The last node points back to the first node, forming a circle.

   - Can be singly or doubly linked.

   **Example:**

   ```cpp
   #include <iostream>
   using namespace std;

   struct Node {
       int data;
       Node* next;
   };

   void printList(Node* head) {
       Node* temp = head;
       if (head != nullptr) {
           do {
               cout << temp->data << " ";
               temp = temp->next;
           } while (temp != head);
       }
   }

   int main() {
       Node* head = new Node();
       Node* second = new Node();
       Node* third = new Node();

       head->data = 1; head->next = second;
       second->data = 2; second->next = third;
       third->data = 3; third->next = head;

       printList(head);
       return 0;
   }
   ```

   **Output:**

   ```
   1 2 3
   ```

Each type of Linked List is used based on the requirements of the application or system. Let me know if you'd like further details! 😊

#### (Copilot)

---
