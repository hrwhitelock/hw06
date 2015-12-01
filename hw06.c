#include <stdio.h>
#include <string.h>

void caesar (char message[], int key);

int main (void) {
char message[] = "Sp S rkn kcuon zoyzvo grkd droi dkxdon, droi gyven rkfocksn pckcdob rycoc";
	//main function, sets what the message is and then trys all possible values of the key
	for (int i=1; i<25; i++){
  	caesar (message, i);
	}
  return 0;
}

void caesar (char message[], int key) {
  char messageOut[264];
  //sets a dummy variable for the message
  for (int j = 0; j<(int) strlen(message); j++){
	messageOut[j] = message[j];
  } 
  int i = 0; 
    while (message[i] !='\0'){
      //shifts each character that exists. separates between capital and lower case letters
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




