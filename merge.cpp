// Merge sort- Based on Divide & conquer algorihm.
// find mid then divide it into two parts call recursively

// CODE:-
#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    // temp arrays
    int a[n1];
    int b[n2];

    for (int i = 0; i < n1; i++)
    {
        a[i] = arr[l + 1];
    }

    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = b[j];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(arr, l ,  mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    int arr[]={5 , 4 , 3 ,2 ,1};
    mergeSort(arr , 0 ,4);

for (int i = 0; i < 5; i++)
{
    cout<< arr[i]<< " "<<endl;
}

return 0;
}


    // ANALYSIS:
    // 1]time complexity: O(n log n)

    // 2]space complexity: O(n)

    // 3]stability:Yes

    // 4]type of sorting:-Comparison

    // 5]remarks:On arrays it require o(n) space and on L.L it requires constant space