# More Learning ..

**INFO 1: "Double Linked List"**

"**A double linked list is a type of linked list where each node contains two pointers:**

* **Next pointer:** Points to the next node in the list.
* **Previous pointer:** Points to the previous node in the list.

**This structure allows for additional features:**

* **Access elements in both directions:** You can access the next and previous elements in the list.
* **Efficient insertion and deletion of elements:** Elements can be inserted and deleted anywhere in the list without having to rearrange the other elements.

**Here is an example of a double linked list:**

```
head -> 1 -> 2 -> 3 -> tail
```

**In this example:**

* **head:** Is the first node in the list.
* **tail:** Is the last node in the list.
* **1, 2, 3:** Are the nodes in the middle of the list.

**Here's how a double linked list works:**

* **Inserting an element:**

  * **Create a new node.**
  * **Set the "next" pointer of the new node to the node that follows it in the list.**
  * **Set the "previous" pointer of the new node to the node that precedes it in the list.**
  * **Update the "next" pointer of the previous node to point to the new node.**
  * **Update the "previous" pointer of the next node to point to the new node.**

* **Deleting an element:**

  * **Update the "next" pointer of the previous node to point to the node after the node being deleted.**
  * **Update the "previous" pointer of the next node to point to the node before the node being deleted.**
  * **Delete the node.**

**Advantages of using a double linked list:**

* **Access elements in both directions:** You can access the next and previous elements in the list.
* **Efficient insertion and deletion of elements:** Elements can be inserted and deleted anywhere in the list without having to rearrange the other elements.

**Disadvantages of using a double linked list:**

* **More complex than singly linked lists:** Double linked lists require more memory and code to implement.

**Ultimately, the choice of a double linked list depends on the needs of the application.** If the application requires access to elements in both directions and efficient insertion and deletion of elements, then a double linked list is a good option." **(Google Bard)**

---
