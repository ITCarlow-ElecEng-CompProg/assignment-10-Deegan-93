/** 555 Timer Astable Multivibrator Calculations
 *  Exercise 10
 *  Luke Deegan
 *  13/10/17
 */

/** preprocessor directives */
#include <iostream>
#include <math.h>

using namespace std;

/** function prototype*/
void timer555(double r1, double r2, double c1, double *Freqptr, double *Dutyptr);

int main()
{
    /** Title */
    cout << "555 Timer Astable Multivibrator Calculations" << endl;

    /** variable declarations */
    double R1=0, R2=0, C1=0, Freq=0, Duty=0;
    double *ptr_Freq, *ptr_Duty ;

    ptr_Freq = &Freq;
    ptr_Duty = &Duty;

    /** while loop */
    while (R1 <=0)
    {
       cout << "Enter a positive value for R1:";
       cin >> R1 ;
    }

    /** while loop */
    while (R2 <=0)
    {
       cout << "Enter a positive value for R2:";
       cin >> R2 ;
    }

    /** while loop */
    while (C1 <=0)
    {
       cout << "Enter a positive value for capacitance:";
       cin >> C1 ;
    }

    /** call timer555 function and display result below */
    timer555(R1, R2, C1, ptr_Freq, ptr_Duty);
    cout << "The  is Output Frequency:" << *ptr_Freq << endl;

    /** result displayed */
    cout << "The  is Duty Cycle:" << *ptr_Duty << endl;
    return 0;
}

void timer555(double r1, double r2, double c1, double *Freqptr, double *Dutyptr)

{
    /** output frequency calculation */
    *Freqptr = 1.44/((r1+(2*r2))*c1);

    /** duty cycle calculation */
    *Dutyptr = (r1+r2)/(r1+(2*r2));
    return;
}
