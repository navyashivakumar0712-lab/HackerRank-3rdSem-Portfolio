#include <bits/stdc++.h>
using namespace std;

// Function to process the dynamic array queries
vector<int> dynamicArray(int n, vector<vector<int>> queries) {

    // Create n empty sequences
    vector<vector<int>> seqList(n);

    // Stores the previous answer
    int lastAnswer = 0;

    // Stores the answers for type 2 queries
    vector<int> result;

    // Process every query
    for (auto query : queries) {

        int type = query[0];
        int x = query[1];
        int y = query[2];

        // Find the sequence index using x and lastAnswer
        int index = (x ^ lastAnswer) % n;

        if (type == 1) {

            // Append y to the selected sequence
            seqList[index].push_back(y);

        } else if (type == 2) {

            // Find the required element using modulo
            int position = y % seqList[index].size();

            // Update lastAnswer
            lastAnswer = seqList[index][position];

            // Store the answer
            result.push_back(lastAnswer);
        }
    }

    return result;
}
