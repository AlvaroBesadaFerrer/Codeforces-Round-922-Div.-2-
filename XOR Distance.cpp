#include <bits/stdc++.h>

using namespace std;
string decToBinary(long long n)
{
    string res = "";

    for (long long i = 63; i >= 0; i--)
    {
        long long k = n >> i;
        if (k & 1)
        {
            res += "1";
        }

        else
        {
            res += "0";
        }
    }

    return res;
}

long long binaryToDecimal(string n)
{
    string num = n;
    long long dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    long long base = 1;

    long long len = num.length();
    for (long long i = len - 1; i >= 0; i--)
    {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long cp;
    cin >> cp;

    while (cp--)
    {
        long long a2, b2, r2;
        cin >> a2 >> b2 >> r2;

        long long c2 = a2;

        a2 = max(a2, b2);
        b2 = min(b2, c2);

        string a = decToBinary(a2);
        string b = decToBinary(b2);
        string r = decToBinary(r2);

        /*bool pa = false;
        bool pb = false;
        for(long long i = 0 ; i <=63; i++){
            if(a[i] == '1'){
                pa = true;
            }

            if(pa){
               cout<<a[i];
            }


        }
        cout<<" ";
        for(long long i = 0 ; i <=63; i++){

            if(b[i] == '1'){
                pb = true;
            }
            if(pb){
               cout<<b[i];
            }


        }
        cout<<"\n";*/

        bool rem = false;
        bool prim = false;
        for (long long i = 0; i <= 63; i++)
        {

            if (a[i] == '1' and b[i] == '0' and prim)
            {

                if (rem == true or r[i] == '1')
                {
                    a[i] = '0';
                    b[i] = '1';
                    // cout<<" cambio ";
                }
            }
            else
            {
                if (r[i] == '1')
                {
                    rem = true;
                    // cout<<" rem ";
                }
            }
            if (a[i] == '1' and b[i] == '0')
            {
                if (!prim)
                {
                    // cout<<" prim ";
                }
                prim = true;
            }
            // cout<<"("<<a[i]<<b[i]<<") ";
        }

        // cout<<a<<" "<<b<<"\n";
        // cout<<a<<" "<<b<<"\n";
        cout << abs(binaryToDecimal(a) - binaryToDecimal(b)) << "\n";

        // cout<<abs(resa-resb)<<"\n";
    }
}