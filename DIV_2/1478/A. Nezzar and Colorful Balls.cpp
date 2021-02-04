#include <bits/stdc++.h>
using namespace std;
#define debug(x) cout << #x << " = " << x << endl
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
const int MAXN=1e5;
const int inf=1e9;
vector<int> g[MAXN] ;
bool used[MAXN] ;
vector<int> comp ;
/*Vocabulary:
keep-mantiene
*/
int main(){
 fastio;
 int t;
 cin>>t;
 while(t--){
	 int n,a,ca[105];
	 cin>>n;//
    for(int i=0;i<=n;i++){
       ca[i]=0;
    }
    for(int i=0;i<n;i++){
       cin>>a;
       ca[a]++;  
    }
    int mx=0;
    for(int i=0;i<=n;i++){
       mx=max(mx,ca[i]);
    }  
    cout<<mx<<"\n";
    }
   return 0;
}
/*RESUMEN DEL PROBLEM:
La idea de este problema es colorear las bolas de varios colores, de tal manera que
los números coloreados del mismo color sea una secuencia estrictamente creciente.

IDEAS QUE RESUELVEN EL PROBLEMA
Se demuestra que la máxima cantidad de números iguales es la cantidad de colores que
se debe usar.

*/ 
