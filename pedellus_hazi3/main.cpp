#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            a[i][j] = ((i+1)*(j+1))%10;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
