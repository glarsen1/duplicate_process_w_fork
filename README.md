# Duplicate Process with Fork

## Overview
This project demonstrates the creation of duplicate processes using the `fork()` system call in C on Unix-like systems. It is part of the course **Sistemas Operativos** at **Universidade Aberta** (C A1S2, 2024/2025).  

The program illustrates process duplication, parent-child process behavior, and basic inter-process handling.

---

## Table of Contents
- [Overview](#overview)  
- [Features](#features)  
- [Requirements](#requirements)  
- [Installation](#installation)  
- [Usage](#usage)  
- [Code Explanation](#code-explanation)  
- [License](#license)  

---

## Features
- Create one or multiple child processes using `fork()`.  
- Demonstrate parent and child process execution order.  
- Print process IDs (PIDs) to visualize process hierarchy.  

---

## Requirements
- **Operating System:** Linux/WSL Ubuntu (or other Unix-like systems)  
- **Compiler:** GCC (GNU Compiler Collection)  
- **C Knowledge:** Basic understanding of processes and `fork()`  

---

## Installation
1. Make sure you have **WSL Ubuntu** installed on Windows or a Linux environment.  
2. Navigate to the project folder in terminal:

```bash
cd /path/to/duplicate_process_w_fork

Compile the program using GCC:
gcc -Wall -o duplicate_process_w_fork duplicate_process_w_fork.c
