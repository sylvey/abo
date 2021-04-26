#include <iostream>
using namespace std;

bool ifEqual(int right_answer[4], int test_answer[4])
{
    for (int i = 0; i < 4; i++)
    {
        if (right_answer[i] != test_answer[i])
        {
            return false;
        }
    }
    return true;
}


int main()
{
    int right_answer[4] = { 0 };
    int test_answer[4] = { 0 };

    for (int i = 0; i < 4; i++)
    {
        cin >> right_answer[i];
    }

    do
    {
        for (int i = 0; i < 4; i++)
        {
            cin >> test_answer[i];
        }

        int cntA = 0;
        int cntB = 0;

        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                if (test_answer[i] == right_answer[j])
                {
                    if (i == j)
                    {
                        cntA++;
                    }
                    else
                    {
                        cntB++;
                    }
                }
            }
        }
        cout << cntA << "A" << cntB << "B" << "\n";
    } while (!ifEqual(right_answer, test_answer));


    return 0;
}
