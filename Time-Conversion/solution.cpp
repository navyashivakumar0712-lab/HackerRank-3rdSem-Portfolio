#include <bits/stdc++.h>
using namespace std;

// Function to convert 12-hour time format
// into 24-hour time format
string timeConversion(string s) {

    // Extract AM or PM from the input
    string period = s.substr(8, 2);

    // Extract the hour from the input
    int hour = stoi(s.substr(0, 2));

    // Handle PM
    if (period == "PM") {

        // Add 12 to the hour except for 12 PM
        if (hour != 12) {
            hour += 12;
        }
    }

    // Handle 12 AM
    if (period == "AM") {

        // Convert 12 AM to 00
        if (hour == 12) {
            hour = 0;
        }
    }

    // Convert the hour back to two-digit format
    stringstream ss;
    ss << setw(2) << setfill('0') << hour;

    // Replace the original hour
    s.replace(0, 2, ss.str());

    // Remove AM/PM from the string
    s.erase(8, 2);

    return s;
}
