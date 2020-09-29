#include <stdio.h>

float paraMetrosPorSegundo(float v){
    float M = v / (float) 3.6;
   return M;
};


int main(float v){
    printf("Enter the kilometers you run today:\n");
    scanf("%f", &v);
    printf(" you run %f meters", paraMetrosPorSegundo(v));

    return 0;
};