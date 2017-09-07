//C++ 14
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int a[26] = {0};
    string s1, s2;
    cin>>s1;
    cin>>s2;
    int sum;
    for(int i=0; i< s1.length(); i++)
    {
        a[s1[i] -'a']++;
    }
    for(int i=0; i< s2.length(); i++)
    {
        a[s2[i] - 'a']--;
    }
    for(int i =0; i<26; i++)
    {
        if(a[i] !=0)
        {
            sum += abs(a[i]);
        }
    }
    cout<<sum; 
    return 0;
}