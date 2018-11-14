#include <vector>
#include <iostream>
#include <fstream>

#include "heapsort.h"
#include "insertsort.h"
#include "mergesort.h"
#include "quicksort.h"
#include <ctime>

using std::vector;
using std::ifstream;
using std::string;
using std::cout;
using std::cin;

vector<int> get_input_data();
void sorting_test();
void random_test(int number);
void increasing_test(int number);
void decreasing_test(int number);

int number_of_ints;

int main()
{
    // Run the test on the small integer file
    sorting_test();

    // Run the test on the random integers
    random_test(number_of_ints);

    // Run the test on the increasing integers
    increasing_test(number_of_ints);

    // Run the test on the decreasing integers
    decreasing_test(number_of_ints);    	
}

void test(int type, int number_of_ints)
{
	vector<int> test_vector;
	
	switch(type)
	{
		// Random
		case 0:
			for(int 1 = 0; i <= number_of_ints - 1; i++)
			{
				int random = rand() % 100;
				test_vector.push_back();	
			}
		
		// Increasing
		case 1:
		
		// Decreasing
		case 2:
			
	}
}

void random_test(int number)
{
    // Random integer vectors
    vector<int> random_10k;
    vector<int> random_100k;
    vector<int> random_1m;

    for(int i = 0; i <= 9999; i++)
    {
        int random = rand() % 100;
        random_10k.push_back(random);
    }

    for(int i = 0; i <= 99999; i++)
    {
        int random = rand() % 100;
        random_100k.push_back(random);
    }

    for(int i = 0; i <= 999999; i++)
    {
        int random = rand() % 100;
        random_1m.push_back(random);
    }

    vector<int> heap_10k = random_10k;
    vector<int> insert_10k = random_10k;
    vector<int> merge_10k = random_10k;
    vector<int> quick_10k = random_10k;
    
    vector<int> heap_100k = random_100k;
    vector<int> insert_100k = random_100k;
    vector<int> merge_100k = random_100k;
    vector<int> quick_100k = random_100k;

    vector<int> heap_1m = random_1m;
    vector<int> insert_1m = random_1m;
    vector<int> merge_1m = random_1m;
    vector<int> quick_1m = random_1m;

    clock_t start;
    clock_t stop;

	if (number <= 10000)
	{
		// 10k sorts
		start = clock();
		heapsort<int>(heap_10k);
		stop = clock();
		cout << "runtime heap 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		mergeSort<int>(merge_10k);
		stop = clock();
		cout << "runtime merge 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		quicksort<int>(quick_10k);
		stop = clock();
		cout << "runtime quick 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		insertionSort<int>(insert_10k);
		stop = clock();
		cout << "runtime insert 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";
	}

////////////////////////////////////////////////////////////////////////////////////////

	if (number > 10000 && number <= 100000)
	{
		// 100k sorts
		start = clock();
		heapsort<int>(heap_100k);
		stop = clock();
		cout << "runtime heap 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		mergeSort<int>(merge_100k);
		stop = clock();
		cout << "runtime merge 100k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		quicksort<int>(quick_100k);
		stop = clock();
		cout << "runtime quick 100k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		insertionSort<int>(insert_100k);
		stop = clock();
		cout << "runtime insert 100k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";
	}

////////////////////////////////////////////////////////////////////////////////////////

	if (number > 100000 && number <= 1000000)
	{
		// 1m sorts
		start = clock();
		heapsort<int>(heap_1m);
		stop = clock();
		cout << "runtime heap 1m: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		mergeSort<int>(merge_1m);
		stop = clock();
		cout << "runtime merge 1m: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		quicksort<int>(quick_1m);
		stop = clock();
		cout << "runtime quick 1m: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		insertionSort<int>(insert_1m);
		stop = clock();
		cout << "runtime insert 1m: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";
	}
}

void increasing_test()
{
    // Increasing integer vectors
    vector<int> increasing_10k;
    vector<int> increasing_100k;
    vector<int> increasing_1m;

    for(int i = 0; i <= 9999; i++)
    {
        increasing_10k.push_back(i);
    }

    for(int i = 0; i <= 99999; i++)
    {
        increasing_100k.push_back(i);
    }

    for(int i = 0; i <= 999999; i++)
    {
        increasing_1m.push_back(i);
    }

    vector<int> heap_10k = increasing_10k;
    vector<int> insert_10k = increasing_10k;
    vector<int> merge_10k = increasing_10k;
    vector<int> quick_10k = increasing_10k;
    
    vector<int> heap_100k = increasing_100k;
    vector<int> insert_100k = increasing_100k;
    vector<int> merge_100k = increasing_100k;
    vector<int> quick_100k = increasing_100k;

    vector<int> heap_1m = increasing_1m;
    vector<int> insert_1m = increasing_1m;
    vector<int> merge_1m = increasing_1m;
    vector<int> quick_1m = increasing_1m;

    clock_t start;
    clock_t stop;    

    	if (number <= 10000)
	{
		// 10k sorts
		start = clock();
		heapsort<int>(heap_10k);
		stop = clock();
		cout << "runtime heap 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		mergeSort<int>(merge_10k);
		stop = clock();
		cout << "runtime merge 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		quicksort<int>(quick_10k);
		stop = clock();
		cout << "runtime quick 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		insertionSort<int>(insert_10k);
		stop = clock();
		cout << "runtime insert 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";
	}

////////////////////////////////////////////////////////////////////////////////////////

	if (number > 10000 && number <= 100000)
	{
		// 100k sorts
		start = clock();
		heapsort<int>(heap_100k);
		stop = clock();
		cout << "runtime heap 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		mergeSort<int>(merge_100k);
		stop = clock();
		cout << "runtime merge 100k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		quicksort<int>(quick_100k);
		stop = clock();
		cout << "runtime quick 100k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		insertionSort<int>(insert_100k);
		stop = clock();
		cout << "runtime insert 100k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";
	}

////////////////////////////////////////////////////////////////////////////////////////

	if (number > 100000 && number <= 1000000)
	{
		// 1m sorts
		start = clock();
		heapsort<int>(heap_1m);
		stop = clock();
		cout << "runtime heap 1m: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		mergeSort<int>(merge_1m);
		stop = clock();
		cout << "runtime merge 1m: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		quicksort<int>(quick_1m);
		stop = clock();
		cout << "runtime quick 1m: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		insertionSort<int>(insert_1m);
		stop = clock();
		cout << "runtime insert 1m: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";
	}

}

void decreasing_test()
{
    // Decreasing integer vectors
    vector<int> decreasing_10k;
    vector<int> decreasing_100k;
    vector<int> decreasing_1m;

    for(int i = 9999; i >= 0; i--)
    {
        decreasing_10k.push_back(i);
    }

    for(int i = 99999; i >= 0; i--)
    {
        decreasing_100k.push_back(i);
    }

    for(int i = 999999; i >= 0; i--)
    {
        decreasing_1m.push_back(i);
    }

    vector<int> heap_10k = decreasing_10k;
    vector<int> insert_10k = decreasing_10k;
    vector<int> merge_10k = decreasing_10k;
    vector<int> quick_10k = decreasing_10k;
    
    vector<int> heap_100k = decreasing_100k;
    vector<int> insert_100k = decreasing_100k;
    vector<int> merge_100k = decreasing_100k;
    vector<int> quick_100k = decreasing_100k;

    vector<int> heap_1m = decreasing_1m;
    vector<int> insert_1m = decreasing_1m;
    vector<int> merge_1m = decreasing_1m;
    vector<int> quick_1m = decreasing_1m;

    clock_t start;
    clock_t stop;    

    	if (number <= 10000)
	{
		// 10k sorts
		start = clock();
		heapsort<int>(heap_10k);
		stop = clock();
		cout << "runtime heap 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		mergeSort<int>(merge_10k);
		stop = clock();
		cout << "runtime merge 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		quicksort<int>(quick_10k);
		stop = clock();
		cout << "runtime quick 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		insertionSort<int>(insert_10k);
		stop = clock();
		cout << "runtime insert 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";
	}

////////////////////////////////////////////////////////////////////////////////////////

	if (number > 10000 && number <= 100000)
	{
		// 100k sorts
		start = clock();
		heapsort<int>(heap_100k);
		stop = clock();
		cout << "runtime heap 10k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		mergeSort<int>(merge_100k);
		stop = clock();
		cout << "runtime merge 100k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		quicksort<int>(quick_100k);
		stop = clock();
		cout << "runtime quick 100k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		insertionSort<int>(insert_100k);
		stop = clock();
		cout << "runtime insert 100k: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";
	}

////////////////////////////////////////////////////////////////////////////////////////

	if (number > 100000 && number <= 1000000)
	{
		// 1m sorts
		start = clock();
		heapsort<int>(heap_1m);
		stop = clock();
		cout << "runtime heap 1m: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		mergeSort<int>(merge_1m);
		stop = clock();
		cout << "runtime merge 1m: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		quicksort<int>(quick_1m);
		stop = clock();
		cout << "runtime quick 1m: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";

		start = clock();
		insertionSort<int>(insert_1m);
		stop = clock();
		cout << "runtime insert 1m: " << double(stop-start)/double(CLOCKS_PER_SEC) << "\n";
	}
}


// This will sort the vector (given by user) using the 4 different methods 
void sorting_test()
{
    vector<int> original = get_input_data();
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


vector<int> get_input_data()
{
    ifstream input_file;
    string file_name;

    cout << "Please enter a file name to process\n";
    cin >> file_name;

    input_file.open(file_name.c_str());

    while (input_file.fail())
    {
        cout << "Error opening file, try again" << "\n";
        cin >> file_name;
        input_file.open(file_name.c_str());        
    }
	
	cout << "Enter number of integers\n"
	cin >> number_of_ints;

    string line;

    vector<int> ints;

    while(getline(input_file, line))
    {
        //cout << line << "/n";
        ints.push_back(stoi(line));
    }

    return ints;
}