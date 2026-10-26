#include <iostream>   
#include <iomanip>   
#include <time.h>     
using namespace std;  
void Create(int* a, const int size, const int Low, const int High)
{                                          
    for (int i = 0; i < size; i++)         
        a[i] = Low + rand() % (High - Low + 1);
  
}                                           
void Print(int* a, const int size)          
{                                           
    for (int i = 0; i < size; i++)          
        cout << setw(4) << a[i];            
    cout << endl;                           
}                                           


int Count(int* a, const int size)           
{                                         
    int k = 0;                             
    for (int i = 0; i < size; i++)          
        if (!(a[i] > 0 && a[i] % 5 == 0))         
            k++;                            
    return k;                             
}                                           

int Sum(int* a, const int size)             
{                                           
    int s = 0;                              
    for (int i = 0; i < size; i++)          
        if (!(a[i] > 0 && a[i] % 5 == 0))        
            s += a[i];                      
    return s;                              
}                                          

void Zero(int* a, const int size)           
{                                           
    for (int i = 0; i < size; i++)          
        if (!(a[i] > 0 && a[i] % 5 == 0))        
            a[i] = 0;                       
}                                           

int main()                                  
{                                          
    srand((unsigned)time(NULL));            

    const int n = 22;                       
    int a[n];                               

    int Low = -40;                          
    int High = 50;                          

    Create(a, n, Low, High);                
    Print(a, n);                            

    cout << "Kilkist = " << Count(a, n) << endl;   
    cout << "Suma = " << Sum(a, n) << endl;          

    Zero(a, n);                             
    Print(a, n);                            

    return 0;                               
}                                          