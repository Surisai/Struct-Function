#include <iostream>
using namespace std;

int main() {
    // Step 1: define the array
    int arr[6] = {12, 5, 7, 20, 3, 15};
    int size = 6;

    // Step 2: print the array
    cout << "Array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 3: variables to track max, min, and average
    int maxVal = arr[0];
    int minVal = arr[0];
    int maxIndex = 0;
    int minIndex = 0;
    int sum = 0;

    // Step 4: loop through the array
    for (int i = 0; i < size; i++) {
        // : update maxVal and maxIndex
        if (arr[i] > maxVal){
            maxVal = arr[i];
            maxIndex = i;
        }
        // update minVal and minIndex
        if(arr[i] < minVal){
            minVal = arr[i];
            minIndex = i;
        }
        //  add arr[i] to sum
        sum += arr[i];
    }

    // Step 5: calculate average
    float average = (float) sum/size; // TODO: compute average properly

    // Step 6: print results
    cout << "Maximum value = " << maxVal << " at index " << maxIndex << endl;
    cout << "Minimum value = " << minVal << " at index " << minIndex << endl;
    cout << "Average value = " << average << endl;

    return 0;
}