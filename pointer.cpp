//
// Created by Minh Hải Metal on 20/9/24.
//

#include <iostream>
using namespace std;

int main()
{
    int x = 10;

    // Tạo pointer ptr
    int* ptr;
    // ptr sẽ lấy địa chỉ của x
    ptr = &x;

    // In giá trị của x
    cout << "Gia tri cua bien x: " << x << endl;

    // In giá trị pointer ptr
    cout << "Gia tri pointer ptr: " << *ptr << endl;

    // Thay đổi giá trị biến x
    x = 5;

    // In giá trị của x
    cout << "Gia tri cua bien x: " << x << endl;

    // In giá trị pointer ptr
    cout << "Gia tri pointer ptr: " << *ptr << endl;

    // In giá trị của x
    cout << "Gia tri cua bien x: " << ++x << endl;

    // In giá trị pointer ptr
    cout << "Gia tri pointer ptr: " << *ptr << endl;
}