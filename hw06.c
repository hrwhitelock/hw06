#include <stdio.h>


void caesar (char message[], int key);

int main (void) {
char message[] = "Sp S rkn kcuon zoyzvo grkd droi dkxdon, droi gyven rkfocksn pckcdob rycoc";
	for (int i=1; i<25; i++){
  	caesar (message, i);
	}
  return 0;
}

void caesar (char message[], int key) {
  int i = 0;
  char messageOut[] = "Sp S rkn kcuon zoyzvo grkd droi dkxdon, droi gyven rkfocksn pckcdob rycoc"; //clunky and gross. will fix later
    while (message[i] !='\0'){
      if (message[i] != 32){
         if(message[i]<91){
            if (message[i]+key <= 90 ){
              messageOut[i]+= key;
           } 
           else{
              int temp =  26-key; 
              messageOut[i] -= temp; 
           }
        }
        else{
          if(message[i]+key <= 122){
             messageOut[i] +=key;
          }
          else{
              int temp =  26-key; 
              messageOut[i] -= temp;
           }
         }
      }
    i++;
    }
    printf("%s \n ", messageOut);
}




