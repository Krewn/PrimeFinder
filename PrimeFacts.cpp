#include <iostream>
#include <fstream>
using namespace std;

int main()     //you need way more comments!
{top:
    int k=0;
    int n;
    int q;
    int m;
    int d=0;
    int prime;
    int ans;ans=2;
    //ofstream primes;
    cout << "prime calculator";
    cout<<"enter start int:";
    cin>>m;
    cout << "enter end int:";
    cin>>n;
    //primes.open("primes"m"-"n".txt");
    ofstream ocvec;ocvec.open("ocvec.txt");ocvec<<"\[";
    ofstream dif;dif.open("curious.txt");dif<<"\[";
    ofstream difs;difs.open("difs.txt");difs<<"\[";
    ofstream dubs;dubs.open("twindifs.txt");dubs<<"\[";
    if(m%2==0){m++;}
    for(q=m; q<=n;q++)
    {
        d++;
        k++;
        for(ans=2; ans<=(q/2); ans++)
        {
            if(q%ans==0)
            {
                prime++;
                break;
            }
        }
        if(prime==0)
        {
            cout<<q<<endl;
            ocvec<<q<<",";
            difs<<d<<",";
            //primes<<q<<"\n";
            if (d==2){dif<<q<<",";d=0;dubs<<k<<",";k=0;}
            else if(1){dif<<0<<",";d=0;}
        }
        else if (1){ocvec<<0<<",";dif<<0<<",";}
        prime=0;
    }
    ocvec<<";]";dif<<";]";difs<<";]";dubs<<";]";
    ocvec.close();dif.close();difs.close();dubs.close();
    //primes.close();
goto top;
    return 0;
}
