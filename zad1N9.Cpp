#include <iostream> 
#include "modulN9.h"
using namespace std;
#include <math.h>
#include<cassert>

//Кошелев Дмитрий ивт-22 
//задача номер 9: https://ivtipm.github.io/Programming/Glava01/index01.htm#z9 

float pogr = 10e-4;

int main(int argc, char* argv[]){ 
    float R1, R2, R3; 
    
	assert(abs(calcul(2,2,2) - 0.666667) < pogr);
    assert(abs(calcul(3,3,3) - 1) < pogr);
    assert(abs(calcul(6,4,5) - 1.62162) < pogr);

    //Ввод 1 переменной 
    if (argc > 1) {R1 = atoi(argv[1]);} else {
    cout << "R1 = "; 
    cin >> R1; }
    
    //Ввод 2 переменной 
     if (argc > 2) {R2 = atoi(argv[2]);} else {
    cout << "R2 = "; 
    cin >> R2; }
    

    //Ввод 3 переменной 
     if (argc > 3) {R3 = atoi(argv[3]);} else {
    cout << "R3 = "; 
    cin >> R3; }
    
 //Рассчет по формуле параллельного сопротивления. R1, R2, R3 - спротивления  
    float R; 
    R = calcul(R1,R2,R3);

    //Вывод ответа - Суммы параллельного сопротивления
    cout << "summ parallel resistance: R = " << R << endl; 
    
    return 0; 
}


