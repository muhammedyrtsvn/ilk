#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int isprime(int sayi){
	int kontrol = 0;
	int i;
	for(i= 2; i<sayi; i++){
		if(sayi%i==0){
			kontrol +=1;
			break;
		}
	}
	if(kontrol==0){
		return 1;//asal
	}else{
		return 0; //asal değil
	}
}

int main() {
	
	int sayac = 2;
	while(sayac<100){
		if(isprime(sayac)==1){
			printf("%d\n",sayac);
		}
		sayac++;
	}
	return 0;
}
