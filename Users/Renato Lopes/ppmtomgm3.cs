#include <stdio.h>

int main(void){

    int num;
    double value, temp, pressao, massamolar, result;

    printf("DIGITE 1 PARA VALOR EM: ppm OU 2 EM: mg/m³\n");
    scanf("%d", &num);
    
    if(num == 1) {
      // ppm para mg/m³
      printf("DIGITE O VALOR EM ppm, A TEMPERATURA, PRESSÃO E MASSA MOLAR\n");
      scanf("%lf %lf %lf %lf", &value, &temp, &pressao, &massamolar);
      result = ((value) * ((1) / 6.02e23 )) / ((1.66E-18) * (0.082) * ((273 + temp))
    / (pressao)) * (massamolar) * (1000) * (1000);
    printf("%.2fmg/m³", result);
    }

    else if(num == 2) {
    printf("DIGITE O VALOR em mg/m³\n");
    scanf("%lf %lf %lf %lf", &value, &temp, &pressao, &massamolar);
    result = (((value) * (1.66E-18)) * (0.082) * (273 + temp)) 
    / ((pressao) * (massamolar) * (1000) * (1000) * ((1) / 6.02e23));
    printf("%.2fppm", result);
    }

    else {
      printf("DIGITE APENAS 1 OU 2!\n");
      scanf("%d", &num);
    }
  }
