## Section 3: Linked Lists ..

---

## What is a Linked List?

A **Linked List** is a **data structure** used to store a collection of elements (such as numbers or objects), but it differs from arrays in how the data is stored.

In an array, elements are stored contiguously in memory. In a linked list, each element (called a **node**) contains:

1. **Data**: The value being stored.
2. **Pointer (or Reference)**: Points to the next node in the list.

### General structure:

```
[Data | Next] → [Data | Next] → [Data | Next] → NULL
```

## Why Use a Linked List?

- **More flexible than arrays**: You don't need to define its size in advance.
- **Easier insertion and deletion**: Especially at the beginning or middle of the list, compared to arrays where elements must be shifted.

## Types of Linked Lists

### 1. **Singly Linked List**

- Each node contains:
  - Data
  - A pointer to the **next node only**.
- Direction is one-way (left to right).
- The last node points to NULL.

```
[5 | •] → [10 | •] → [20 | NULL]
```

### 2. **Doubly Linked List**

- Each node contains:
  - Data
  - A pointer to the next node
  - A pointer to the previous node
- Allows **two-way traversal** (forward and backward).

```
NULL ← [5 | • | •] ⇄ [10 | • | •] ⇄ [20 | • | NULL]
```

### 3. **Circular Linked List**

#### - Singly Circular Linked List:

- Similar to the singly linked list but:
  - The last node points back to the **first node** instead of NULL.

```
[5 | •] → [10 | •] → [20 | ↘]
     ↑______________________|
```

#### - Doubly Circular Linked List:

- Similar to the doubly linked list but:
  - The last node points to the first node, and the first points back to the last.

```
[5] ⇄ [10] ⇄ [20]
 ↑             ↓
 ← ← ← ← ← ← ←
```

## Note:

Each type of linked list has its own use cases, depending on whether you need bidirectional navigation, performance, or a specific structure.

#### (ChatGPT)
