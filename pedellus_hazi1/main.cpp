#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    for(int i=0; i<n; i++){
        cin >> b[i];
    }
    int Sa=0, Sb=0;
    for(int i=0; i<n; i++){
        if(a[i]%2==0){
            Sa += a[i];
        }
    }
    for(int i=0; i<n; i++){
        if(b[i]%2==1){
            if(Sb+b[i]<Sa){
                Sb += b[i];
            }
        }
    }
    cout << Sb;
    return 0;
}
