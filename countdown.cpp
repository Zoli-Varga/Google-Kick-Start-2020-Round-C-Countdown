#include <iostream>

using namespace std;

const int MaxT = 100;

int main()
{
    int t;
    cin >> t;

    int ans[MaxT];

    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;

        int num = 0;

        bool inCountDown = false;
        int prev = 0;

        for (int j = 0; j < n; j++)
        {
            int temp;
            cin >> temp;

            if (temp == k)
            {
                inCountDown = true;
                prev = temp;
            }
            else if (inCountDown && temp == prev - 1)
            {
                prev = temp;

                if (prev == 1)
                {
                    num++;
                }
            }
            else if (inCountDown && temp != prev - 1)
            {
                inCountDown = false;
                prev = 0;
            }
        }

        ans[i] = num;
    }

    for (int i = 0; i < t; i++)
    {
        cout << "Case #" << i + 1 << ": " << ans[i] << "\n";
    }

    return 0;
}