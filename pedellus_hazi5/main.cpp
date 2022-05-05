#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("input.txt");
    ofstream out("output.txt");
    int n;
    double szamlalo1=0, osszeg1=0, szamlalo2=0, osszeg2=0;
    double atlag1, atlag2;
    in >> n;
    int a[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            in >> a[i][j];
            if(i>j && a[i][j]>0)
            {
                szamlalo2++;
                osszeg2+=a[i][j];
            }
            if(i<j && a[i][j]>0)
            {
                szamlalo1++;
                osszeg1+=a[i][j];
            }
        }
    }
    if(szamlalo1!=0 && szamlalo2!=0)
    {
        atlag1 = osszeg1/szamlalo1;
        atlag2 = osszeg2/szamlalo2;
        out << atlag1 - atlag2;
    }
    else if(szamlalo1==0)
    {
        out << -osszeg2/szamlalo2;
    }
    else if(szamlalo2==0)
    {
        out << osszeg1/szamlalo1;
    }
    else
    {
        out << 0;
    }
    return 0;
}
