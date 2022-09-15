#include <iostream>

using namespace std;

#define endl "\n"

#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

const int N = 1e6+7;

int Isprime[N];

int sumprime[N] = {0};

int Precheck[N] = {0};

int final[N] = {0};

void sieve()

{

    for(int i = 0;i <= N;i++)

    {

        Isprime[i] = 1;

    }

   

    Isprime[0] = 0;

    Isprime[1] = 0;


 

    for(int i = 2;i * i <= N;i++)

    {

        if(Isprime[i] == 1)

        {

            for(int j = i * i;j <= N;j+=i)

            {

                Isprime[j] = 0;

               

            }

        }

    }

}

void check()

{

   

     for(int i = 1;i <= N;i++)

     {

         sumprime[i] = Isprime[i] + sumprime[i-1];

         //cout << i << " " << sumprime[i] << endl;

     }  

     


 

}

void prechek()

{

    for(int i = 1;i <= N;i++)

    {

        int x = sumprime[i];

        if(Isprime[x] == 1)

        {

            Precheck[i]  = 1;

        }


 

    }

   

    for(int i = 1;i <= N;i++)

    {

        final[i] = final[i-1] + Precheck[i];

    }

       


 

}

int main()

{


 

    fastIO;

    sieve();

    check();

    prechek();


 

    int t;

    cin >> t;

    while(t--)

    {

       int l,r;

       cin >> l >> r;

       cout << final[r] - final[l-1] << endl;

       

    }

}
