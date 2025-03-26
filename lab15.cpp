#include<iostream>
using namespace std;
    // Function prototypes
    void getInfo(int& L, int& Ratio);
    double computeWays(int k, int n);
    double factorial(int n);
    /*******************************************************************
    * getLotteryInfo                                                   *
    * Gets and validates lottery info from the user and places it in   *
    * reference parameters referencing variables in the main function. *
    ********************************************************************/
void getInfo(int &pickFrom, int &numPicks) {
cout << "How many balls (1-12) are in the pool to pick from: ";
    cin >> pickFrom ;
    cout << endl;
    cout << "How many balls (1-" <<pickFrom<<") are in the pool to pick from: ";
    cin >> numPicks;

}



    /*******************************************************************
    * computeWays                                                      *
    * Computes and returns the number of different possible sets       *
    * of k numbers that can be chosen from a set of n numbers.         *
    * The formula for this is     k!(n- k)!                            *
    *                             --------                             *
    *                                 n!                               *
    * Note that the computation is done in a way that does not require *
    * multiplying two factorials together. This is done to prevent any *
    * intermediate result becoming so large that it causes overflow.   *
    ********************************************************************/
double computeWays(int k, int n)
{
    double sol;
    int frac = n-k;
    sol = factorial(k) *factorial(frac)/factorial(n);
    return sol;
}
    /*******************************************************************
    * factorial                                                        *
    * This function computes factorials recursively.                   *
    *******************************************************************/
    double factorial(int n) {
        if(n == 0) return 1;
        else return n * factorial(n - 1);
    }
