// BUBBLE SORT:-
// Repeatedly swap two adjacent elements if they are in wrong order.
// L>=R
// n no. of elements then n-1 iteration if n=6 iteration 6-1=5;
// 1st iteration till last= n-1 , n-2 , n-3 , n-4 , n-5

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

    int counter = 1;
    while (counter < n)
    {
        for (int i = o; i < n - counter; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
        counter++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }

    return 0;
}

// Q. why we called it as bubble sort:-
// Max. element woh bubble ki tarah upar ajata hai becoz like balloon it is lighter it lifts up.


// ANALYSIS:
// 1]time complexity:best-O(N) , worst-O (n2) , average- O(n2)

// 2]space complexity:O(1)

// 3]stability:- yes

// 4]type of sorting:- Comparison

// 5]remarks:Not a preferred sorting algorithm

// 6]by default- Not adaptive