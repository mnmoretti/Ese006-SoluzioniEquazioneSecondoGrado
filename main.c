 #include <stdlib.h> 
 #include <stdio.h> 
 #include <math.h> 
 
 
 void esistonoRadiciReali(float,float,float); 
 float calcolaDelta(float,float,float); 
 float calcolaSoluzione1(float,float,float); 
 float calcolaSoluzione2(float,float,float); 
 void stampaRisultato(float,float); 
 
 int main(int argc, char** argv) { 
 
 
     float a,b,c; 
      
     printf("Inserisci a: "); 
     scanf("%f", &a); 
     printf("Inserisci b: "); 
     scanf("%f", &b); 
     printf("Inserisci c: "); 
     scanf("%f", &c); 
      
     esistonoRadiciReali(a,b,c); 
      
     return (EXIT_SUCCESS); 
 } 
 
     void esistonoRadiciReali(float a, float b, float c) { 
     float delta; 
      
     delta = calcolaDelta(a,b,c); 
     if(delta>=0) { 
         stampaRisultato(calcolaSoluzione1(a,b,c),calcolaSoluzione2(a,b,c)); 
     }else { 
         printf("Le soluzioni non sono calcolabili in quanto la radice quadrata di un numero negativo non appartiene all'insieme dei numeri reali"); 
     } 
     return; 
 } 
 
 
     float calcolaDelta(float a, float b, float c) { 
     float delta; 
      
     delta = b*b-4*a*c; 
      
     return delta; 
 } 
 
 
     float calcolaSoluzione1(float a, float b, float c) { 
     float soluzione1; 
      
     soluzione1 = -b; 
     soluzione1 += sqrt(calcolaDelta(a,b,c)); 
     soluzione1 /= 2*a; 
      
     return soluzione1; 
 } 
 
 
     float calcolaSoluzione2(float a, float b, float c) { 
     float soluzione2; 
      
     soluzione2 = -b; 
     soluzione2 -= sqrt(calcolaDelta(a,b,c)); 
     soluzione2 /= 2*a; 
      
     return soluzione2; 
 } 
 
 
     void stampaRisultato(float x1, float x2) { 
     printf("X1 e' uguale a: %f", x1); 
     printf("\nX2 e' uguale a: %f", x2); 
     return; 
     }
