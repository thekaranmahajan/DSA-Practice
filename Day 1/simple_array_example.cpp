#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50}; // Array of integers

    for(int i=0; i < 5; i++)
    {
        cout<< "Address of arr[" << i << "]: " << &arr[i] << "," << " Value of arr[" << i << "]: " << arr[i] <<endl; // Address of each element & value of each element
    }
}