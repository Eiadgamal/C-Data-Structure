# Data Structures with C++

This folder contains implementations and examples of various fundamental data structures using the C++ programming language. Each data structure is designed to provide a clear and practical understanding of its concepts, features, and operations. The implementations utilize Object-Oriented Programming (OOP) principles for better modularity and reusability.

## Table of Contents

1. [Array](#array)
2. [Linked List](#linked-list)
3. [Queue](#queue)
4. [Stack](#stack)
5. [Binary Search Tree](#binary-search-tree)

---

### Array

An **array** is a collection of elements stored in contiguous memory locations. It provides fast access to elements using their index.

#### Features:
- Fixed size.
- Random access in O(1) time.
- Inefficient insertion and deletion (O(n) in the worst case).

#### Implementations:
- Basic array operations (fill, display, get size, get length, search, append, enlarge, merge, insert, and delete).
- Dynamic array (resizable array).

**Files:**
- `Array.cpp`
- `main.cpp`
- `Array.h`

---

### Linked List

A **linked list** is a linear data structure where each element (node) contains a data part and a pointer to the next node.

#### Features:
- Dynamic size.
- Efficient insertion and deletion.
- Sequential access (O(n) for traversal).

#### Variants:
- Singly Linked List (insert first, insert before, append, and delete).

**Files:**
- `Linked_List.cpp`
- `main.cpp`
- `Linked_List.h`

---

### Queue

A **queue** is a linear data structure that follows the First In, First Out (FIFO) principle.

#### Features:
- Elements are added at the rear and removed from the front.
- Efficient for scenarios requiring ordered processing.

#### Variants:
- Simple Queue (enqueue, dequeue, get front, get back, and clear).

**Files:**
- `Queue.cpp`
- `main.cpp`
- `Queue.h`

---

### Stack

A **stack** is a linear data structure that follows the Last In, First Out (LIFO) principle.

#### Features:
- Elements are added and removed only from the top of the stack.
- Efficient for recursive function calls, backtracking, and undo mechanisms.
- Operations: push, pop, peek, and is full.

**Files:**
- `Stack.cpp`
- `main.cpp`
- `Stack.h`

---

### Binary Search Tree

A **binary search tree (BST)** is a hierarchical data structure in which each node has at most two children (left and right). The left subtree contains nodes with values less than the parent, and the right subtree contains nodes with values greater than the parent.

#### Features:
- Efficient searching, insertion, and deletion (O(log n) in average case).
- Sorted traversal (in-order traversal).

#### Operations:
- Insert, delete, find max, and find min.
- Traversals (in-order, pre-order, post-order).

**Files:**
- `BST.cpp`
- `main.cpp`
- `BST.h`

---

## How to Use

1. Clone the repository:
   ```bash
   git clone <repository-url>
   ```

2. Navigate to the desired data structure folder and compile the C++ files using a compiler like `g++`.
   ```bash
   g++ -o output_file example_file.cpp
   ./output_file
   ```

## Contributing

Contributions are welcome! If you have suggestions for improvement or want to add more data structures, feel free to open a pull request.

## License

This repository is licensed under the MIT License. See the `LICENSE` file for more details.


