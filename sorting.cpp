// Alycia Riese
// sorting.cpp

// C++ includes
#include <vector>
#include <iostream>
#include <fstream>
#include <ctime>
#include <limits>

// My includes
#include "heapsort.h"
#include "insertsort.h"
#include "mergesort.h"
#include "quicksort.h"

// using statements
using std::vector;
using std::ifstream;
using std::string;
using std::cout;
using std::cin;

// function protoypes
vector<int> get_input_data();
void sorting_test();
void test(int i);


// Main function
int main()
{
    int number_of_ints;

    // Run the test on the small integer file
    sorting_test();

    // Get the number of integers the user wants to sort
    cout << "Enter number of integers to sort\n";
    cin >> number_of_ints;

    // Check to see if user entered and integer
    while (!cin.good())
    {
        // Clear the buffer
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

        // Try again
        cout << "Error: Input is invalid, try again\n";
        cin >> number_of_ints;    
    } 

    // Run the tests on the integers
    test(number_of_ints);      	
}


// This function will run the 4 sorting methods on random data sets, increasing
// data sets, and decreasing data sets
void test(int number_of_ints)
{
    // Declare initial vectors
	vector<int> vector_random;
    vector<int> vector_increasing;
    vector<int> vector_decreasing;

    // Random
    for(int i = 0; i <= number_of_ints - 1; i++)
    {
        int random = rand() % 100;
        vector_random.push_back(i);	
    }

    // Increasing
    for(int i = 0; i <= number_of_ints - 1; i++)
    {
        vector_increasing.push_back(i);
    }

    // Decreasing
    for(int i = number_of_ints - 1; i >= 0; i--)
    {
        vector_decreasing.push_back(i);
    }

    // Copy the vector created above to do the sorting
    vector<int> vector_random_heap = vector_random;
    vector<int> vector_random_merge = vector_random;
    vector<int> vector_random_quick = vector_random;
    vector<int> vector_random_insert = vector_random;

    vector<int> vector_increasing_heap = vector_increasing;
    vector<int> vector_increasing_merge = vector_increasing;
    vector<int> vector_increasing_quick = vector_increasing;
    vector<int> vector_increasing_insert = vector_increasing;

    vector<int> vector_decreasing_heap = vector_decreasing;
    vector<int> vector_decreasing_merge = vector_decreasing;
    vector<int> vector_decreasing_quick = vector_decreasing;
    vector<int> vector_decreasing_insert = vector_decreasing;

    clock_t start;
    clock_t stop;

    cout << "For N = " << number_of_ints << ":\n";

    start = clock();
    heapsort<int>(vector_random_heap);
    stop = clock();
    cout << "runtime heap random: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

    start = clock();
    mergeSort<int>(vector_random_merge);
    stop = clock();
    cout << "runtime merge random: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

    start = clock();
    quicksort<int>(vector_random_quick);
    stop = clock();
    cout << "runtime quick random: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

    start = clock();
    insertionSort<int>(vector_random_insert);
    stop = clock();
    cout << "runtime insert random: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";


    start = clock();
    heapsort<int>(vector_increasing_heap);
    stop = clock();
    cout << "runtime heap increasing: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

    start = clock();
    mergeSort<int>(vector_increasing_merge);
    stop = clock();
    cout << "runtime merge increasing: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

    start = clock();
    quicksort<int>(vector_increasing_quick);
    stop = clock();
    cout << "runtime quick increasing: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

    start = clock();
    insertionSort<int>(vector_increasing_insert);
    stop = clock();
    cout << "runtime insert increasing: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";


    start = clock();
    heapsort<int>(vector_decreasing_heap);
    stop = clock();
    cout << "runtime heap decreasing: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";
    
    start = clock();
    mergeSort<int>(vector_decreasing_merge);
    stop = clock();
    cout << "runtime merge decreasing : " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

    start = clock();
    quicksort<int>(vector_decreasing_quick);
    stop = clock();
    cout << "runtime quick decreasing: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

    start = clock();
    insertionSort<int>(vector_decreasing_insert);
    stop = clock();
    cout << "runtime insert decreasing: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";
}


// This will sort the vector (given by user file) using the 4 different methods 
void sorting_test()
{
    // Get the input vector from file
    vector<int> original = get_input_data();

    // Copy the vector for each sort
	vector<int> test_heap = original;
    vector<int> test_merge = original;
    vector<int> test_quick = original;
    vector<int> test_insert = original;

    cout << "Vector before heap sort: ";
    for(vector<int>::iterator iter = test_heap.begin(); iter != test_heap.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << "\n";

    cout << "Vector after heap sort: ";
    heapsort<int>(test_heap);
    for(vector<int>::iterator iter = test_heap.begin(); iter != test_heap.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << "\n";

    cout << "Vector before merge sort: ";
    for(vector<int>::iterator iter = test_merge.begin(); iter != test_merge.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << "\n";

    cout << "Vector after merge sort: ";
    mergeSort<int>(test_merge);
    for(vector<int>::iterator iter = test_merge.begin(); iter != test_merge.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << "\n";

    cout << "Vector before quick sort: ";
    for(vector<int>::iterator iter = test_quick.begin(); iter != test_quick.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << "\n";

    cout << "Vector after quick sort: ";
    quicksort<int>(test_quick);
    for(vector<int>::iterator iter = test_quick.begin(); iter != test_quick.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << "\n";

    cout << "Vector before insertion sort: ";
    for(vector<int>::iterator iter = test_insert.begin(); iter != test_insert.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << "\n";

    cout << "Vector after insertion sort: ";
    insertionSort<int>(test_insert);
    for(vector<int>::iterator iter = test_insert.begin(); iter != test_insert.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << "\n";
}


// Gets the input file and forms it into a vector of ints
vector<int> get_input_data()
{
    ifstream input_file;
    string file_name;

    cout << "Please enter a file name to process\n";
    cin >> file_name;

    // Try to open the file
    input_file.open(file_name.c_str());

    // Could not open, try again
    while (input_file.fail())
    {
        cout << "Error opening file, try again" << "\n";
        cin >> file_name;
        input_file.open(file_name.c_str());        
    }

    string line;
    vector<int> ints;

    // Read file line by line
    while(getline(input_file, line))
    {
        // Convert the line to an int and push it to vector
        ints.push_back(stoi(line));
    }

    // Return our vector
    return ints;
}