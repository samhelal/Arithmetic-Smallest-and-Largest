/* (Arithmetic, Smallest and Largest) Write a program that
inputs three integers from the keyboard and prints the sum,
average, product, smallest and largest of these numbers. */
//program arithmetic and comparing three numbers 
#include <iostream>
using namespace std ;
int main () {
    int x(0) , y(0) , z(0) , min(0) , max(0) ;
    cout << " Input three different integers: \n" ;
    cin >> x >> y >> z ;
    //sum
    cout << " sum is " << x+y+z << endl;
    //average
    cout << " Average is " << (x+y+z)/3 <<endl ;
    //multiplicatio
    cout << " Product is " << x * y * z <<endl ;
    //The smallest 
    min = x ;
    if (y<min){
        min =y ;
    }
    if(z<min){
        min = z ;
    }
    cout << " Smallest is " << min <<endl;
    //The largest
    max = x ;
    if (y>max){
        max = y ;
    }
    if (z>max){
        max = z ;
    }
    cout << " Largest is " << max << endl ;

}