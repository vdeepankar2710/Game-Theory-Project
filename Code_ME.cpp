#include <bits/stdc++.h>
using namespace std;
#define ld long double
#define vd vector <ld>
//calculating monopoly equilibrium for linear latency functions of edges of the form l(x) = cix 
int main()
{
    /*We take input in the format
    n
    c1,c2,c3,.....cn
    where n is the number of edges and the vector c1, c2, ...cn, defines the latency functions for the n edges,i.e.,
    li(x) = ci.x */
    int n; //number of edges
    cin>>n;
    ld p=0;
    vd C; //vector to store the constant ci for the latency function li
    for(int i=0;i<n;i++)
    {
        ld c; // constant ci for the edge
        cin>>c; 
        C.push_back(c);
        p+=(1.0/c); 
    }
    ld P; //Equilibrium Price
    P = 1.0/p;
    vd X; //vector to store equilibrium flow on the edges
    for(int i=0;i<n;i++)
    {
        ld xi; //flow in edge i
        xi = (1.0/C[i]) * P;
        X.push_back(xi);
    }
}