#include <iostream>
#include"sum.h"
#include"dif.h"
#include<cmath>
#include"prod.h"
using namespace std;

int main()
{
	cout<<"Hello world"<<endl;
	cout<<"Sum of "<<12<<" and "<<23<<" is "<<sum(12,23)<<endl;
	cout<<"Difference of "<<12<<" and "<<23<<" is "<<dif(12,23)<<endl;
	cout<<"Product of "<<12<<" and "<<23<<" is "<<prod(12,23)<<endl;
	cout<<12<<" and "<<23<<" is "<<pow(12,23)<<endl;
}