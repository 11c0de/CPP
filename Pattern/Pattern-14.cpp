#include<iostream>
using namespace std;
int main(){
// a 
// b b 
// c c c 
// d d d d 
int n;
cout << "Enter no of lines:";
cin >> n;
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= i; j++)
{
cout << (char)(i + 96) << " ";
}
cout << endl;
}
}