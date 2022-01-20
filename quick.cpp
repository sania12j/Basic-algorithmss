// QUICKSORT:-



// CODE:-
#include<iostream>
using namespace std;

void swap(int arr[] , int i , int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[], int l , int r)
{
    int pivot = arr[r];
    int i= l-1;

    for (int j = l; j < r; j++)
    {
        if (arr[i]<pivot)
        {
            i++;
            swap(arr , i , j);
        }
        
    }
    swap(arr , i+1 , r);
    return i+1;
}
void quicksort(int arr[] , int l , int r)
{
    if (l<r)
    {
        int pi=partition(arr , l , r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,r);
    }
    
}


int main()
{
int arr[5]={5 , 4 , 3 ,2 ,1};
    quickSort(arr , 0 ,4);

for (int i = 0; i < 5; i++)
{
    cout<< arr[i]<< " "<<endl;
}

return 0;
}




// ANALYSIS:
// 1]time complexity:best& average=O(n log n) ,    worst-O(n2)

// 2]space complexity:O(log n)
//         inplace algorithm not taking extra space

// 3]stability:Unstable

// 4]type of sorting:- Comparison

// 5]remarks:randomly picking a pivot value can help to avoid worst case remains such as perfectly sorted array