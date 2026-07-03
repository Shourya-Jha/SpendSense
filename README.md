<div align="center">

#  SpendSense

### Track it. Understand it. Own it.

*A collaborative open-source Expense Tracker built in C++ to manage your daily expenses, track budgets, and analyze spending habits with ease.*

<br/>

![C++](https://img.shields.io/badge/C%2B%2B-17-00599C?style=for-the-badge&logo=cplusplus&logoColor=white) ![Open Source](https://img.shields.io/badge/Open%20Source-Yes-2ea44f?style=for-the-badge&logo=github&logoColor=white) ![Version](https://img.shields.io/badge/Version-v0.1-orange?style=for-the-badge) ![License](https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge)

</div>

<br/>

## 📖 Table of Contents

- [About the Project](#-about-the-project)
- [Features](#-features)
- [Technology Stack](#-technology-stack)
- [Project Structure](#-project-structure)
- [Installation](#-installation)
- [Git Workflow](#-git-workflow)
- [Contributors](#-contributors)
- [Project Objectives](#-project-objectives)
- [License](#-license)
- [Acknowledgement](#-acknowledgement)

<br/>

## 🧭 About the Project

**SpendSense** is a console-based Expense Tracker System built using C++. It enables users to manage personal finances by recording expenses, tracking budgets, organizing spending into categories, and generating financial reports.

The project is being developed as part of the **Open Source Development Internship 2026** and follows collaborative software development practices using Git and GitHub.

<br/>

## ✨ Features

<table>
<tr>
<td width="50%" valign="top">

### 👤 User Management
- User Registration
- User Login and Logout
- Profile Management
- Change Password
- Forgot Password

### 💸 Expense Management
- Add Expense
- Edit Expense
- Delete Expense
- View Expenses
- Transaction History

### 🔍 Search and Sorting
- Search by ID
- Search by Date
- Search by Category
- Search by Amount
- Sort by Date
- Sort by Amount
- Sort by Category

</td>
<td width="50%" valign="top">

### 🏷️ Category Management
- Default Categories
- Custom Categories
- Category Statistics
- Tag Management

### 🎯 Budget Management
- Monthly Budget
- Weekly Budget
- Category Budget
- Budget Alerts
- Savings Goals

### 📊 Reports and Analytics
- Daily / Weekly / Monthly / Yearly Reports
- Highest & Lowest Expense
- Average Expense
- Spending Trends

### 💾 File Management
- Save Data
- Load Data
- Backup Data

</td>
</tr>
</table>

<br/>

## 🔧 Technology Stack

| Component | Technology |
|:---|:---|
|  Language | C++ |
|  Concepts | OOP, STL, File Handling |
|  Version Control | Git |
|  Repository Hosting | GitHub |
|  Development Environment | Visual Studio Code |

<br/>

## 📂 Project Structure

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
│   ├── FileManager.h
│   └── UI.h
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

<br/>

## 🚀 Installation

**1. Clone the repository**

```bash
git clone https://github.com/SRV-KILLER09/SpendSense.git
```

**2. Navigate to the project directory**

```bash
cd SpendSense
```

**3. Compile**

```bash
g++ main.cpp src/*.cpp -o SpendSense
```

**4. Run**

<table>
<tr>
<td><b> Linux / macOS</b></td>
<td><code>./SpendSense</code></td>
</tr>
<tr>
<td><b> Windows</b></td>
<td><code>SpendSense.exe</code></td>
</tr>
</table>

<br/>

## 🌿 Git Workflow

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

> All features are developed independently and merged through Pull Requests.

<br/>

## 👥 Contributors

<div align="center">

| Name | Enrollment Number |
|:---|:---:|
| Aayush Kharbanda | 992501030159 |
| Nishita Rastogi | 992501040013 |
| Vardaan Saxena | 992501030399 |
| Dev Puri | 992501030424 |
| Shourya Jha | 992501030416 |
| Kartik Goel | 992501040019 |

</div>

<br/>

## 🎯 Project Objectives

- Develop a complete Expense Tracker using C++
- Apply Object-Oriented Programming concepts
- Implement file handling for data persistence
- Practice Git and GitHub workflows
- Follow open-source development practices
- Enhance collaborative software development skills

<br/>

## 📄 License

This project is licensed under the **MIT License**.
See the [`LICENSE`](LICENSE) file for more details.

<br/>

## 🙏 Acknowledgement

Developed as part of the **Open Source Development Internship 2026**.

This project aims to provide hands-on experience in software development, teamwork, version control, and open-source collaboration.

<br/>


## ⭐ Snippets

<img width="457" height="295" alt="image" src="https://github.com/user-attachments/assets/1633de66-0984-4b92-bfbc-29eb161a364a" />

---

<img width="1600" height="845" alt="image" src="https://github.com/user-attachments/assets/8b5dd093-559f-4d3c-bc46-26c087808407" />

---


<img width="1600" height="843" alt="image" src="https://github.com/user-attachments/assets/8b3164db-a40b-4122-b0e3-22a38e15166b" />

---


<img width="1600" height="844" alt="image" src="https://github.com/user-attachments/assets/12469f04-2002-4435-bdbc-379f6331c80e" />

---


<img width="1600" height="846" alt="image" src="https://github.com/user-attachments/assets/f8b84d5a-de6d-4e6d-8286-1df120d341a6" />

---


<img width="1600" height="843" alt="image" src="https://github.com/user-attachments/assets/6ae6c4e2-3237-4051-97e1-a1daf065fd0e" />

---


<img width="1600" height="843" alt="image" src="https://github.com/user-attachments/assets/9f3388f8-e7c0-4a23-b733-c44e94c80c14" />

---

<img width="1600" height="814" alt="image" src="https://github.com/user-attachments/assets/8d2d2b1d-b621-4bc2-9498-7af262096a54" />

---

<img width="1600" height="817" alt="image" src="https://github.com/user-attachments/assets/eba7a175-6121-42cf-8590-7399583fac75" />

---

<img width="1600" height="814" alt="image" src="https://github.com/user-attachments/assets/3fd01d26-4634-4cf2-a0fc-a8c2bfa8165c" />

---

<img width="1600" height="815" alt="image" src="https://github.com/user-attachments/assets/d5437da2-e9b0-4f44-9f46-41a4170e5dfe" />

---

<div align="center">

**⭐ If you find this project useful, consider giving it a star! ⭐**

</div>
