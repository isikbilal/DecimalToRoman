#include<stdio.h>
#include<string.h>

int ondaligaCevir(char);


int main(){

    char roma_Rakami[1000];
   
    int i=0;
    long int sayi =0;
   
    printf("Cevirmek istediginiz roma sayisini giriniz(Ornek: I, V, X, L, C, D, M):  \n");
    scanf("%s",roma_Rakami);
   
   
    while(roma_Rakami[i]){
        
         if(ondaligaCevir(roma_Rakami[i]) < 0){
             printf("Gecersiz bir deger girdiniz : %c",roma_Rakami[i]);
             return 0;
         }
            
         if(strlen(roma_Rakami) > 2){ 
             if(ondaligaCevir(roma_Rakami[i]) < ondaligaCevir(roma_Rakami[i+2])){
                 printf("Boyle bir roma rakami yok !!");
                 return 0;
             }
         }
			
         if(ondaligaCevir(roma_Rakami[i]) >= ondaligaCevir(roma_Rakami[i+1]))
             sayi = sayi + ondaligaCevir(roma_Rakami[i]);
         else{
             sayi = sayi + (ondaligaCevir(roma_Rakami[i+1]) - ondaligaCevir(roma_Rakami[i]));
             i++;
         }
         i++;
    }
        
    printf("Girdiginiz sayinin karsiligi: %ld",sayi);
    
    getch();
    return 0;

}

int ondaligaCevir(char c){

    int value=0;

    switch(c){
         case 'I': value = 1; break;
         case 'V': value = 5; break;
         case 'X': value = 10; break;
         case 'L': value = 50; break;
         case 'C': value = 100; break;
         case 'D': value = 500; break;
         case 'M': value = 1000; break;
         case '\0': value = 0; break; 
         default: value = -1;
    }

	
    return value;
}
