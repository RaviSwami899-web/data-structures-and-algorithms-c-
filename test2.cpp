#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> arr = {12,14,8,90,12};
    vector<int>::iterator result = max_element(arr.begin(), arr.end()-2);
    cout<<"result:"<<*result;

    auto end_itr = arr.end();
    cout<<"end_element"<<*(end_itr-1);


}
