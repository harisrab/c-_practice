#include <string.h>
#include <iostream>
#include <math.h> /* modf */


using namespace std;

struct timeStruct
{
    int hours;
    int minutes;
    int seconds;
};

timeStruct inputTime()
{
    // A function for taking input of time and processing the time.
    // Seperate: hh:mm:ss -> Return: (h, m, s)

    string raw_time;

    cout << "Enter time elapsed (HH:MM:SS): ";
    cin >> raw_time;

    cout << "Static Type Cast ==> " << raw_time[0] - 48 << endl;

    int hours = (raw_time[0] - 48) * 10 + (raw_time[1] - 48);
    int minutes = (raw_time[3] - 48) * 10 + (raw_time[4] - 48);
    int seconds = (raw_time[6] - 48) * 10 + (raw_time[7] - 48);

    timeStruct cleanedTime = {
        hours,
        minutes,
        seconds

    };

    return cleanedTime;
};

auto chunkCalc(int hours, int minutes, int seconds)
{
    double totalMins = (hours * 60.0) + minutes + (seconds / 60.0);
    cout << "Total minutes: " << totalMins;
}
// A function to calculate the number of complete 10 min chunks.
// And the partial duration that didn't complete 10 mins.
// Return: (chunks, total time being charged for, time uncharged)

// Input: (chunks of time)
// Output: the total charge -> (total price)

// Main Function: Loops the input of time, processing, charge calculation.
// Main Function finally prints out the "TIME UNCHARGED", "TOTAL MONEY TO BE PAID"
// Print Output: (Money to be paid, Uncharged duration)

int main()
{
    cout << "Hello World!" << endl;
    auto time = inputTime();

    chunkCalc(time.hours, time.minutes, time.seconds);

    return 0;
}