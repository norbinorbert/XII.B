#include <iostream>

using namespace std;

int main()
{
    int n, P=1, S=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        P=1;
        for(int j=1; j<=i; j++){
            P *= j;
        }
        if(i%2!=0){
            S += P;
        }
        if(i%2==0){
            S -= P;
        }
    }
    cout << S;
    return 0;
}
