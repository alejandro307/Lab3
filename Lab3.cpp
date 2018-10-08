
//Alejandro Bermudez
//COSC 2030
//Lab 3


#include <iostream>
#include <limits>
#include <cstddef>
using std::cout;
using std::endl;




// An overflow can be detected when the sum gives a negative number. 
//The value of n that produces the overflow is 256
short sum(short n)
{	
	short sum = 0;
	for (int i =0; i <= n; i++)
{
		sum+=i;
	}
cout << "The sum of the consecutive integers 1 through " << n << " is " << sum << endl;
	return sum;

}



// An overflow can be detected when the product gives a negative number. 
//The value of n that produces the overflow is 35
float factorial(long n)
{
	float product = 1;
for (int i =1; i <= n; i++)
{
	product*=i;
}
cout << "The product of the consecutive integers 1 through " << n << " is " << product << endl;
return product;
}

// An overflow can be detected when the output is "inf"
//The value of n that produces the overflow is 171
double factorial(long n)
{
	double product = 1;
	for (int i =1; i <= n; i++)
	{
		product*=i;
	}
	cout << "The product of the consecutive integers 1 through " << n << " is " << product << endl;
	return product;
}





//float sample
//An overflow can be detected when the sum of the ratio does not give 0
//The value of n that produces the overflow is 10
float sumdiv(float n)
{
	float div = 0.0;
	float sum = 0.0;
	for (float i =0; i < n; i++)
	{
		div = 1/n;
		sum+=div;
	}
	sum -= 1.0;
	cout << "The sum of the consecutive ratio (1/n) " << n << " is " << sum << endl;
	return sum;
	
}
 
//An overflow can be detected when the sum of the ratio does not give 0
//The value of n that produces the overflow is 6
//double sumdiv(double n)
//{
//	double div = 0.0;
//	double sum = 0.0;
//	for (int i =0; i < n; i++)
//	{
//		div = 1/n;
//		sum+=div;
//	}
//	sum -= 1.0;
//	cout << "The sum of the consecutive ratio (1/n) " << n << " is " << sum << endl;
//	return sum;
//	
//}

// An overflow can be detected when the sum gives a negative number. 
//The value of n that produces the overflow is ???
// I had to use a way larger number to get an overflow because I was on a mac 
//and a mac uses 8 bits, as opposed to 4bits, as a Windows does.

long sum(long n)
{
	long sum = 0;
	for (int i =0; i <= n; i++)
	{
		sum+=i;
	}
	cout << "The sum of the consecutive integers 1 through " << n << " is " << sum << endl;
	return sum;
	
}


int main()
{
	cout << std::defaultfloat << std::numeric_limits<double>::max();
	cout << " or " << std::hexfloat << std::numeric_limits<double>::max() << endl;
	//sum(254);
	//sum(255);
	sum(1000000000);
	//factorial(34);
	//factorial(35);
	//factorial(170);
	//factorial(171);
//	sumdiv(1000000);
//puzzle
//for(double i = 3.4; i < 4.4; i +=0.2)
//	{
//		cout << "i = " << i << endl;
//	}
}

