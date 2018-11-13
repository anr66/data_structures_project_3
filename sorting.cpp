


int main()
{
	vector<>
	
	
	
}


vector<string> get_input_data()
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

    vector<string> lines;

    while(getline(input_file, line))
    {
        if (line.length() > 0)
        {
            lines.push_back(line);
        }
    }
    
    return lines;
}