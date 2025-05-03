# CryptoCalc - Cryptocurrency Investment Calculator (Project 2)

## Overview
CryptoCalc is a C++ program that helps users simulate cryptocurrency transactions and calculate portfolio value based on user input. It includes features like file saving, smart memory management, and simulated market behavior. This version expands on the original by adding modular design and advanced data handling.

## Features

- Input multiple cryptocurrency transactions (BUY or SELL).
- Calculate total portfolio value from all transactions.
- Save transaction data to both `.txt` and `.bin` files.
- Utilize `shared_ptr` for safe memory management.
- Organize data using `struct`, `enum`, `map`, and `unordered_map`.
- Include market trend simulation using stored historical price data.
- Fully modular structure with separate header and implementation files.

## How It Works

1. User specifies the number of transactions to input.
2. For each transaction:
   - Enter coin name
   - Quantity
   - Price per coin
   - Choose type: BUY (0) or SELL (1)
3. Program:
   - Calculates portfolio value
   - Saves data to both text and binary files
   - Optionally reads and simulates historical price data

## What's New in Project 2

- Uses `shared_ptr` to manage dynamic memory safely
- Implements file handling: writes to `.txt` and `.bin`
- Adds `enum` and `struct` to cleanly organize data
- Adds `map` and `unordered_map` for faster data access
- Separates all functionality into clean header/source files
- Improved version control with frequent, meaningful commits

## Video Presentation 
Watch the project walkthrough on YouTube: https://www.youtube.com/watch?v=A2_pG9OgIqw

## Test
- mkdir build
- cd build
- cmake ..
- cmake --build . --config Release
### run via CTest (prints each test name)
- ctest --output-on-failure
