#include<bits/stdc++.h>
using namespace std;

// code by vijay myakalwad

int calculateMinPatforms(int at[], int dt[], int n)
{


    // Write your code here.

    sort(at, at + n);

    sort(dt, dt + n);

    int pltCount = 1, i = 1, j = 0;

    int minPlatforms = 1;

    while (i < n && j < n)
    {

        if (at[i] <= dt[j])
        {

            pltCount++;

            i++;

            if (pltCount > minPlatforms)
            {

                minPlatforms = pltCount;
            }
        }
        else
        {

            pltCount--;

            j++;
        }
    }

    return minPlatforms;
}