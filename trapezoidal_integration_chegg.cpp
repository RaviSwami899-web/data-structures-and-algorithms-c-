#include<iostream>
#include<bits/stdc++.h>
#include<math.h>

using namespace std;
/* Define function here */
#define f(x) 9*cos(x)

float trapezoids_integration(float lower, float upper, int subInterval){
float integration, stepSize, k;
int i;

stepSize = (upper - lower)/subInterval;
 /* Finding Integration Value */
integration = f(lower) + f(upper);

for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*stepSize;
  integration = integration + 2 * (f(k));
 }
integration = integration * stepSize/2;
/* round of result to 6 decimals*/
float result = (int)(integration * 1000000 + .5);
return (float)result/1000000;
}

int main()
{
 float lower=0, upper=1.05;
 int i, subInterval=5;
 vector<int> subIntervals = {5,50,500,5000,50000};

 for(int sub_interval: subIntervals){
    cout<< endl<<"Required value of integration for subInterval "<<sub_interval<<": ";
    cout<<trapezoids_integration(lower, upper, sub_interval);
 }
 return 0;
}
