#include <bits/stdc++.h>
using namespace std;

// Function to count how many times each query
// string occurs in the original string list
vector<int> matchingStrings(vector<string> strings,
                            vector<string> queries) {

    vector<int> result;

    // Process each query string
    for (string query : queries) {

        int count = 0;

        // Compare the query with every string
        for (string str : strings) {

            // Increase the count when a match is found
            if (str == query) {
                count++;
            }
        }

        // Store the count for this query
        result.push_back(count);
    }

    return result;
}
