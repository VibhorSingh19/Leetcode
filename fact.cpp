
#include <iostream>

using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        cin>>N;
        int S[3],P[3],V[3];
        for(int i=0;i<N;i++)
        {
            cin>>S[i];
            cin>>P[i];
            cin>>V[i];
        }
        int max=0,num;
        for(int i=0;i<N;i++)
        {
            num=(P[i]/(S[i]+1))*V[i];
            if(max<num)
            max=num;
        }
        cout<<max<<endl;
    }
    return 0;
}
