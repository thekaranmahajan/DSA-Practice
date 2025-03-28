#include<iostream>
using namespace std;

int main()
{
    int num = 10;
    int *ptr_num = &num; // Pointer to num

    cout << "Value of num: " << num << endl; // Output: 5
    cout << "Address of num: " << &num << endl; // Output: Address of num
    cout << "Value of ptr_num: " << ptr_num << endl; // Output: Address of num
    cout << "Value pointed to by ptr_num: " << *ptr_num << endl; // Output: 5

}