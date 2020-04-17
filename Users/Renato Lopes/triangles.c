#include <stdio.h>
 
int main(void) {

double A, B, C;
scanf("%lf %lf %lf", &A, &B, &C);

if (A >= B+ C || B >= A + C || C >= A + B) {
  printf("NAO FORMA TRIANGULO\n");
}
else if((A*A) == (B*B) + (C*C) || (B*B) == (A*A) + (C*C) || (C*C) == (A*A) + (B*B)){
  printf("TRIANGULO RETANGULO\n");
}
else if (((A*A) > (B*B) + (C*C) || (B*B) > (A*A) + (C*C) || (C*C) > (A*A) + (B*B)) && ((A == B && A != C )|| (C == A && C != B )|| (B == C && B != A))){
  printf("TRIANGULO OBTUSANGULO\n");
  printf("TRIANGULO ISOSCELES\n");
}
else if ((A*A) > (B*B) + (C*C) || (B*B) > (A*A) + (C*C) || (C*C) > (A*A) + (B*B)) {
  printf("TRIANGULO OBTUSANGULO\n");
}
else if(((A*A) < (B*B) + (C*C) || (B*B) < (A*A) + (C*C) || (C*C) < (A*A) + (B*B)) && ((A == B && B == C) ||( B == A && B == C )||( C == A && C == B))) {
  printf("TRIANGULO ACUTANGULO\n");
  printf("TRIANGULO EQUILATERO\n");
}
else if(((A*A) < (B*B) + (C*C) || (B*B) < (A*A) + (C*C) || (C*C) < (A*A)) + (B*B) && (((A == B && A != C)) || (C == A && C != B) || ((B == C && B != A)))) {
  printf("TRIANGULO ACUTANGULO\n");
  printf("TRIANGULO ISOSCELES\n");
}

else if((A*A) < (B*B) + (C*C) || (B*B) < (A*A) + (C*C) || (C*C) < (A*A) + (B*B)){
  printf("TRIANGULO ACUTANGULO\n");
}
else if ((A == B && B == C)) {
  printf("TRIANGULO EQUILATERO\n");
}
else if(((A == B) && (A != C)) || ((C == A) && (C != B)) || ((B == C) && (B != A))) {
  printf("TRIANGULO ISOSCELES\n");
}


}