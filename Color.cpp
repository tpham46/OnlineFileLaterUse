#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>
#include<windows.h>
using namespace std;

int main(){

     HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
  // you can loop k higher to see more color choices
    for(int k = 1; k < 255; k++)
    {
    // pick the colorattribute k you want
        SetConsoleTextAttribute(hConsole, k);
        cout << k << " I want to be nice today!" << endl;
        cout << "But I dun want to" << endl;
    }
    return 0;
}
