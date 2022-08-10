#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int temp = 0;
    int val;
    for (int i = 1; i < n; i++)
    {
        cin >> val;
        temp = temp ^ val ^ i;
    }
    temp = temp ^ n;
    cout << temp;
}