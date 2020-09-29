int poupRendi(){
    float deposito1 = 789.54;
    float deposito2 = 303.20;
    float retirada = 58.25;

    // mês 1
    float month1 = deposito1;

    // mês 2
    float rendimento = deposito1*0.0056;
    float month2 = deposito1 + rendimento + deposito2;

    // mês 3
    float rendimento2 = month2 * 0.0056;
    float month3 = month2 + rendimento2 - retirada;

    // mês 4
    float rendimento3 = month3*0.0056;
    float month4 = month3 + rendimento3; 

    printf("o valor em conta: %.2f \n", month4);
    printf("o valor em conta: %f", month4);

}