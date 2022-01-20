// // INSERTION SORT:-
// // Insert an element from unsorted array to its correct position in sorted array.

// eg : -12, 45, 23, 51, 19, 8
// 12, 45, 23, 51, 19, 8
// 12, 23, 45, 51, 19, 8
// 12, 23, 45, 51, 19, 8
// 12, 19, 23, 45 ,51, 8
// 8, 12 ,19 ,23 ,45 ,51

// CODE:-
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    // take user se input:-
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; n; i++)
    {
        int current = arr[i];
        int j = i - 1;
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
    return 0;
}

// ANALYSIS:
// 1]time complexity:best case O(n) worst and average case-O(n2)

// 2]space complexity:O(1)

// 3]stability:Yes, it is stable.

// 4]type of sorting:-comparison

// 5]remarks:in the best case already sorted

// 6]Adaptive:-by designing only
