#include<iostream>
using namespace std;
int main(){
// aaaa
// bbbb
// cccc
// dddd 

int n;
cout << "Enter side of square:";
cin >> n;
for (int i = 1; i <= n; i++)
{
for (int j = 1; j <= n; j++)
{
cout << (char)(i + 96);
}
cout << endl;
}
}