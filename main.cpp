#include <iostream>

using namespace std;

int sum(int n);

int main(){
  int n = 0;
  
  cout << "Please enter a number: ";
  cin >> n;

  cout << "The sum of integers from 1 to " << n
       << " is: " << sum(n) << endl;
  
  return 0;
}

int sum(int n){
  int s = 0;

  for(int i = 1; i <= n; i++){
    s += i;
  }

  return s;
}
