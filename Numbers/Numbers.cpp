#include<iostream>

using namespace std;

int main()
{

int val1, val2, largest, small;
cout << "enter the val1&val2 follow by Enter" << endl;
cin >> val1 >> val2;
if (val1>val2)


{

cout << "the largest is" << val1 << endl;
largest = val1;
small = val2;

}
else


{
cout << "the largest is" << val2 << endl;
largest = val2;
small = val1;
}


int sum, different, product, ratio;
sum = val1 + val2;
different = largest - small;
product = val1*val2;
ratio = largest / small;
cout << "the sum is" << sum << endl;
cout << "the different is" << different << endl;
cout << "the product is" << product << endl;
cout << "the ratio is" << ratio << endl;
system("pause");


return 0;


}