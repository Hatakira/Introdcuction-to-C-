#include <iostream>

using namespace std;

/*
Write a program that outputs “Hello, World!” n times (where n is a nonnegative integer
that the user will input) with:
    • a for loop.
    • a while loop.
    • a do...while loop 
*/

const char*text = "Hello,World!";

int main(){

    cout << "Please enter a non negative intager: \n";
    int n;
    cin >> n;

    cout << "This is Hello, World! in a for loop " << n << " times. \n";

    for (int j = 1;j <= n ; j++){
    cout << text << "\n";
    }

    cout << "This is Hello World! in a while loop " << n << " times. \n";

    int k = 1;

    while (k <= n){
        
        cout << text << "\n";
        k++;
    }

    cout << "This is Hello World! in a do...while loop " << n << " times. \n";

    int l = 1;

    do{
        cout << text << "\n";
        l++;
    } while(l <= n);

    return 0;
}
