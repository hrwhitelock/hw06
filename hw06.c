#include <stdio.h>
#include <string.h>

void caesar (char message[], int key);

int main (void) {
char message[] = "Sp S rkn kcuon zoyzvo grkd droi gkxdon, droi gyven rkfocksn pckcdob rybcoc.";
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
         if(message[i] >= 'a'&&  message[i]<='z'){
    		messageOut[i] = (message[i] - 'a'+key)%26 + 'a';
	 }
	else if (message[i] >='A' && message[i] <='Z'){
		messageOut[i] = (message[i] - 'A'+ key)%26 + 'A';
	}
    i++;
    }
    printf("%s \n ", messageOut);
}




