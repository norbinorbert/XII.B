#include <iostream>

using namespace std;

int main()
{
    int n, k, ans = 0;
    cin >> n >> k;
    int v[n];
    for(int i=0; i<n; i++){
        cin >> v[i];
        int szamlalo = 0;
        while(v[i]>0){
            v[i] /= 10;
            szamlalo++;
        }
        if(szamlalo>k){
            ans++;
        }
    }
    cout << ans;
    return 0;
}
