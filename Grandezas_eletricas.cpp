#include <stdio.h>

int main (){
	
int gran, user;

int ten, cor, pot, resis;	

	printf ("Escolha a grandeza eletrica\n");
	printf ("1- potencia\n");
	printf ("2- tensao\n");
	printf ("3- resistencia\n");
	printf ("4- corrente\n");
	scanf ("%d", &gran);
	
if (gran==1){

	printf ("Digite a tensao:\n");
	scanf ("%d", &ten);
	
	
	printf ("Digite a corrente:\n");
	scanf ("%d", &cor);
	
	pot = cor * ten;
	
	printf ("O resultado da potencia e: %d Watts", pot);
	
}

else if (gran==2){

	printf ("Quais grandezas voce possui: 1- resistencia e corrente ou 2- potencia e corrente:\n");
	scanf ("%d", &user);
	
	if (user==1){
		
		printf ("Digite a resistencia:\n");
		scanf ("%d", &resis);
	
	
		printf ("Digite a corrente:\n");
		scanf ("%d", &cor);
	
		ten = resis * cor;
	
		printf ("O resultado da tensao e: %d", ten);	
		
	}
	
	else if (user==2){
		
		printf ("Digite a potencia:\n");
		scanf ("%d", &pot);
	
		printf ("Digite a corrente:\n");
		scanf ("%d", &resis);
	
		ten = pot / resis;
	
		printf ("O resultado da tensao e: %d", ten);
		
	}
		
}

else if (gran==3){

	printf ("Digite a tensao:\n");
	scanf ("%d", &ten);
	
	printf ("Digite a corrente:\n");
	scanf ("%d", &cor);	
	
	resis = ten / cor;
	
	printf ("O resultado da resistencia e: %d OHMS", resis);
	
}

else if (gran==4){
	
	printf ("Qual grandeza voce possui 1- tensao e potencia ou 2- tensao e resistencia:\n");
	scanf ("%d", &user);
	
	if (user==1){

		printf ("Digite a potencia:\n");
		scanf ("%d", &pot);
	
	
		printf ("Digite a tensao:\n");
		scanf ("%d", &ten);
	
		cor = pot / ten;
	
		printf ("O resultado da corrente e: %d Amperes", cor);
		
	}
	
	else if (user==2){
		
		printf ("Digite a tensao:\n");
		scanf ("%d", &ten);
		
		printf ("Digite a resistencia:\n");
		scanf ("%d", &resis);
		
		cor = ten / resis;
		
		printf ("O resultado da corrente e: %d Amperes", cor);
		
	}

}

	else {
	
	printf ("Opcao Invalida \n");
	
	}
		
return 0;
}
