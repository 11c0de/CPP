#include<iostream>
using namespace std;
int main(){
// 11111
// 22222
// 33333
// 44444
int n;
cout << "Enter side of square:";
cin >> n;
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= n; j++)
{
cout << i;
}
cout << endl;
}
}