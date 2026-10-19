## C++ Program: Array Manipulation Using Switch Case

```cpp
#include <iostream>
using namespace std;

int main() {
    int a[100], b[100], n, choice;
    int sum, product;
    
    cout << "Enter size of arrays: ";
    cin >> n;

    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n; i++)
        cin >> b[i];

    cout << "\n1. Addition of two arrays";
    cout << "\n2. Subtraction of two arrays";
    cout << "\n3. Multiplication of array elements";
    cout << "\n4. Find largest and smallest element";
    cout << "\n5. Average of two numbers";
    cout << "\nEnter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Addition: ";
            for (int i = 0; i < n; i++)
                cout << a[i] + b[i] << " ";
            break;

        case 2:
            cout << "Subtraction: ";
            for (int i = 0; i < n; i++)
                cout << a[i] - b[i] << " ";
            break;

        case 3:
            cout << "Multiplication: ";
            for (int i = 0; i < n; i++)
                cout << a[i] * b[i] << " ";
            break;

        case 4: {
            int largest = a[0], smallest = a[0];

            for (int i = 1; i < n; i++) {
                if (a[i] > largest)
                    largest = a[i];

                if (a[i] < smallest)
                    smallest = a[i];
            }

            cout << "Largest element: " << largest;
            cout << "\nSmallest element: " << smallest;
            break;
        }

        case 5: {
            float x, y;
            cout << "Enter two numbers: ";
            cin >> x >> y;
            cout << "Average: " << (x + y) / 2;
            break;
        }

        default:
            cout << "Invalid choice!";
    }

    return 0;
}
```

