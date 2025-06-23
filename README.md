# Metropolitan_Connectivity

# case 1:display the sopots

Function Name:display_spot
input:NIL
return type:void
Description:prints the name,type and population of each city which we stored in file


# case 2:sort the spot
sorts the spot based on type of area

Function Name:bubble_sort
input:NIL
return type:void
Description:sorts the spot in ascending order

# case 3:search the location
function Name:search
input:name of the location
return type:int
Description:search es the name of location using inbuilt function strcmp()
returns 1 if found else it returns 0

# case 4:finding minimum population city
Function Name:min
input:NIL
return type:void
Description:printd the name of the city with minimum population

# case 5:finding the city with maximum ppulation**/
Function Name:max
input:NIL
return type:void
Description:prints the city with maximum population

# case 6
Function Name:transitive_closure
input:NIL
return type:void
Description:prints the matrix wherever there is a transitivity

in this functionality floyds algorithm is used to check the transitivity
R[42][42]-2D array which is an adjacency matrix
time efficiency:0(n^3)

# case 7:fisplay the trains using bst
it displays train name in inorder traversal,pre order traversal and post-order traversal

function Name i):insert_into_city
input:metroo*root-which is a metro_list structure
char key-it is name of the train
return type:metroo *
Description:inserts the train name to mertoo *

function Name ii):inorder
input:metroo *root-which is a metro_list structure
return type:void
Description:prints the train name in inorder fashion
that is it first prints the left child then the root and then the right child

function name iii):preorder
input:metroo *root-which is a metro_list structure
return type:void
Description:prints the train name in preorder fashion
that is it first prints the root  then the left child and then the right child

function name iv):postorder
input:metroo *root-which is a metro_list structure
return type:void
Description:prints the train name in postorder fashion
that is it first prints  the left child and then the right child and then the root

function Name:v)bst_traversal
input:NIL
return type:void
Description:it calls all the function such as insert,inorder,preorder,postorder

# case 8:search the train
it uses brute force string search algorithm,heap sort,heapify

function Name:brute
input:char t[]-character array of text
char p[]-it is an array of pattern
int n-string length of text
int m-string length of pattern
retuen type :void

# case 9
function Name i):heapify
input:metro h[]-stricture of metro
int n-size

function name ii):heapsort
iput:metro h[]-structure of metro
int n-size
return type:void
Description:sorts in descending order based on priority of train

function name iii):display
input:list h[]
return type:void
Description:printd the metro list

# case 10:seat booking 
function name i)linearsearch
input:train number
return type:int
Description:compares whether train number is there or not
returns 1 if found
returns 0 if not found

function name ii):bookseat
input:train number,number of seats
return type:int
Description:returns 1 if seats are available
returns 0 if no seats available  and prints the message

Function name iii):displayavailabletrains
input:NIL
return tye:void
Description:prints the train name,number ,available seats

function Name iv):quicksort
input:metro b[]
int l-lower limit
int r-higher limit
return type:void

function name v):swap
input:metroo* a,metroo *b
return type:void
Description:swaps 2 data

function name vi):dsplayavailabletrain
input:NIL
return type:void
Description:prints the details

function name vii):partition
input:metro b[],int l,int r
return type:void

function name:booking_seat_with_payment
input:trainnumber,numseats
return type:void

# Case 11:traversal
function name i):traverse
input:NIL
return type:void
Description: gives choices to traverse

function name ii):bfs_traverse
input:a[][],source
return type:void
Description:prints the data in bfs traversal

function name iii):dfs_traverse
input:a[][],source
return type:void
Description:prints the data in dfs traversal

# case 12
function name i):load_from_file
input:route number
return type:void
Description:loads the data

function name ii)display route
input:NIL
return type:void
Description:prints the route

# case 13
Function i): next_source(int dist[],int v[],int size)
Input:dist[] - an integer array containing the distances from the source node to all other nodes.
v[] - an integer array containing the visited status of all nodes.
size - an integer indicating the size of the graph.
return type:int
Description:The function returns an integer value which represents the index of the node which has the
 minimum distance among the unvisited nodes.

Function ii): check_d(int m[],int size)
Input:m[] - an integer array containing the visited status of all nodes.
size - an integer indicating the size of the graph.
return type:int
Description: The function returns an integer value.
0 - If all the nodes are visited.
1 - If there are unvisited nodes.

Function iii): shortest_path
Input:int source: the starting vertex for the path
int dest: the destination vertex for the path
int size: the total number of nodes in the graph
int path[size]: an array that stores the shortest path from the source vertex to each vertex in the graph
return type:void
Output: Prints the shortest path from the source vertex to the destination vertex.

Function iv): dijkstras()
Input:This function does not take any input. It uses the global array edges[] which contains the set of edges in the graph.
Output: This function does not return any value. It prints the shortest path from the source node to all other nodes in the
 graph along with their corresponding distances.

 # case 14
function name:rk
input:pettern[]-array of pattern
text[]-array of text
return type:int
Description:returns -1 if no match found

# case 15
function name i):selection_sort
input:NIL
return type:void
Description:sorts the edges in ascending order

function name ii):find
input:b[],n,u,v
return type:int
Description:return 1 or 0

function name iii):union
input:b[],n,u,v
return type:void

function name iv):traffic_signal
input:NIL
return type:void
Description :after computing all the function prints all the edges and total cost or distance

# case 16
function name:prims
input:NIL
return type:void

# case 16
Function i): ma
Input:Two character arrays (strings)
Output: An integer value indicating which of the two input strings is lexicographically greater,
with a return value of 1 indicating that the first string is greater,
2 indicating that the second string is greater, and 0 indicating that they are equal.

Function ii): height_tree
Input:A pointer to a node in an AVL tree
Output: An integer value representing the height of the input node in the AVL tree

Function iii):newnode
Input:A NODE structure containing the key of the new node to be created
Output: A pointer to a new struct tree node with the given key and NULL left and right pointers and height 1.

Function iv):maximum
Input:Two integer values a and b
Output: An integer value representing the maximum of the input values a and b

Function v):right_rotate
Input:A pointer to a node in an AVL tree that is the root of a left-heavy subtree
Output: A pointer to the new root of the subtree after a right rotation has been performed.

Function vi):left_rotate
Input:A pointer to a node in an AVL tree that is the root of a right-heavy subtree
Output: A pointer to the new root of the subtree after a left rotation has been performed.

Function vii): getbalance
Input:Pointer to a node T in the AVL tree.
Output: Integer representing the balance factor of the node T.

Function viii): insert
Input:Pointer to the root node t of an AVL tree
and a NODE struct n to be inserted.
Output: Pointer to the new root of the AVL tree after the insertion operation.

Function ix): inorder
Input:Pointer to the root node head of an AVL tree.
Output: None.

Function x):avl
Input: None.
Output: None.



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

## 📁 File Structure

```plaintext
.
├── main.c / mainss.c          # Core logic implementation
├── mainss.h                   # Header file with structures and declarations
├── city.txt / route.txt       # City/route data (optional)
├── README.md                  # Project description

