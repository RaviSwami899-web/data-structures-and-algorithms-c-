#include<iostream>
#include<bits/stdc++.h>

using namespace std;

float* findVoltage(int startTime, int endTime, float E, float R, float C){
float voltage;
float *result = new float[((endTime-startTime)/2)+1];

int it = 0;
for(int t=startTime; t<=endTime; t+=2){
    voltage = E*(1-pow(2.71828,-t/(R*C)));
    result[it] = voltage;
    it++;
}
return result;
}

int main()
{
    int a = 0, b = 60;
    float *voltage_values = findVoltage(a, b, 50, 4000, 0.005);
    int t=0;
    for(int i = 0; i<=30; i++){
        cout<<"at t="<<t<<", voltage="<<voltage_values[i]<<endl;
        t+=2;
    }
}
