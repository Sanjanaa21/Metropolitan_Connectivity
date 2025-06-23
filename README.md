# Metropolitan_Connectivity 🚇

This C-based project simulates a **Metropolitan Connectivity System** with multiple features like displaying city data, sorting, searching, train traversal using BST, shortest path computation, transitive closure via Floyd's Algorithm, AVL trees for sorting, and seat booking functionality.

---

## 🔧 Description

This system simulates how metropolitan cities are connected via transportation networks (e.g., trains or metro lines). It models various operations such as:

- Managing city and metro/train data.
- Performing graph traversal.
- Finding shortest paths between cities.
- Booking seats on trains.
- Visualizing connectivity.
- Performing operations like sorting/searching on city/train data using various algorithms like bubble sort, heap sort, AVL trees, DFS/BFS, Dijkstra, and Prim's.

---

## 🧠 Features Overview

### 🏙️ City Management

#### Case 1: Display Spots
- `display_spot()`: Prints the name, type, and population of each city.

#### Case 2: Sort by Type
- `bubble_sort()`: Sorts the cities based on the type of area.

#### Case 3: Search Location
- `search()`: Uses `strcmp()` to search city name. Returns 1 if found, else 0.

#### Case 4: Minimum Population
- `min()`: Prints city with the lowest population.

#### Case 5: Maximum Population
- `max()`: Prints city with the highest population.

---

### 🔁 Connectivity Algorithms

#### Case 6: Transitive Closure
- `transitive_closure()`: Uses Floyd's algorithm to determine transitive connections.

#### Case 11: Graph Traversals
- `bfs_traverse()`, `dfs_traverse()`: BFS and DFS traversal on adjacency matrix.

---

### 🚆 Train Management

#### Case 7: Train Display using BST
- `insert_into_city()`, `inorder()`, `preorder()`, `postorder()`, `bst_traversal()`: Manage train names in a binary search tree and print them in different orders.

#### Case 8: Search Train using Brute Force
- `brute()`: Implements brute force pattern search on train data.

#### Case 9: Sort Train Priority using Heap
- `heapify()`, `heapsort()`, `display()`: Sorts trains by priority using heap sort.

#### Case 10: Seat Booking System
- `linearsearch()`, `bookseat()`, `displayavailabletrains()`: Booking and availability checking.
- `quicksort()`, `partition()`, `swap()`: Sorting available trains.
- `booking_seat_with_payment()`: Booking with confirmation.

---

### 📂 Data Loading

#### Case 12: Route File Handling
- `load_from_file()`, `display_route()`: Load and show train/city route data from file.

---

### 🧮 Shortest Path Algorithms

#### Case 13: Dijkstra’s Algorithm
- `next_source()`, `check_d()`, `shortest_path()`, `dijkstras()`: Computes shortest path from source to destination city.

---

### 🔎 Pattern Matching

#### Case 14: Rabin-Karp
- `rk()`: Rabin-Karp algorithm to search a pattern in train/city names.

---

### 🚦 Kruskal’s Algorithm

#### Case 15: Traffic Signal Management
- `selection_sort()`, `find()`, `union()`, `traffic_signal()`: Sort and select optimal edges for traffic signaling using Kruskal’s algorithm.

---

### 🌐 MST using Prim’s Algorithm

#### Case 16: 
- `prims()`: Builds Minimum Spanning Tree using Prim’s algorithm.

---

### 🌳 AVL Tree Functions

- `ma()`: Lexicographical comparison of two strings.
- `height_tree()`: Returns height of a given AVL node.
- `newnode()`: Creates a new AVL node.
- `maximum()`: Returns max of two integers.
- `right_rotate()`, `left_rotate()`: Performs AVL rotations.
- `getbalance()`: Calculates AVL node balance.
- `insert()`, `inorder()`, `avl()`: Insert and traverse AVL tree.

---



