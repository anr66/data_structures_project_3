#include <vector>
#include <iostream>
#include <fstream>

#include "heapsort.h"
#include "insertsort.h"
#include "mergesort.h"
#include "quicksort.h"

using std::vector;
using std::ifstream;
using std::string;
using std::cout;
using std::cin;

vector<int> get_input_data();

int main()
{
	vector<int> test_ints = get_input_data();

    cout << "Vector before heap sort: ";
    for(vector<int>::iterator iter = test_ints.begin(); iter != test_ints.end(); iter++)
    {
        cout << *iter << " ";
    }

    cout << "Vector after heap sort: ";
    heapsort(&test_ints);

    cout << "Vector before merge sort: ";
    //mergeSort(&test_ints);


    cout << "Vector after merge sort: ";

    cout << "Vector before quick sort: ";
    quicksort(&test_ints);

    cout << "Vector after quick sort: ";

    cout << "Vector before insertion sort: ";
    cout << "Vector after insertion sort: ";
	
	
	
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

    string line;

    vector<int> ints;

    while(getline(input_file, line))
    {
        ints.push_back(stoi(line));
    }

    return ints;
}