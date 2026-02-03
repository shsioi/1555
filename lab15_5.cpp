#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

void shuffle(int *a, int *b, int *c, int *d){
    int temp[] = { *a, *b, *c, *d};
    
    for(int i = 3; i > 0; i--){
        int j = rand()%(i+1); 
        int t = temp[i];
        temp[i] = temp[j];
        temp[j] = t;
    }
    *a = temp[0];
    *b = temp[1];
    *c = temp[2];
    *d = temp[3];
}

//Do not modify the code above this line
//Write definition of shuffle() using pointer after this line. 
