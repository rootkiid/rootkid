#include <iostream>
#include <math.h>

using namespace std;

float a,b,c,x1,x2,delta, delta1;
char i=i;

int main()
{
    cout << "Twoja funkcja: ax^2+bx+c=0 podaj a,b,c: " << endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout<<"twoja funcja: "<<a<<"x^2 + "<<b<<"x + "<<c<<endl;

    if(a==0)
    {
        x1= -c/b;
        cout<<"x = "<<x1<<endl;
        return 0;
    }
    else if(a==0 && b==0)
    {
        if(c==0)
        {
         cout<<"zawsze prawdziwy"<<endl;
         return 0;
        }
        else
        {
            cout<<"sprzeczne!"<<endl;
            return 0;
        }
    }

    if(a != 0)
    {
        delta=(b*b)-(4*a*c);

        if(delta>0)
        {
        x1= (-b-sqrt(delta))/2*a;
        x2= (-b+sqrt(delta))/2*a;

        cout<<"twoje miejsca zerowe: "<<x1<<" , "<<x2<<endl;
        return 0;

        }
        else if(delta==0)
        {
            cout<<"jedno miejsce zerowe: "<<-b/2*a<<endl;
            return 0;
        }
        else if(delta<0)
        {
            delta1=sqrt(delta*(-1));

            cout<<"twoje miejsca zerowe urojone: "<<-b/2*a<<" - "<<delta1/2*a<<"i"<< endl;
            cout<<"twoje miejsca zerowe urojone: "<<-b/2*a<<" + "<<delta1/2*a<<"i"<< endl;
        return 0;
        }
    }

    return 0;
}
