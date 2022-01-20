// // SELECTION SORT:-
// // find the min. element in unsorted array & swap it with element at bbeginning

// eg- 12 , 45 , 23 , 51 , 19 , 8
// sort:-1] find min element then swap
//     8 , 45 , 23 , 51 , 19 , 12
//     8 , 12 , 23 , 51 , 19 , 45
//     8 , 12 , 19 , 51 , 23 , 45
//     8 , 12 , 19 , 23 , 51 , 45
//     8 , 12 , 19 , 23 , 45 , 51

// in this we use 2 loops one loop is i which starts from 1st element to second last element and other loop j which runs from second element to last element,and then we compare if we find any small element then we swap.

// code:-

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    // take user se input:-
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // 2 loops:-
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 1; i < n; j++)
        {
            if (arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
            
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " "<<endl;

    }
    
    return  0;
    

}


// ANALYSIS:
// 1]time complexity:O(n2) for all cases

// 2]space complexity:0(1)

// 3]stability:-Yes, it  is stable

// 4]type of sorting:-Comparison

// 5]remarks:even a perfectly sorted array require scanning the entire array.