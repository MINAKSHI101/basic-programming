#include<iostream>
using namespace std;

int main() {
    int num, rem, temp, product = 1, sum = 0, count = 0;
    cin >> num;
    temp = num;

    while (temp != 0) {
        count += 1;
        temp = temp / 10;
    }

    temp = num; // Reset temp to the original value of num

    while (temp != 0) {
        rem = temp % 10;
        product = (rem**count);

        sum = sum + product;
        temp = temp / 10;
    }

    if (num == sum) {
        cout << num << " is an Armstrong number";
    } else {
        cout << num << " is not an Armstrong number";
    }

    return 0;
}