# OOP  — Inheritance in C++


This repository contains five scenario-based C++ programs demonstrating the fundamental concepts of inheritance in Object-Oriented Programming (OOP).

## 📚 Assignment Overview

| Question | Project | Inheritance Type |
|---|---|---|
| Q1 | Library Book Borrowing System | Single Inheritance |
| Q2 | Online Shopping Checkout | Multilevel Inheritance |
| Q3 | University Sports Scholarship | Multiple Inheritance |
| Q4 | City Ride Fare Calculator | Hierarchical Inheritance |
| Q5 | Teaching Assistant Payroll | Hybrid Inheritance (Diamond Problem) |

## 🛠️ Technologies Used

- **Language:** C++
- **Concepts:** Classes, constructors, inheritance, access specifiers, virtual inheritance, and polymorphism-related OOP fundamentals.
- **IDE:** Visual Studio Code / Dev-C++

## 📂 Project Structure

```text
OOP-Assignment-2-Inheritance/
│
├── Q1_LibraryBook.cpp
├── Q2_OnlineShopping.cpp
├── Q3_SportsScholarship.cpp
├── Q4_RideFareCalculator.cpp
├── Q5_TeachingAssistant.cpp
└── README.md
```

## 📝 Programs Description

### Q1. Library Book Borrowing System
**Concept:** Single Inheritance

- Stores book title, author, and available copies.
- Reduces available stock when a book is borrowed.
- Rejects borrowing requests when no copies remain.

### Q2. Online Shopping Checkout
**Concept:** Multilevel Inheritance

- Uses the inheritance chain `Order → DiscountedOrder → ExpressOrder`.
- Calculates the discount amount and express delivery fee.
- Displays the final payable amount.

**Sample calculation:** Rs. 2000 − Rs. 200 + Rs. 150 = **Rs. 1950**

### Q3. University Sports Scholarship
**Concept:** Multiple Inheritance

- Combines academic and sports records.
- Checks eligibility using GPA and sports points.
- A candidate qualifies with a GPA of at least 3.50 and sports points of at least 70.

### Q4. City Ride Fare Calculator
**Concept:** Hierarchical Inheritance

- Uses `Ride` as the common base class.
- `EconomyRide` charges Rs. 30 per km plus the base fare.
- `PremiumRide` charges Rs. 50 per km, plus the base fare and a Rs. 200 service charge.

**Sample fares for 10 km with a Rs. 100 base fare:**
- Economy Ride: Rs. 400
- Premium Ride: Rs. 800

### Q5. Teaching Assistant Payroll
**Concept:** Hybrid Inheritance and the Diamond Problem

- Uses `Person` as a shared base class.
- `Student` and `Employee` virtually inherit from `Person`.
- `TeachingAssistant` inherits from both `Student` and `Employee`.
- Calculates total pay using hours worked multiplied by the hourly rate.

**Sample calculation:** 12 hours × Rs. 500 = **Rs. 6000**

## ▶️ How to Run

1. Clone or download this repository.
2. Open the project folder in your preferred C++ IDE.
3. Open any `.cpp` file.
4. Compile and run the selected program.

Using a terminal with a C++ compiler such as `g++`:

```bash
g++ Q1_LibraryBook.cpp -o Q1
./Q1
```

Replace the filename and executable name to run another question. On Windows, run the compiled executable as `Q1.exe`.

## 🎯 Learning Objectives

- Understand the four common inheritance structures in C++.
- Implement constructor chaining and base-class initialization.
- Apply public and protected access specifiers.
- Understand virtual inheritance and how it resolves duplicate base-class subobjects in the diamond problem.
- Develop independent, scenario-based C++ programs.

## 👨‍🎓 Assignment Information

- **University:** Superior University
- **Department:** Computer Science
- **Course:** Object-Oriented Programming (C++)
- **Assignment:** Programming Assignment #2 — Inheritance in C++

---

*Created for educational purposes as part of C++ OOP coursework.*
