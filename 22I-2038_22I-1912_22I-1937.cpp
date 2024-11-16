//
//// M. UMER SIDDIQUI 22I-2038
//// MAAZ ALI KHAN    22I-1937
//// ABDULLAH IRSHAD  22I-1912
//
//                                                    // --- DELIVERY SYSTEM ---
//                                                    
//
//
//
//#include <iostream>
//
//#include <string>
//
//using namespace std;
//
//const int MAX_INT = 2147483647; // Maximum integer value
//const int MAX_RESTAURANTS = 10;
//const int MAX_ORDERS = 10;
//const int MAX_GRID_SIZE = 10;
//const int MAX_ORDERS_PER_RESTAURANT = 10;
//const int MAX_NAME_LENGTH = 20;
//const int MAX_TEST_CASES = 10;
//
//// Class representing the location of a point
//class Location {
//public:
//    // x and y coordinates
//    int x;
//    int y;
//};
//
//// Class representing an order
//class Order {
//public: char name[MAX_NAME_LENGTH];
//      Location location;
//      int deliveryTimeLimit;
//};
//
//// Class representing a restaurant
//class Restaurant {
//public: char name[MAX_NAME_LENGTH];
//      Location location;
//      int numOrders;
//      Order orders[MAX_ORDERS_PER_RESTAURANT]; // Array of orders for the restaurant
//};
//
//// Class representing a test case
//class TestCase {
//public: int gridSize;
//      int numRiders;
//      int numRestaurants;
//      Restaurant restaurants[MAX_RESTAURANTS]; // Array of restaurants for the test case
//};
//
//// Function to parse input from the user
//void parseInput(TestCase testCases[], int& numTestCases) {
//
//    cout << "Enter the number of test cases: ";
//
//    // Validate input for the number of test cases
//    while (!(cin >> numTestCases) || numTestCases <= 0 || numTestCases > MAX_TEST_CASES) {
//
//        cout << "Invalid input. Please enter a positive integer less than or equal to " << MAX_TEST_CASES << ": ";
//
//        cin.clear(); // Clear error flags
//        while (cin.get() != '\n'); // Clear input buffer
//    }
//
//    // Iterate over each test case
//    for (int i = 0; i < numTestCases; ++i) {
//        // Enter grid size, number of riders, and number of restaurants for the test case
//        cout << "Enter grid size for Test Case " << i + 1 << ": ";
//
//        // Validate input for grid size
//        while (!(cin >> testCases[i].gridSize) || testCases[i].gridSize <= 0 || testCases[i].gridSize > MAX_GRID_SIZE) {
//
//            cout << "Invalid input. Please enter a positive integer less than or equal to " << MAX_GRID_SIZE << ": ";
//
//            cin.clear(); //clear error flags
//            while (cin.get() != '\n'); // Clear input buffer
//        }
//
//        cout << "Enter number of riders for Test Case " << i + 1 << ": ";
//
//        // Validate input for number of riders
//        while (!(cin >> testCases[i].numRiders) || testCases[i].numRiders <= 0) {
//
//            cout << "Invalid input. Please enter a positive integer: ";
//            cin.clear(); //clear error flags
//            while (cin.get() != '\n'); // Clear input buffer
//        }
//
//        cout << "Enter number of restaurants for Test Case " << i + 1 << ": ";
//
//        // Validate input for number of restaurants
//        while (!(cin >> testCases[i].numRestaurants) || testCases[i].numRestaurants <= 0 || testCases[i].numRestaurants > MAX_RESTAURANTS) {
//
//            cout << "Invalid input. Please enter a positive integer less than or equal to " << MAX_RESTAURANTS << ": ";
//            cin.clear(); //clear error flags
//            while (cin.get() != '\n'); // Clear input buffer
//        }
//
//        // Iterate over each restaurant in a test case
//        for (int j = 0; j < testCases[i].numRestaurants; ++j) {
//
//            // Enter the restaurant name, location, and number of orders
//            cout << "Enter restaurant name for Restaurant " << j + 1 << " in Test Case " << i + 1 << ": ";
//            cin.ignore(); 
//            cin.getline(testCases[i].restaurants[j].name, MAX_NAME_LENGTH);
//
//            cout << "Enter restaurant location (x y) for Restaurant " << j + 1 << " in Test Case " << i + 1 << ": ";
//
//            // Validate input for restaurant location
//            while (!(cin >> testCases[i].restaurants[j].location.x >> testCases[i].restaurants[j].location.y)) {
//
//                cout << "Invalid input. Please enter two integers for location coordinates (x y): ";
//                cin.clear();
//                while (cin.get() != '\n'); // Clear input buffer
//            }
//
//            cout << "Enter the number of orders for Restaurant " << j + 1 << " in Test Case " << i + 1 << ": ";
//
//            // Validate input for number of orders
//            while (!(cin >> testCases[i].restaurants[j].numOrders) || testCases[i].restaurants[j].numOrders <= 0 || testCases[i].restaurants[j].numOrders > MAX_ORDERS_PER_RESTAURANT) {
//
//                cout << "Invalid input. Please enter a positive integer less than or equal to " << MAX_ORDERS_PER_RESTAURANT << ": ";
//                cin.clear();
//                while (cin.get() != '\n'); // Clear input buffer
//            }
//
//            // Iterate over each order for the current restaurant
//            for (int k = 0; k < testCases[i].restaurants[j].numOrders; ++k) {
//
//                // Enter the name of order, location, and delivery time limit for order
//                cout << "Enter order name for Order " << k + 1 << " in Restaurant " << j + 1 << " in Test Case " << i + 1 << ": ";
//                cin.ignore(); // Clear the input buffer
//                cin.getline(testCases[i].restaurants[j].orders[k].name, MAX_NAME_LENGTH);
//
//                cout << "Enter order location (x y) for Order " << k + 1 << " in Restaurant " << j + 1 << " in Test Case " << i + 1 << ": ";
//
//                // Validate input for order location
//                while (!(cin >> testCases[i].restaurants[j].orders[k].location.x >> testCases[i].restaurants[j].orders[k].location.y)) {
//
//                    cout << "Invalid input. Please enter two integers for location coordinates (x y): ";
//                    cin.clear();
//                    while (cin.get() != '\n'); // Clear input buffer
//                }
//
//                cout << "Enter delivery time limit for Order " << k + 1 << " in Restaurant " << j + 1 << " in Test Case " << i + 1 << ": ";
//
//                // Validate input for delivery time limit
//                while (!(cin >> testCases[i].restaurants[j].orders[k].deliveryTimeLimit) || testCases[i].restaurants[j].orders[k].deliveryTimeLimit <= 0) {
//
//                    cout << "Invalid input. Please enter a positive integer for delivery time limit: ";
//                    cin.clear();
//                    while (cin.get() != '\n'); // Clear input buffer
//                }
//            }
//        }
//    }
//}
//
//// Function to create grid graph
//void createGridGraph(int grid[MAX_GRID_SIZE][MAX_GRID_SIZE], int gridSize,
//    const TestCase& testCase) {
//
//    // Initialize all distances to infinity
//    for (int i = 0; i < gridSize; ++i) {
//        for (int j = 0; j < gridSize; ++j) {
//            grid[i][j] = MAX_INT;
//        }
//    }
//
//    // Iterate over each restaurant in the test case
//    for (int r = 0; r < testCase.numRestaurants; ++r) {
//        // Set distance to restaurant as 0
//        grid[testCase.restaurants[r].location.x][testCase.restaurants[r].location.y] = 0;
//
//        // Iterate over each order for the current restaurant
//        for (int o = 0; o < testCase.restaurants[r].numOrders; ++o) {
//            grid[testCase.restaurants[r].orders[o].location.x][testCase.restaurants[r].orders[o].location.y] = testCase.restaurants[r].orders[o].deliveryTimeLimit;
//        }
//    }
//}
//
//// Function to perform Dijkstra's algorithm
//void dijkstra(int grid[MAX_GRID_SIZE][MAX_GRID_SIZE], int distances[MAX_GRID_SIZE][MAX_GRID_SIZE], int gridSize, Location start) {
//
//    // Array to track visited nodes
//    bool visited[MAX_GRID_SIZE][MAX_GRID_SIZE] = { false };
//
//    // Set distance to start node as 0
//    distances[start.x][start.y] = 0;
//
//    // Iterate over each node in the grid
//    for (int count = 0; count < gridSize * gridSize - 1; ++count) {
//        int minDistance = MAX_INT; // Initialize minimum distance to infinity
//        Location minLocation; // Initialize location with minimum distance
//
//        // Find the minimum distance node that has not been visited
//        for (int i = 0; i < gridSize; ++i) {
//            for (int j = 0; j < gridSize; ++j) {
//                if (!visited[i][j] && distances[i][j] <= minDistance) {
//                    minDistance = distances[i][j]; // Update minimum distance
//                    minLocation.x = i; // Update x-coordinate of minimum location
//                    minLocation.y = j; // Update y-coordinate of minimum location
//                }
//            }
//        }
//
//        // Mark the selected node as visited
//        visited[minLocation.x][minLocation.y] = true;
//
//        // Update distances to adjacent nodes
//        for (int i = 0; i < gridSize; ++i) {
//            for (int j = 0; j < gridSize; ++j) {
//                // Check if the node is not visited, there is a path to the node, and the new distance is less than the current distance
//                if (!visited[i][j] && grid[i][j] && distances[minLocation.x][minLocation.y] != MAX_INT && distances[minLocation.x][minLocation.y] + grid[i][j] < distances[i][j]) {
//                    distances[i][j] = distances[minLocation.x][minLocation.y] + grid[i][j]; // Update distance to the node
//                }
//            }
//        }
//    }
//}
//
//
//// Function to plan routes for restaurants
//void planRoutes(const TestCase& testCase) {
//
//    // Declare grid for distances
//    int grid[MAX_GRID_SIZE][MAX_GRID_SIZE];
//    // Create grid graph based on test case
//    createGridGraph(grid, testCase.gridSize, testCase);
//
//    // Iterate over each restaurant in the test case
//    for (int r = 0; r < testCase.numRestaurants; ++r) {
//
//        // Declare array for distances
//        int distances[MAX_GRID_SIZE][MAX_GRID_SIZE];
//
//        dijkstra(grid, distances, testCase.gridSize, testCase.restaurants[r].location);
//
//        cout << "Routes for Restaurant " << testCase.restaurants[r].name << ":\n";
//
//        // Iterate over each order for the current restaurant
//        for (int o = 0; o < testCase.restaurants[r].numOrders; ++o) {
//
//            cout << "Rider: " << o + 1 << " Route: "; // Print rider and route information  
//            cout << testCase.restaurants[r].location.x << "," << testCase.restaurants[r].location.y << " -> "; // Print starting location
//            cout << testCase.restaurants[r].orders[o].location.x << "," << testCase.restaurants[r].orders[o].location.y << " = "; // Print destination location
//
//            // If there exists a route to the order
//            if (distances[testCase.restaurants[r].orders[o].location.x][testCase.restaurants[r].orders[o].location.y] != MAX_INT) {
//                // Print total time required
//                cout << distances[testCase.restaurants[r].orders[o].location.x][testCase.restaurants[r].orders[o].location.y] + testCase.restaurants[r].orders[o].deliveryTimeLimit << " time units\n";
//            }
//            else {
//                cout << "No route available\n";
//            }
//        }
//        cout << endl;
//    }
//}
//
//// Function to calculate total minimum time required for all orders
//int calculateTotalMinimumTime(const TestCase& testCase) {
//    int totalMinimumTime = 0;
//
//    // Iterate over each restaurant in the test case
//    for (int r = 0; r < testCase.numRestaurants; ++r) {
//        // Iterate over each order for the current restaurant
//        for (int o = 0; o < testCase.restaurants[r].numOrders; ++o) {
//            // Add delivery time limit of the order to total minimum time
//            totalMinimumTime += testCase.restaurants[r].orders[o].deliveryTimeLimit;
//        }
//    }
//
//    return totalMinimumTime;
//}
//
//// Function to print output
//void printOutput(const TestCase& testCase) {
//    cout << "Total minimum time required to deliver all orders efficiently: " << calculateTotalMinimumTime(testCase) << " time units\n";
//}
//
//int main() {
//
//    // Declare variable to store number of test cases, array of test cases
//    int numTestCases;
//    TestCase testCases[MAX_TEST_CASES];
//
//    //input from teh user 
//    parseInput(testCases, numTestCases);
//
//    cout << "Solution Steps:\n";
//
//    // Iterate over each test case
//    for (int i = 0; i < numTestCases; ++i) {
//        cout << "Step " << i + 1 << ":\n";
//        // Plan routes for the current test case
//        planRoutes(testCases[i]);
//    }
//
//    cout << "Sample Output:\n";
//
//    for (int i = 0; i < numTestCases; ++i) {
//        cout << "For Test Case " << i + 1 << ", the ";
//        // Print output for the current test case
//        printOutput(testCases[i]);
//        cout << endl;
//    }
//
//    return 0;
//}