#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream in("atestat.in");
    ofstream out("atestat.out");
    int n;
    bool kiir = false;
    while(in >> n){
        int temp = n;
        bool paros = true;
        while(temp > 0){
            if((temp%10)%2!=0){
                paros = false;
                break;
            }
            if((temp%10)%2==0){
                temp /= 10;
            }
        }
        if(paros){
            out << n << " ";
            kiir = true;
        }
    }
    if(!kiir){
        out << "nem letezik";
    }
    return 0;
}
