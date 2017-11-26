#include <iostream>

using namespace std;

int fibonacci(int n){
    int a=1, temp_a=0, average=0;
    for (int b=0; b<=n-1; b++){
        cout << a << endl;
        int savenum = a;
        a += temp_a;
        temp_a = savenum;
        average += temp_a;
    }
    return average;
}

int main()
{
    int x, tot, ave;
    cout << "How many fibonacci number do you want?";
    cin >> x;
    tot = fibonacci(x);
    ave = tot / x;
    cout << "Their average is :" << endl << ave;
    return 0;
}
