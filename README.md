# AutoInsuranceManager

**AutoInsuranceManager** is a C++ project designed to manage and analyze data about cars and their associated insurance policies. Built with modern C++ practices, it provides an efficient and extensible solution for fleet management, insurance evaluation, and data analysis.

---

## Features

### 1. **Car and Insurance Models**
- **Car**: Tracks essential car attributes such as:
  - Serial Number
  - Brand
  - Size
  - Price
  - Segment (Budget, Premium, Sports)
  - Tax Amount
- **Insurance**: Maintains insurance details like:
  - Type (ZERO_DEPT, REGULAR, ALL_INCLUSIVE)
  - Premium Cost
  - Insured Declared Value (IDV)

### 2. **Functionalities**
- **Object Creation**:
  - Generate sample data of cars and insurance policies.
- **Analysis and Queries**:
  - Count cars matching specific criteria (e.g., Budget segment, IDV thresholds).
  - Check if any car meets given conditions.
  - Filter and retrieve cars by their type or serial number.
  - Calculate the average price of cars matching a brand.

---

## Technical Highlights
- **Modern C++ Practices**:
  - **Smart Pointers**: Ensures memory safety with `std::shared_ptr`.
  - **STL Algorithms**: Leverages algorithms like `std::count_if`, `std::any_of`, and `std::accumulate` for concise and effective operations.
  - **Enums**: Strongly typed enumerations for car and insurance classifications.
- **Robust Design**:
  - Uses `std::optional` to handle optional data gracefully.
  - Avoids manual memory management by leveraging RAII.

---

## How to Use
1. **Setup**:
   - Clone the repository and include all header and source files.
   - Ensure a compatible C++ compiler (e.g., GCC, Clang) with C++17 or later.

2. **Compile**:
   ```bash
   g++ -std=c++17 main.cpp -o AutoInsuranceManager
   ```

3. **Run**:
   Execute the binary and interact with the predefined functionalities.

---

## Applications
- **Fleet Management**: Manage and query vehicle data for rental or commercial purposes.
- **Insurance Analysis**: Evaluate and analyze insurance plans and premiums.
- **Learning Tool**: Demonstrates the application of modern C++ features in a practical project.

---

## Future Enhancements
- Add a database backend for persistent storage.
- Extend functionality to support real-time user input and dynamic data.
- Develop a graphical or web-based interface for better usability.

---

### Contributors
- Designed and implemented by [Aniket].  

For questions or suggestions, feel free to open an issue or contact us directly.
