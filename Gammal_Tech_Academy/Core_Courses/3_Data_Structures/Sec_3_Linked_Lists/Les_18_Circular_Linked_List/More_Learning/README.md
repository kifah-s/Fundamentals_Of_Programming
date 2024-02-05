# More Learning ..

**INFO 1: "Circular Linked List"**

"In a Circular Linked List, the link in the last node points back to the first node, forming a closed loop. This means that the list doesn't end with another node; instead, the last node points to the first one, creating an infinite cycle. This allows continuous traversal through the list without reaching an end.

Let's assume we have a `Node` structure to represent a node in the Circular Linked List:

```cpp
struct Node {
    int data;
    Node* next;

    // Constructor
    Node(int val) : data(val), next(nullptr) {}
};
```

Here's how a Circular Linked List might look:

```cpp
Node* first = new Node(1);
Node* second = new Node(2);
Node* third = new Node(3);

// Linking the three nodes together to form a circular cycle
first->next = second;
second->next = third;
third->next = first;  // The link in the last node points back to the first node
```

In this example, the link in the last node (`third->next`) points to the first node (`first`).

In a Circular Linked List, we can start from any node and continuously move to the next node without needing to search for the end of the list because the last node always points back to the first node.

This can be useful in applications that require continuous cycling, such as organizing data in circular tables or infinite lists." **(ChatGPT)**

---

**INFO 2: "Circular Linked List"**

"**A circular linked list is a type of linked list where the last node points to the first node.** This means that the list forms a loop.

**Here is an example of a circular linked list:**

```
head -> 1 -> 2 -> 3 -> head
```

**In this example:**

* **head:** Is the first node in the list, and it is also the last node.
* **1, 2, 3:** Are the nodes in the middle of the list.

**Here's how a circular linked list works:**

* **Inserting an element:**

  * **Create a new node.**
  * **Set the "next" pointer of the new node to the node that follows it in the list.**
  * **Set the "next" pointer of the last node in the list to point to the new node.**

* **Deleting an element:**

  * **Update the "next" pointer of the previous node to point to the node after the node being deleted.**
  * **Update the "next" pointer of the last node in the list to point to the node before the node being deleted.**
  * **Delete the node.**

**Advantages of using a circular linked list:**

* **Does not require a sentinel node:** A circular linked list does not need a special sentinel node.
* **Any element in the list can be accessed from any other element:** You can access any element in the list from any other element in the list.

**Disadvantages of using a circular linked list:**

* **More complex than singly linked lists:** Circular linked lists require more memory and code to implement.

**Ultimately, the choice of a circular linked list depends on the needs of the application.** If the application requires access to any element in the list from any other element, then a circular linked list is a good option." **(Google Bard)**

---
