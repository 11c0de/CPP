#include<iostream>
using namespace std;
int main(){
// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5 

int n;
cout << "Enter no of lines:";
cin >> n;
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= i; j++) {
if (i % 2 == 0)
cout << (char)(j + 64) << " ";
else
cout << j << " ";
}
cout << endl;
}

}