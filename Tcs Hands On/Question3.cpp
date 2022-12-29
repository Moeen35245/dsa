/*
Selection of MPCS exams include a fitness test which is conducted on ground. There will be a batch of 3 trainees, appearing for running test in track for 3 rounds. You need to record their oxygen level after every round. After trainee are finished with all rounds, calculate for each trainee his average oxygen level over the 3 rounds and select one with highest oxygen level as the most fit trainee. If more than one trainee attains the same highest average level, they all need to be selected.

Display the most fit trainee (or trainees) and the highest average oxygen level.

Note:

    The oxygen value entered should not be accepted if it is not in the range between 1 and 100.
    If the calculated maximum average oxygen value of trainees is below 70 then declare the trainees as unfit with meaningful message as “All trainees are unfit.
    Average Oxygen Values should be rounded.

Example 1:

    INPUT VALUES

            95

            92

            95

            92

            90

            92

            90

            92

            90

    OUTPUT VALUES
        Trainee Number : 1
        Trainee Number : 3

Note:

Input should be 9 integer values representing oxygen levels entered in order as

Round 1

    Oxygen value of trainee 1
    Oxygen value of trainee 2
    Oxygen value of trainee 3

Round 2

    Oxygen value of trainee 1
    Oxygen value of trainee 2
    Oxygen value of trainee 3

Round 3

    Oxygen value of trainee 1
    Oxygen value of trainee 2
    Oxygen value of trainee 3

Output must be in given format as in above example. For any wrong input final output should display “INVALID INPUT”

*/

#include <iostream>
using namespace std;

int main()
{
    int arr[9];

    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        if (!(arr[i] >= 1 && arr[i] <= 100))
        {
            cout << "INVALID INPUT";
            return 0;
        }
    }
    int T1 = 0, T2 = 0, T3 = 0;

    for (int i = 0; i < 9; i++)
    {
        if (i % 3 == 0)
            T1 += arr[i];
        if (i % 3 == 1)
            T2 += arr[i];
        if (i % 3 == 2)
            T3 += arr[i];
    }

    int mx = max(T1, max(T2, T3));

    if ((mx / 3) < 70)
    {
        cout << "All trainees are unfit";
    }
    else
    {

        if (T1 == mx)
            cout << "Trainee 1" << endl;

        if (T2 == mx)
            cout << "Trainee 2" << endl;

        if (T3 == mx)
            cout << "Trainee 3";
    }
    return 0;
}
