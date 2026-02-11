#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n >> s;

    string A = "ABC";
    string B = "BABC";
    string G = "CCAABB";

    int scoreA = 0, scoreB = 0, scoreG = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == A[i % 3])
            scoreA++;
        if (s[i] == B[i % 4])
            scoreB++;
        if (s[i] == G[i % 6])
            scoreG++;
    }
    int maxScore = max(scoreA, max(scoreB, scoreG));
    cout << maxScore << endl;

    if (maxScore == scoreA)
        cout << "Adrian" << endl;
    if (maxScore == scoreB)
        cout << "Bruno" << endl;
    if (maxScore == scoreG)
        cout << "Goran" << endl;
}