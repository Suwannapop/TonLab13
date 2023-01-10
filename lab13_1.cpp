#include<iostream>
#include<ctime>
using namespace std;

long long int fibonacci (int);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}
long long int fibonacci (int x){
    if (x == 0)
    {
        return 0 ;
    }
    if (x == 1)
    {
        return 1 ;
    }
    if (x > 1)
    {
        long long int sum = fibonacci(x-1) + fibonacci(x-2) ;
        return sum ;
    }
    return 0 ;
}