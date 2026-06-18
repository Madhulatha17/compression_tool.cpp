# compression_tool.cpp

COMPANY: CODTECH IT SOLUTIONS

NAME: BANDI MADHU LATHA

INTERN ID: CITS87

DOMAIN: ARTIFICIAL INTELLIGENCE

DURATION: 4 WEEKS

MENTOR: NEELA SANTOSH



#  Project Overview  

This project implements a **multithreaded file compression and decompression tool** using C++.  
It uses **Run-Length Encoding (RLE)** and applies **multithreading** to improve performance and efficiency.



#  Objectives  

- Implement file compression using C++  
- Use multithreading for performance optimization  
- Compare execution time of operations  
- Demonstrate parallel processing concepts  



#  Features  

- File-based compression  
- File-based decompression  
- Multithreading using `std::thread`  
- Performance measurement using chrono  
- Automatic file generation  



# Concepts Used  

- C++ Multithreading (`std::thread`)  
- File Handling (`ifstream`, `ofstream`)  
- Run-Length Encoding (RLE)  
- Time Complexity Measurement (`chrono`)  
- String Processing  



#  How It Works  

1. Read input file  
2. Compress data using RLE  
3. Decompress data  
4. Run operations using threads  
5. Measure execution time  
6. Store output in files  


# 💻 How to Run  

## Compile:
```bash
g++ compression_tool.cpp -o compress -pthread
