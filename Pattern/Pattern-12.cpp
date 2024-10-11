#include<iostream>
using namespace std;
int main(){
// A 
// B B 
// C C C 
// D D D D 
int n;
cout << "Enter no of lines:";
cin >> n;
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= i; j++)
{
cout << (char)(i + 64) << " ";
}
cout << endl;
}
}