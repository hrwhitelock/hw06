#include <stdio.h>

void caesar (char message[], int key);

int main (void) {

char message[50];
int shift;
	message[] = "SP S RKN"
	for (i=1; i<11; i++){
  	caesar (message, i);
	}
  return 0;
}

void caesar (char message[], int key) {
  int i = 0;

  while (message[i] != '\0') {
    if ((message[i] += key) >= 65 && (message[i] += key) <= 90) {
      message[i] += (key);
    } else {
      message[i] += (key - 25); 
    }
    i++;
  }
  printf("%s", message);
}




