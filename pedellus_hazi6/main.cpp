#include <iostream>

using namespace std;

int main()
{
    int n;
    float szamlalo=0, atlag, osszeg=0;
    cin >> n;
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> a[i][j];
            if(i<j && a[i][j]>0)
            {
                szamlalo++;
                osszeg+=a[i][j];
            }
        }
    }
    if(szamlalo!=0)
    {
        cout << osszeg/szamlalo;
    }
    else
    {
        cout << "Nincs";
    }
    return 0;
}
