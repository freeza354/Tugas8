#include <iostream>

using namespace std;

int main()
{
    int a;
    float Nplus=0, totP=0, totM=0, Nmin=0;
    cout << "How much number do you want :";
    cin >> a;
    int arr[a];
    cout << "Input your number :" << endl;
    for (int b=0; b<=a-1; b++){
        cin >> arr[b];
        if (arr[b]>=0){
            totP += arr[b];
            Nplus += 1;
        }
        else {
            totM += arr[b];
            Nmin += 1;
        }
    }
    float totmin = totM/Nmin;
    float totplus = totP/Nplus;
    cout << "Average of negative number: " << totmin << endl;
    cout << "Average of positive number: " << totplus;
    return 0;
}
