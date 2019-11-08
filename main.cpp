// C++ program to count all substrings with same
// first and last characters.
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

// Returns true if first and last characters
// of s are same.
int checkEquality(string s)
{
    return (s[0] == s[s.size() - 1]);
}

int countGoalSubstrings(string s)
{
    int result = 0;
    int n = s.length();

    // Starting point of substring
    for (int i = 0; i < n; i++)

        // Length of substring
        for (int len = 1; len <= n-i; len++)

            // Check if current substring has same
            // starting and ending characters.
            if (checkEquality(s.substr(i, len)))
                result++;

    return result;
}

// Driver function
int main()
{
    string STRING;
    ifstream infile;
    infile.open ("../demofile.txt");

    while(getline(infile, STRING)) {
        getline(infile,STRING);

    }

    infile.close();
    cout << countGoalSubstrings(STRING);
    return 0;
}

