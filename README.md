# Bank System in C++

## 📦 Project Overview

This project implements a simple **Bank Account Management System** in C++, using classes and basic object-oriented programming concepts. It supports:
- Adding new accounts
- Depositing and withdrawing money
- Transferring funds between accounts
- Displaying account information

---

## 📁 Project Structure

The code is modular, organized into four files:

| File | Description |
|------|-------------|
| `BankAccount.h` | Declaration of the `BankAccount` class (individual bank account logic). |
| `BankAccount.cpp` | Implementation of `BankAccount` methods. |
| `BankSystem.h` | Declaration of the `BankSystem` class (manages multiple accounts). |
| `BankSystem.cpp` | Implementation of `BankSystem` methods. |
| `main.cpp` | Entry point of the program, with example operations. |

---

## ⚙️ Compilation & Execution

### Using `g++` (recommended):

Open a terminal in the project directory and run:

```bash
g++ -std=c++11 main.cpp BankSystem.cpp BankAccount.cpp -o bank_system
./bank_system
```

### Output

The program will:
- Add two accounts
- Display initial account data
- Perform deposits, withdrawals, and a transfer
- Display final account states

---

## 🚀 Features

✅ Add accounts  
✅ Deposit and withdraw money  
✅ Transfer funds between accounts  
✅ Prevents:
- Transfers to the same account
- Withdrawals with insufficient balance
- Duplicate account numbers

---

## ⚠️ Assumptions & Notes

- **Account numbers must be unique**; duplicates are rejected.
- **Negative deposits** are disallowed.
- Transfers to the same account show an error.
- If an account is not found, an appropriate message is displayed and operations are aborted.
- All accounts are stored in a `std::vector`.

---

## 📌 Example Interaction

```text
Account holder: Alice Smith
Account number: 1001
Balance:  500

Account holder: John Doe
Account number: 1002
Balance:  1000

Transferred 300 from 1002 to 1001

Account holder: Alice Smith
Account number: 1001
Balance:  1000

Account holder: John Doe
Account number: 1002
Balance:  550
```

---

## 📞 Questions?

If you have any questions or want to extend this system (e.g., file saving, interest calculation, login systems), feel free to ask!