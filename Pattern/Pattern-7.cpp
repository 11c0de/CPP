#include<iostream>
using namespace std;
int main(){
// abcde
// abcde
// abcde
// abcde
int n;
cout << "Enter side of square:";
cin >> n;
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= n; j++)
{
cout << (char)(j + 96);
}
cout << endl;
}
 
}