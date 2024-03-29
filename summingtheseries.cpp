#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the summingSeries function below.
 */
int summingSeries(long n) {
    /*
     * Write your code here.
     */

     
    long res = 1000000000+7;
     

     return ( (n%res) * (n%res)) %res;
     
     // (n*m)%res is equal to ((n%res) * (m%res)) %res

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++) {
        long n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = summingSeries(n);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
