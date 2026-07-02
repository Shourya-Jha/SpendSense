# SpendSense

> A collaborative open-source Expense Tracker developed in C++ to help users manage expenses, track budgets, and analyze spending habits efficiently.

![C++](https://img.shields.io/badge/C%2B%2B-17-blue)
![Open Source](https://img.shields.io/badge/Open%20Source-Yes-green)
![Version](https://img.shields.io/badge/Version-v0.1-orange)
![License](https://img.shields.io/badge/License-MIT-yellow)

---

## About the Project

SpendSense is a console-based Expense Tracker System built using C++. It enables users to manage personal finances by recording expenses, tracking budgets, organizing spending into categories, and generating financial reports.

The project is being developed as part of the **Open Source Development Internship 2026** and follows collaborative software development practices using Git and GitHub.

---

## Features

### User Management
- User Registration
- User Login and Logout
- Profile Management
- Change Password
- Forgot Password

### Expense Management
- Add Expense
- Edit Expense
- Delete Expense
- View Expenses
- Transaction History

### Search and Sorting
- Search by ID
- Search by Date
- Search by Category
- Search by Amount
- Sort by Date
- Sort by Amount
- Sort by Category

### Category Management
- Default Categories
- Custom Categories
- Category Statistics
- Tag Management

### Budget Management
- Monthly Budget
- Weekly Budget
- Category Budget
- Budget Alerts
- Savings Goals

### Reports and Analytics
- Daily Reports
- Weekly Reports
- Monthly Reports
- Yearly Reports
- Highest Expense
- Lowest Expense
- Average Expense
- Spending Trends

### File Management
- Save Data
- Load Data
- Backup Data

---

## Technology Stack

| Component | Technology |
|------------|------------|
| Language | C++ |
| Concepts | OOP, STL, File Handling |
| Version Control | Git |
| Repository Hosting | GitHub |
| Development Environment | Visual Studio Code |

---

## Project Structure

```text
SpendSense/
│
├── include/
│   ├── User.h
│   ├── AccountManager.h
│   ├── Expense.h
│   ├── Search.h
│   ├── Transaction.h
│   ├── Validation.h
│   ├── Category.h
│   ├── TagManager.h
│   ├── Budget.h
│   ├── Savings.h
│   ├── Report.h
│   ├── ExportManager.h
│   ├── Analytics.h
│   └── FileManager.h
│
├── src/
│   ├── User.cpp
│   ├── AccountManager.cpp
│   ├── Expense.cpp
│   ├── Search.cpp
│   ├── Transaction.cpp
│   ├── Validation.cpp
│   ├── Category.cpp
│   ├── TagManager.cpp
│   ├── Budget.cpp
│   ├── Savings.cpp
│   ├── Report.cpp
│   ├── ExportManager.cpp
│   ├── Analytics.cpp
│   └── FileManager.cpp
│
├── data/
│   ├── users.txt
│   ├── expenses.txt
│   ├── categories.txt
│   └── budgets.txt
│
├── docs/
│   └── architecture.png
│
├── main.cpp
│
├── README.md
├── LICENSE
├── CONTRIBUTING.md
├── CONTRIBUTORS.md
└── CHANGELOG.md
```

---

## Installation

### Clone Repository

```bash
git clone https://github.com/SRV-KILLER09/SpendSense.git
```

### Navigate to Project Directory

```bash
cd SpendSense
```

### Compile

```bash
g++ main.cpp src/*.cpp -o SpendSense
```

### Run

#### Linux / macOS

```bash
./SpendSense
```

#### Windows

```bash
SpendSense.exe
```

---

## Git Workflow

```text
main
│
├── develop
│
├── feature/authentication
├── feature/expense-management
├── feature/category-management
├── feature/budget-management
├── feature/reports
└── feature/analytics
```

All features are developed independently and merged through Pull Requests.

---

## Contributors

| Name | Enrollment Number |
|--------|------------------|
| Aayush Kharbanda | 992501030159 |
| Nishita Rastogi | 992501040013 |
| Vardaan Saxena | 992501030399 |
| Dev Puri | 992501030424 |
| Shourya Jha | 992501030416 |
| Kartik Goel | 992501040019 |

---

## Project Objectives

- Develop a complete Expense Tracker using C++
- Apply Object-Oriented Programming concepts
- Implement file handling for data persistence
- Practice Git and GitHub workflows
- Follow open-source development practices
- Enhance collaborative software development skills

---

## License

This project is licensed under the MIT License.

See the `LICENSE` file for more details.

---

## Acknowledgement

Developed as part of the **Open Source Development Internship 2026**.

This project aims to provide hands-on experience in software development, teamwork, version control, and open-source collaboration.
