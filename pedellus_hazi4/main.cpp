#include <iostream>

using namespace std;

int main()
{
    string szoveg, szo="", ujszo="", ujszoveg="";
    getline(cin, szoveg);
    bool letezik = false;
    for(int i=0; i<szoveg.size(); i++)
    {
        if(szoveg[i]!=' ')
        {
            szo += szoveg[i];
        }
        if(szoveg[i]==' ' || i==szoveg.size()-1)
        {
            if(szo.size()%2==1)
            {
                ujszo="";
                for(int j=szo.size()-1; j>=0; j--)
                {
                    ujszo+=szo[j];
                }
                if(szo!=ujszo)
                {
                    letezik=true;
                }
                ujszoveg += ujszo;
                ujszoveg += ' ';
            }
            else
            {
                ujszoveg+=szo;
                ujszoveg+=' ';
            }
            szo = "";
        }
    }
    if(letezik)
    {
        cout << ujszoveg;
    }
    else
    {
        cout << "nu exista";
    }
    return 0;
}
