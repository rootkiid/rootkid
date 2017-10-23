#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n,b;
    cout<<"podaj n"<<endl;
    cin>>n;
    int tabx[n],taby[n];

    if (n>0)
    {
        {
        int i=0;
        while(i<=n-1)
        {
            tabx[i]=i+1;
            i++;
        }
        }
        {
        int i=0;
        while(i<=n-1)
        {
            taby[i]=i+1;
            i++;
        }
        }

        {
            int a=0;
            while(a<n)
            {
                int i=0;
                while(i<n)
                {
                    cout<<setw(10)<<taby[a]*tabx[i];
                    i++;
                }
                a++;
                cout<<endl;
            }
        }





    }
    else
cout<<"podaj n nieujemne: "<<endl;

    return 0;
}
