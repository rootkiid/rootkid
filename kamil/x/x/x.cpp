// x.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	int a, b, c,d,z,x,y,u,o,n;
	cin >> a;
	while (a % 2 == 0)
	{
		cout << "Podaj liczbe nieparzysta : ";
		cin >> a;
	}
	d =a;
	z = a - 2;
	x = a / 2+1;
	int i;
	i = a;
	while (a > x)
	{
		
		c = d - a;
	for (b =0 ; b <c; b++)
	{ cout << " ";}
	cout << "x";
	for (double f =z; f >0; f=f-1)
	{
		cout << " ";
	
	}
	cout << "x" << endl;
	a--;
	z = z - 2;
	}	
		
	for (b = 0; b < a-1; b++)
	{cout << " ";

	} 
	cout << "x" << endl;

	int k;
	k = 1;
	i = i / 2+1;
	u = i;
	o = i;
	n = i - 1;
	
	while (k<i)
	{
		
		u = o;
		
		while (u > 2)
	{
		cout << " ";
			u--;
	}cout << "x";
	int m = 0;
	while (m <i-n )
	{
		cout << " ";
		m++;
	}cout << "x" << endl;
	k++;
	o--;
	n=n-2;
	
	




	}
	

	
	

    return 0;
}

