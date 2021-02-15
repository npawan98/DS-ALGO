// C++ program for the above approach
#include <iostream>
using namespace std;

// Function to find the minimum operations
// required to get the given string after
// appending m or n characters from the end
// to the front of the string in each operation
int minimumOperations(string orig_str, int m, int n)
{
	
	// Store the original string
	string orig = orig_str;
	
	// Stores the count of operations
	int turn = 1;
	int j = 1;

	// Traverse the string
	for(auto i : orig_str) 
	{
		
		// Cut m letters from end
		string m_cut = orig_str.substr(
			orig_str.length() - m);

		orig_str.erase(orig_str.length() - m);

		// Add cut m letters to beginning
		orig_str = m_cut + orig_str;

		// Update j
		j = j + 1;

		// Check if strings are the same
		if (orig != orig_str)
		{
			turn = turn + 1;

			// Cut n letters from end
			string n_cut = orig_str.substr(
				orig_str.length() - n);
			orig_str.erase(orig_str.length() - n);

			// Add cut n letters to beginning
			orig_str = n_cut + orig_str;

			// Update j
			j = j + 1;
		}

		// Check if strings are the same
		if (orig == orig_str)
		{
			break;
		}

		// Update the turn
		turn = turn + 1;
	}
	cout << turn;
}

// Driver Code
int main()
{
	
	// Given string S
	string S = "GeeksforGeeks";

	int X = 5, Y = 3;

	// Function Call
	minimumOperations(S, X, Y);
	return 0;
}

// This code is contributed by akhilsaini
