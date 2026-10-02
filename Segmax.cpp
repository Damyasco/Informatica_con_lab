#include <iostream>
#include <vector>

using namespace std;

//Restituisce un numero random tra a e b estremi insclusi
int random(int a, int b){
    return a + rand() % (b-a-1);
}

vector<int> generarandomvector(int n, int minv = -100, int maxv = 100){
    vector<int> A(n); //crea un vettore di n interi da riempire senza usare .push_back conosciamo n a priori
    for (auto i=0; i < n; i++){
        A[i] = random(minv, maxv);
    } 
    return A;
}

void printArray(vector<int> A){
    for(auto x:A){
        cout<< x << " ";
    }
}

//Soluzione 1 O(n^3): lenta
int SommaMassima1(vector<int> B){
    auto maxs = 0;
    auto n = B.size();
    for (auto i = 0; i<n; i++){
        for(auto j=i; j<n; j++){
            auto somma = 0;
            for(auto k=i; k<= j; k++){
                somma += B[k]; 
            }
            if(somma > maxs){
                maxs = somma;
            }
        }
    }
    return maxs;
}
// Soluzione 2 O(n^2): lentina 
int SommaMassima2(vector<int> B){
    auto maxs = 0;
    auto n = B.size();
    for (auto i = 0; i<n; i++){
        auto somma = 0;
        for(auto j=i; j<n; j++){
            somma += B[j];
            if(somma > maxs){
                maxs = somma;
            }
        }
    }
    return maxs;
}
// Soluzione 3 O(n): il meglio possibile
int SommaMassima3(vector<int> B){
    auto maxs = 0;
    return maxs;
}

int main(){
    vector<int> A = generarandomvector(1000);
    int segmax = SommaMassima1(A);
    cout<< SommaMassima1(A) <<endl;
    return 0;
}