#include <bits/stdc++.h>

using namespace std;
struct nodo{
    int abre,cierra;
};
vector<nodo> st;
int N,Q,l,r,i;
char act;
string paren=" ";
void construye(int n,int L,int R){
    if(L==R){
        if(paren[L] == '(') st[n].abre++;
        else if(paren[L] == ')') st[n].cierra++;
        return;
    }
    int M = (L+R)/2;
    int hi = n*2;
    int hd = hi+1;
    construye(hi,L,M);
    construye(hd,M+1,R);
    int hia = st[hi].abre;
    int hdc = st[hd].cierra;
    if(hia > hdc){
        hia-=hdc;
        hdc = 0;
    } else if(hdc > hia){
        hdc -= hia;
        hia = 0;
    } else {
        hdc = hia = 0;
    }
    st[n].abre = hia+ st[hd].abre;
    st[n].cierra = hdc + st[hi].cierra;
}
nodo kuery(int n,int L,int R,int iniq,int finq){
    nodo r = {0,0};
    if(iniq <= L && R <= finq){
        r = st[n];
        return r;
    }
    if(finq < L || R < iniq){
        return r;
    }
    int M = (L+R)/2;
    int hi = n*2;
    int hd = hi+1;
    nodo izca = kuery(hi,L,M,iniq,finq);
    nodo dezca = kuery(hd,M+1,R,iniq,finq);
    int hia = izca.abre;
    int hdc = dezca.cierra;
    if(hia > hdc){
        hia -= hdc;
        hdc = 0;
    } else if(hdc > hia){
        hdc -= hia;
        hia = 0;
    } else {
        hdc = hia = 0;
    }
    r.abre = hia+ dezca.abre;
    r.cierra = hdc + izca.cierra;
    return r;
}
nodo se;
int resultado;
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
    cin >> N;
    st.resize((N*4)+5);
    for(i=0;i<N;i++){
        cin >> act;
        paren+=act;
    }
    construye(1,1,N);
    cin >> Q;
    for(i=0;i<Q;i++){
        cin >> l >> r;
        se = kuery(1,1,N,l,r);
        resultado = r-l;
        resultado = resultado - se.abre - se.cierra +1;
        cout << resultado << '\n';
    }
    return 0;
}