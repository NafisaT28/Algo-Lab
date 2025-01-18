#include<iostream>
using namespace std;
int main() {

  int n, sum=0;
  cout<<"Enter number: ";
  cin>>n;

      cout << "The first " << n << " natural numbers are: ";
    for (int i = 1; i <= n; i++) {
        cout << i << " ";
        sum += i;
    }
    cout<<endl;
    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;

    return 0;
}