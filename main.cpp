#include <iostream>

#include "std_lib_facilities.h"



/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Yussef Abdelbary
 */


int main()
{
	double a = 0;
	
    double b = 0;
	
    double c = 0;
	
    
    cout << "Please enter a, b and c for the quadratic equation enter the number seperated by spaces ";
	
	while(cin >> a >> b >> c) 
    {			
		double res = 0;
		
        double res2 = 0;
		
        double res3 = 0;

		res3 = pow(b,2)-4*a*c;	
		
		//First condition checking if res is greater then 0 being a real number
		if(res3 > 0)
        {
			
            res = (-b + sqrt(pow(b, 2) -4*a*c))/ 2*a;
			
            res2 = (-b - sqrt(pow(b, 2) -4*a*c))/ 2*a;
			
            cout << "The real roots are " << res << " and " << res2 << '\n';
			
            cout << "Please enter a new operation ";
		}
            //This condition is checking to see if the res is equal to 0 making the roots identical
		    else if(res3 == 0)
            {
			
            res = (-b + sqrt(pow(b, 2) -4*a*c))/ 2*a;
			
            res2 = (-b - sqrt(pow(b, 2) -4*a*c))/ 2*a;
			
            cout << "The two identical roots are both " << res <<'\n';
			
            cout << "Please enter a new operation ";
		    }
            //When the root is less then negative this means the root does not exist or in mathematical terms imaginary
		    else if(res3 < 0)
		{
			cout << "Based on the input there are no current real roots "<< '\n';
			
            cout << "Please input a new operation ";
		}
	}
}