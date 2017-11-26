#include <iostream>

using namespace std;

int pNum(int x){
    int trigger, num=0;
    for (int a=1; a<=x+1; a++){
        if (a!=x){
            if (x%a==0){
                num = num+a;
            }
        }
    }
    if (num != x){
        trigger = 1;
    }
    else {
        trigger = 0;
    }
    return trigger;
}

int main()
{
    int n, output;
    cin >> n;
    output = pNum(n);
    if (output == 1){
        cout << "This is not a perfect number";
    }
    else {
        cout << "This is a perfect number";
    }
    return 0;
}
