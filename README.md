# array-using-pointers-only-in-c

 C Pointer and Array Programs

## Overview

This repository contains C programs demonstrating the relationship between pointers and arrays. These programs help in understanding pointer arithmetic, array traversal using pointers, memory access, and basic data processing without array indexing.

The programs are useful for:

- Beginners learning pointers
- Embedded systems learners
- College laboratory exercises
- Coding interview preparation
- Understanding pointer arithmetic concepts

---

## Programs Included

### 1. Display Array Elements Using Pointers

This program prints array elements using pointer arithmetic instead of array indexing.

#### Output Example

```text
10 20 30 40 50
```

#### Concepts Used

- Arrays
- Pointers
- Pointer arithmetic
- Dereferencing

---

### 2. Sum of Array Elements Using Pointers

This program accepts 5 numbers and calculates their sum using pointer notation.

#### Output Example

```text
Enter 5 numbers:

10
20
30
40
50

Sum = 150
```

#### Concepts Used

- Pointer-based input
- Pointer arithmetic
- Array traversal
- Accumulation logic

---

### 3. Find Largest Element Using Pointers

This program finds the largest element in an array using pointer arithmetic.

#### Output Example

```text
Enter 5 numbers:

12
45
23
89
34

Largest = 89
```

#### Concepts Used

- Pointer traversal
- Comparison logic
- Maximum value search
- Dereferencing

---

### 4. Count Even Numbers Using Pointers

This program counts the number of even elements in an array.

#### Output Example

```text
Enter 5 numbers:

10
15
20
25
30

Even Count = 3
```

#### Concepts Used

- Pointer arithmetic
- Modulus operator
- Conditional statements
- Counting logic

---

### 5. Reverse Array Display Using Pointers

This program displays array elements in reverse order using a pointer.

#### Output Example

```text
Enter 5 numbers:

10
20
30
40
50

50 40 30 20 10
```

#### Concepts Used

- Reverse traversal
- Pointer decrement
- Array boundaries
- Pointer arithmetic

---

## Technologies Used

- C Programming Language
- GCC Compiler
- VS Code
- CodeBlocks
- Turbo C

---

## Project Structure

```text

array-using-pointers-only-in-c/
│
├── display_array_using_pointer.c
├── sum_array_using_pointer.c
├── largest_element_pointer.c
├── count_even_pointer.c
├── reverse_array_pointer.c
└── README.md
```

---

## How to Compile

Compile a program:

```bash
gcc filename.c -o output
```

Run:

```bash
./output
```

---

## Learning Outcomes

After completing these programs, you will understand:

- Relationship between arrays and pointers
- Pointer arithmetic operations
- Accessing array elements using pointers
- Traversing arrays without indexing
- Reverse traversal using pointers
- Pointer-based data processing
- Efficient memory access techniques

---

## Important Concepts

### Array Name as Pointer

```c
int arr[5] = {10,20,30,40,50};
```

Array name stores the address of the first element.

```c
arr == &arr[0]
```

---

### Pointer Arithmetic

```c
*(arr + 0) = 10
*(arr + 1) = 20
*(arr + 2) = 30
```

Equivalent to:

```c
arr[0]
arr[1]
arr[2]
```

---

### Pointer-Based Input

```c
scanf("%d", arr+i);
```

Equivalent to:

```c
scanf("%d", &arr[i]);
```

---

### Reverse Traversal

```c
int *p = arr + 4;
```

Pointer starts from the last element and moves backward.

```text
50 → 40 → 30 → 20 → 10
```

---

## Future Improvements

Possible future additions:

- Array sorting using pointers
- Searching using pointers
- Pointer-based matrix operations
- Dynamic arrays using malloc()
- Pointer to pointer examples
- Function pointers
- String processing using pointers

---

## Author

**Harsha G**

Learning:

- C Programming
- Embedded Systems
- Python Development
- IoT Systems
- Problem Solving
