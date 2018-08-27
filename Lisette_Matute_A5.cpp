/*
subject:Lisette_Matute_A5.cpp
purpose: This program uses looping structures to display 
		illustrations.
author:lmatute
date:3/31/16
*/
#include <iostream>
using namespace std; 

int main()
{ 
	//shape 1

	for (int row =0; row < 5; row++)
	{
		for (int col=0; col<13; col++)
		{
			cout <<"*"; 
		}
		
		cout<<endl; 
	}
	
	cout<<endl<<endl;
	
	//shape 2 

	for (int row=1; row<10; row++)
	{
		for (int col=1; col < 11-row; col++)
		{
			cout << col << "  ";		
		}
		
		cout<<endl; 
	}

	cout<<endl<<endl;
	
	//shape 3

	for (int row=0; row<7; row++)
	{
		for (int col=0; col<12;col++)
		{
			if (row==0 || row==6)

					cout<<"=";

			else if (col==0 || col ==11)

				cout<< "*";
			 
			 else 
				cout<<" "; 	
		}
		
		cout<<endl;
	}
	
	system ("pause");
	return 0;
}