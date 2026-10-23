#include <iostream>
#include <vector>

//array random
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


using namespace std;

int main(){

}