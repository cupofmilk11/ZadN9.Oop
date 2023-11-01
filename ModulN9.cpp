///Рассчет по формуле параллельного сопротивления. R1, R2, R3 - спротивления  
float calcul(float R1, float R2, float R3) {
    float otv;
    otv = (R1*R2*R3)/(R1*R2+R2*R3+R1*R3); 
return otv;
 }