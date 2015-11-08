#include <bits/stdc++.h>

using namespace std;


bool getfristnumberMatch(int testno, vector<int> & B)
{
    int prev;
    while (testno)
    {
        prev = testno;
        testno /= 10;
    }
    //cout <<"returing "<<prev<<" number is "<<testno<<endl;
    int bsize = B.size();
    while(bsize--)
    {
        if(prev == B[bsize])
            return false;
    }
    return true;
}

int main()
{
    cout <<"Siddharth"<<endl;
    ifstream cin("in4");
    int n,k, temp;
    cin >> n >> k;
    int blocks = n/k;
    long long goodNums = 0;
    vector<int> A, B;
    while(blocks--)
    {
        cin >> temp;
        A.push_back(temp);
    }
    blocks = n/k;
    while(blocks--)
    {
        cin >> temp;
        B.push_back(temp);
    }

    for(int i=0; i< n/k; i++)
    {
        //cout <<"line 41"<<endl;
        int testno = 0;
        int j = 1;
        //cout <<"pow is "<<pow(10, n/k)<<" and "<<testno/pow(10, n/k)<<endl;
        while ((testno/pow(10, n/k)) < 1)
        {
            cout <<"--> pow is "<<pow(10, n/k)<<" and tst no is "<<testno;
            testno += A[i];
            if(getfristnumberMatch(testno, B)){
                cout <<" -incremented- "<<endl;
                goodNums++;
            }
            j++;
        }
    }
    cout << goodNums <<endl;
    return 0;
}
