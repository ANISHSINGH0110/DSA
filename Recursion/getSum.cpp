#include <iostream>
using namespace std;

int getSum(int n)
{
    if(n == 1)
      return 1;
    return n+ getSum(n-1);  
}
int main()
{
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    cout << "Sum of numbers is : " << getSum(n) << endl;

    return 0;
}