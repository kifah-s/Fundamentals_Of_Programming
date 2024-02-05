# More Learning ..

**INFO 1: "Double Circular Linked List"**

"In a Double Circular Linked List, the link in the last node points to the first node, and likewise, the link in the first node points to the last node, forming a closed loop in both directions. This means that traversal in the list is easily possible in both forward and backward directions.

Let's review the `Node` structure to represent a node in the Double Circular Linked List:

```cpp
struct Node {
    int data;
    Node* next;
    Node* prev;  // Link to the previous node

    // Constructor
    Node(int val) : data(val), next(nullptr), prev(nullptr) {}
};
```

Here's how a Double Circular Linked List might look:

```cpp
Node* first = new Node(1);
Node* second = new Node(2);
Node* third = new Node(3);

// Linking the three nodes together to form a closed loop
first->next = second;
second->prev = first;

second->next = third;
third->prev = second;

third->next = first;  // The link in the last node points to the first node
first->prev = third;
```

In this example, the link in the last node (`third->next`) points to the first node (`first`), and the link in the first node (`first->prev`) points to the last node (`third`).

In a Double Circular Linked List, accessing the two previous and next nodes is easily possible, and navigation in both directions is straightforward without the need to search for the end of the list.

This type of list can be useful in practical applications that require periodic traversal in both directions within the list." **(ChatGPT)**

---

**INFO 2: "Double Circular Linked List"**

"**A doubly circular linked list is a type of linked list where each node points to the next and previous nodes, and the last node forms a loop with the first node.**

**Here is an example of a doubly circular linked list:**

```
head -> 1 -> 2 -> 3 -> head
```

**In this example:**

* **head:** Is the first node in the list, and it is also the last node.
* **1, 2, 3:** Are the nodes in the middle of the list.

**Here's how a doubly circular linked list works:**

* **Inserting an element:**

  * **Create a new node.**
  * **Set the "next" pointer of the new node to the node that follows it in the list.**
  * **Set the "previous" pointer of the new node to the node that precedes it in the list.**
  * **Update the "next" pointer of the previous node to point to the new node.**
  * **Update the "previous" pointer of the next node to point to the new node.**

* **Deleting an element:**

  * **Update the "next" pointer of the previous node to point to the node after the node being deleted.**
  * **Update the "previous" pointer of the next node to point to the node before the node being deleted.**
  * **Update the "previous" pointer of the last node to point to the node before the node being deleted.**
  * **Update the "next" pointer of the first node to point to the node after the node being deleted.**
  * **Delete the node.**

**Advantages of using a doubly circular linked list:**

* **Does not require a sentinel node:** A doubly circular linked list does not need a special sentinel node.
* **Any element in the list can be accessed from any other element:** You can access any element in the list from any other element in the list.
* **The list can be traversed in both directions:** You can traverse the list in both clockwise and counterclockwise directions.

**Disadvantages of using a doubly circular linked list:**

* **More complex than singly linked lists:** Doubly circular linked lists require more memory and code to implement.

**Ultimately, the choice of a doubly circular linked list depends on the needs of the application.** If the application requires access to any element in the list from any other element and traversal of the list in both directions, then a doubly circular linked list is a good option." **(Google Bard)**

---
