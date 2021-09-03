#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void selectionSort(int*A, int n)
{
    int temp, min_index;
    for(int i=0; i<n-1; i++)
    {
        min_index = i;
        for(int j=i+1; j<n; j++)
        {
            if(*(A+j)<=*(A+min_index))
            {
                min_index = j;
            }
        }
        temp = *(A+i);
        *(A+i) = *(A+min_index);
        *(A+min_index) = temp;
    }
}

void printArray(int *A, int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<*(A+i)<<" ";
    }
}


int main()
{
    int A[16] = {3,2,1,4,7,5,99,101,2,1,1,1,3,3,4,4};
    printArray(A, 16);
    selectionSort(A, 16);
    cout<<endl;
    printArray(A, 16);
}
