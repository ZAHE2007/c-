#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_map<int, int> frequency;

    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    cout << "\nFrequency of each element:\n";
    for (auto pair : frequency) {
        cout << pair.first << " occurs " << pair.second << " times\n";
    }

    return 0;
}
🔍 Sample Input:
yaml
Copy
Edit
Enter the number of elements: 6
Enter 6 elements:
1 2 2 3 1 4
📤 Sample Output:
perl
Copy
Edit
Frequency of each element:
1 occurs 2 times
2 occurs 2 times
3 occurs 1 times
4 occurs 1 times
If you want a version that:

Works with strings or characters

Sorts the output

Works without STL (unordered_map)

Just let me know how you'd like to modify it!




Ask ChatGPT

