# 🛡️ The Algorithms Lab: High-Performance C++ Logic

A centralized, professional-grade repository for standalone algorithms, performance-critical logic, and practical applications of computer science foundations. This library emphasizes **Manual Memory Management**, and **Mathematical Rigor**.

---

## 🚀 Repository Overview

This lab is dedicated to "Pure Logic"—algorithms that are decoupled from specific data structures to ensure maximum reusability across different projects.

### 🔍 Searching & Sorting Suite
A diverse collection of sorting and searching techniques implemented through various architectural patterns (Recursive, Iterative, and Divide & Conquer).
* **Searching:** Optimized `Binary Search` for sorted collections.
* **Sorting Suite:**
    * **Comparison Based:** `Bubble`, `Selection`, `Insertion` (Implemented with various optimization tweaks).
    * **Divide & Conquer:** `Merge Sort` and `Quick Sort` (utilizing multiple partitioning strategies).
    * **Tree-Based Sorting:** `Heap Sort` logic.

### 📚 Stack Applications & Parsing
Advanced implementations of Stack-based logic for solving expression-heavy computational problems:
* **Bracket Balancing:** Efficient O(n) validation for nested delimiters.
* **Expression Conversion:** * `Infix` to `Postfix` notation.
    * `Infix` to `Prefix` notation.
* **Expression Evaluation:** Real-time calculation engine for Postfix and Prefix expressions.

### 🔢 Numerical & Data Compression
* **Huffman Coding:** A full implementation of frequency-based trees for text file compression and decompression.
* **Mathematical Logic:** Optimized `Fibonacci` sequences (Iterative and Recursive approaches).

---

## 📊 Complexity Analysis (Time & Space)

| Category | Algorithm | Time Complexity (Worst) | Space Complexity |
| :--- | :--- | :--- | :--- |
| **Searching** | Binary Search | O(log n) | (Iterative) O(1) / (Recursive) O(log n) |
| **Sorting** | Bubble / Selection / Insertion | O(n^2^) | O(1) |
| **Sorting** | Merge | O(n log n) | O(n) |
| **Sorting** | Quick | O(n^2^) / (Avg) O(n log n) | O(log n) |
| **Sorting** | Heap Sort | O(n log n) | O(1) |
| **Compression**| Huffman Coding | O(n log n) | O(n) |
| **Math** | Fibonacci (Iterative) | O(n) | O(1) |
| **Math** | Fibonacci (Recursive) | O(2^n^) | O(n) |

---

## 🔗 The Modular Ecosystem (External Repositories)

To maintain **Clean Architecture** and prevent code duplication, specific algorithms are hosted in their respective specialized repositories based on their dependency on data containers.

### 1. [MyDataStructuresLibrary-repo](https://github.com/ebrahim-hasan-dev/MyDataStructuresLibrary-repo.git)
This repository contains algorithms that are architecturally bound to complex data structures:
* **Graph Algorithms:** `Dijkstra's Algorithm`, `Bellman-Ford`, `Breadth-First Search (BFS)`, and `Depth-First Search (DFS)`.
* **The Hashing Engine:** * **Functions:** Division, Multiplication, and Folding methods.
    * **Collision Resolution:** `Cuckoo`, `Robin Hood`, `Coalesced`, `Perfect`, and `Open/Close Hashing`.
* **Tree Traversals:** `In-Order`, `Pre-Order`, `Post-Order`, and `Level-Order` (Implemented within AVL and Binary Search Trees).

### 2. [MyLibrary-repo](https://github.com/ebrahim-hasan-dev/MyLibrary-repo.git)
A foundational utility library providing core helper logic through specialized classes:
* **`clsUtil`:** Matrix operations (`IsScalar`, `IsSparse`), Array analytics (`Max/Min`, `Palindrome Check`, `Prime Check`), and counting logic (Even/Odd).
* **`clsString`:** Advanced manipulation (`Join`, `Split`, Case formatting), ASCII value logic, and **Number-to-Text** conversion.
* **`clsDate`:** A comprehensive engine for Time and Date manipulation.

---

## 🛠️ Technical Specifications
* **Language:** C++.
* **Paradigm:** Functional Programming.
* **Memory:** Manual heap management.

---

## 💻 How to Use

You can simply include the required header files in your project:

```cpp
#include <iostream>
using namespace std;

#include "../AlgorithmsLib/PracticalOnStackAlgorithms/BalancedParentheses.h";
#include "../AlgorithmsLib/PracticalOnStackAlgorithms/ConvertInfixToPrefixAndExpressionEvaluation.h";
#include "../AlgorithmsLib/PracticalOnStackAlgorithms/ConvertInfixToPostfixAndExpressionEvaluation.h";

using namespace MyAlgorithmsLib;


int main()
{
	cout << AreBalanced("()[{}") << "\n";
	cout << AreBalanced("(){()}") << "\n";

	// --------------------------------------------- 

	string Expression = "(5+8)*9+((8/4)*55-99)*7";

	cout << "Expression befor convert to prefix: " << Expression << "\n";
	cout << "Expression after convert to prefix: " << ConvertInfixToPrefix(Expression) << "\n";

	cout << "Expression Result Prefix : " << PerformExpressionEvaluationPrefix(Expression) << "\n\n";
    
	cout << =======================================================================\n\n";

	cout << "Expression befor convert to postfix: " << Expression << "\n";
	cout << "Expression after convert to postfix: " << ConvertInfixToPostfix(Expression) << "\n";
	cout << "Expression after convert to postfix better: " << ConvertInfixToPostfixBetter(Expression) << "\n";

	cout << "Expression Result Postfix : " << PerformExpressionEvaluationPostfix(Expression) << "\n\n";


    return 0;
}
```

---
## ⚠️ Important Note
1- A console app project has been added to test any algorithm.

---
## 👤 About the Author

**Ebrahim Hasan**
A passionate Software Developer with a solid foundation in Computer Science. My journey started with learning the basics of the C++ language (Functional programming), then mastering **Algorithms, Object Oriented Programming and Data Structures** in C++, then learning C#, .NET and SQL Server Database, which paved the way for building complex systems using **C# and .NET**.

* **Expertise:** Desktop Applications (WinForms), SQL Server Database Design, and Logic Automation.
* **Key Projects:** Driver License Management System, Code Generator Tool.
* **Current Goal:** Transitioning into Web Full-stack Development (C#/.NET Backend).

---
📫 **Connect with me:**
* 📧 **Email:** [ebrahim-hasan-dev@gmail.com](mailto:ebrahim-hasan-dev@gmail.com)
* 💼 **LinkedIn:** [Your Profile Name](https://linkedin.com/in/ebrahim-hasan-dev)
