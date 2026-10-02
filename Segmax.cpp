#include <iostream>
#include <vector>

using namespace std;

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


int main(){
    vector<int> A = {4, -6, 3, 5, -2, 1, -4, 6, -3};
    int segmax = SommaMassima1(A);
    cout<< segmax <<endl;
    return 0;
}