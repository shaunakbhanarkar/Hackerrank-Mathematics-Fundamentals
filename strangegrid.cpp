#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
 * Complete the strangeGrid function below.
 */
long int strangeGrid(long int r, long int c) {
    /*
     * Write your code here.
     */
     if (r%2 == 1)
     {
         return (r-1)*5 + (c-1)*2;
     }
     return strangeGrid(r-1,c)+1;

}

int main()
{
    long int r,c;
    cin>>r>>c;
    cout<<strangeGrid( r,  c);
}

