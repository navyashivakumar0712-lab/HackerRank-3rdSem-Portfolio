#include <bits/stdc++.h>
using namespace std;

// Function to compare the scores of Alice and Bob
vector<int> compareTriplets(vector<int> a, vector<int> b) {

    // Store Alice's and Bob's scores
    int aliceScore = 0;
    int bobScore = 0;

    // Compare the corresponding scores
    for (int i = 0; i < 3; i++) {

        // Alice gets one point if her score is higher
        if (a[i] > b[i]) {
            aliceScore++;
        }

        // Bob gets one point if his score is higher
        else if (a[i] < b[i]) {
            bobScore++;
        }

        // No points are awarded if both scores are equal
    }

    // Return Alice's score followed by Bob's score
    return {aliceScore, bobScore};
}
