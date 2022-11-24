#include <iostream>
using namespace std;

int main()
{
    int liczba_testow, segmenty, nogi, bufor;
    cin>>liczba_testow;
    while(liczba_testow>0)
    {
        cin>>segmenty;
        bufor = 0;
        for(int i=0; i<segmenty; i++)
        {
            cin>>nogi;
            bufor = bufor + nogi;
        }
        cout<<bufor+(segmenty-1)<<endl;
        liczba_testow--;
    }
    return 0;
}
