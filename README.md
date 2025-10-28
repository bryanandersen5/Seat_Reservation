## 🎟️ `Seat Reservation System`

![Language](https://img.shields.io/badge/C++-Project-blue?style=for-the-badge&logo=c%2B%2B)
![Status](https://img.shields.io/badge/Status-Active-brightgreen?style=for-the-badge)
![Type](https://img.shields.io/badge/Type-Console%20App-lightgrey?style=for-the-badge)
![Focus](https://img.shields.io/badge/Focus-Array%20%26%20User%20Interaction-orange?style=for-the-badge)

---

### 🎯 `Why I Made This Project`
- To simulate a **cinema-style seat reservation system** using C++  
- To practice **array manipulation**, **input validation**, and **interactive console design**  
- To build a fun and functional app that mimics real-world booking logic

---

### 🧠 `Purpose of the Project`
- Allow users to:
  - `Book` seats by selecting row and column
  - `Prevent` double-booking by checking availability
  - `Track` total price based on seat type (matinee or regular)
  - `Display` seat layout and purchase summary

---

### ⚙️ `What This Project Does`
- Initializes a 5×6 seat grid with `"E"` for empty and `"X"` for reserved  
- Accepts user input for row (1–5) and column (A–F)  
- Validates input and prevents booking of already reserved seats  
- Calculates price:
  - Row 1 = `Matinee` = $20  
  - Rows 2–5 = `Regular` = $10  
- Displays:
  - Seat layout with updated reservations  
  - Total seats booked and total price  
- Ends with a **"Thank you" pattern animation** when user exits

---

### 🚀 `Future Development Goals`
- Add **seat cancellation** feature  
- Implement **seat type selection** (VIP, economy, etc.)  
- Introduce **file saving** to persist reservations  
- Refactor into **modular functions** or classes  

---

### 📁 `File Overview`
```
📦 Seat_Reservation/
 ┣ 📁 BryanAndersen_Portfolio_2/              # Main project folder
 ┃ ┣ 📄 BryanAndersen_Portfolio_2.cpp         # Source code for seat reservation logic
 ┃ ┣ 📄 BryanAndersen_Portfolio_2.vcxproj     # Visual Studio project file
 ┃ ┣ 📄 BryanAndersen_Portfolio_2.vcxproj.filters # VS file filters
 ┃ ┣ 📄 BryanAndersen_Portfolio_2.vcxproj.user    # User-specific settings (ignored)
 ┃ ┗ 📄 README.md                              # Project description
 ┣ 📄 BryanAndersen_Portfolio_2.sln           # Visual Studio solution file
 ┣ 📁 .vs/                                     # IDE cache folder (ignored via .gitignore)
 ┣ 📁 x64/                                     # Build output folder (ignored via .gitignore)
 ┗ 📄 .gitignore                               # Excludes temp, build, and user config files
```
