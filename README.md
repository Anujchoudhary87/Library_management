# 📚 Library Management System (C++)

A console-based Library Management System written in **C++** that allows students to sign up, log in, and record their library-related information. Designed as a lightweight and modular project, this system emphasizes **user authentication**, **record handling**, and **data structures** using **linked lists** and **hash maps**.






## Features

- ✅ User **Sign-Up** using entry number and password
- 🔐 Secure **Login** functionality with credential check
- 📝 After login, users can:
  - Enter personal details
  - Record laptop brand
  - Enter number of library books, personal books, and notebooks
- 📋 View all user entries (admin-style, for testing)
- 🧠 Uses in-memory **linked list** and `unordered_map` for fast lookups
## Concepts Demonstrated

• Sign-up/login logic with unordered_map

• Dynamic memory using linked lists

• Input validation and clean menu handling

• Console-based modular application design






## Future Improvements

🔐 Password masking (****)

💾 File-based data persistence (save/load records)

🧑‍💼 Admin-only login to view/edit/delete any student

🌐 GUI version using Qt or web frontend using Flask

# 🎯 Learning Objectives

| **Objective**                         | **Description**                                                                                      |
|--------------------------------------|------------------------------------------------------------------------------------------------------|
| ✅ **Structured Programming**         | Learn how to write clean, modular, and organized C++ code using functions and data structures.       |
| ✅ **Input/Output Handling**          | Master `cin`, `getline()`, `cin.ignore()` for robust and user-friendly input flow.                   |
| ✅ **Working with Strings and Chars** | Handle user input and manipulate strings and characters appropriately.                               |
| 📚 **Linked List Implementation**     | Dynamically store and manage user records without size limits.                                       |
| ⚡ **Hash Maps (`unordered_map`)**    | Store and retrieve user credentials quickly for login/signup.                                       |
| 🔁 **Traversal and Search**           | Traverse a linked list to search, update, or delete specific records.                                |
| 🔐 **Login/Signup System**            | Understand the basics of authentication flow — user validation and credential storage.               |
| 🔒 **Session Management**             | Simulate session-based access control (only logged-in users can fill details).                       |
| 💼 **System Flow Design**            | Build a logical flow: Signup → Login → Data Entry — simulating real-world software.                  |
| 🧭 **Menu-Driven Interface**         | Learn how to design clear and intuitive CLI-based user interfaces.                                   |
| 💾 **File I/O (optional)**            | Save and load user data persistently via text files.                                                 |
| 🛡️ **Password Masking (optional)**   | Hide passwords with `*` when typing for privacy and security.                                        |
| 📊 **Admin Dashboard (optional)**     | Implement role-based access for viewing all user records.                                            |

## Sample Outputs:

1) → Sign Up
   
 → Entry Number: 2023eeb1187

 → Password: Anujchoudhary88

 → Login
 
↳ Entry Number: 2023eeb1187

↳ Password: Anujchoudhary88

Post Login Data Entry:

↳ Name: Anuj Choudhary

↳ Section: A

↳ Laptop Brand: HP

↳ Library Books: 1

↳ Personal Books: 3

↳ Notebooks: 2



![iamge alt](https://github.com/Anujchoudhary87/Library_management/blob/208fb25f8a68963cd65c29fcdeb0b18ab5ceb5db/Sign-up.png)

2) Login without sign-up:

![iamge alt](https://github.com/Anujchoudhary87/Library_management/blob/208fb25f8a68963cd65c29fcdeb0b18ab5ceb5db/No-Entry.png)


3) → Sign Up
   
↳ Entry Number: 2023eeb1175

↳ Password: Abhi1234

 → Login
 
↳ Entry Number: 2023eeb1175

↳ Password: Abhi1234

Post Login Data Entry:

↳ Name: Abhi

↳ Section: C

↳ Laptop Brand: Mackbook

↳ Library Books: 0

↳ Personal Books: 1

↳ Notebooks: 2




![iamge alt](https://github.com/Anujchoudhary87/Library_management/blob/208fb25f8a68963cd65c29fcdeb0b18ab5ceb5db/Sign-up2.png)


4) Total Entries:

![iamge alt](https://github.com/Anujchoudhary87/Library_management/blob/208fb25f8a68963cd65c29fcdeb0b18ab5ceb5db/Enteries.png)
   
