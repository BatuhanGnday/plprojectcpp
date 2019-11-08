// C++ program to count all substrings with same
// first and last characters.
#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

// List of goal strings.
vector<string> goals;

// Returns true if first and last characters
// of s are same.
int checkEquality(string s)
{
    return (s[0] == s[s.size() - 1]);
}

vector<string> goalSubstrings(string s){
    vector<string> goals;
    int n = s.length();

    // Starting point of substring
    for (int i = 0; i < n; i++)

        // Length of substring
        for (int len = 1; len <= n-i; len++)

            // Check if current substring has same
            // starting and ending characters.
            if (checkEquality(s.substr(i, len))) {
                // Push the goal strings to the
                // goals vector which has string type.
                goals.push_back(s.substr(i, len));
            }
    return goals;
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

    for(int i = 0; i<goalSubstrings(STRING).size() ; i++){
        cout << goalSubstrings(STRING).at(i) << ", ";
    }
    cout << "\nNum of substrings: " << goalSubstrings(STRING).size();
    return 0;
}

