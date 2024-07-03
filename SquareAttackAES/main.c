#include <stdio.h>
#include <stdlib.h>
#include "aes.h"



///////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////// Main //////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////

unsigned char key[16] = {0x94,0xa4,0x5f,0x2f,0xe8,0x4c,0x51,0xc4,0x2e,0x54,0x48,0x5c,0x3e,0xd2,0xe6,0x8f};

int main(int argc, char* argv[])
{
    
	//Initialisation du message 
	char * message = "6b6b6b6b6b006b6b6b6b6b6b6b6b6b6b";
    
	//Initialisation de la matrice contenant le message
	unsigned char state[4][4]; 
	initialisation(state, (unsigned char*)message);
  
    printf("Message a chiffrer:\n");
	affichage(state);

	//Chiffrement du message 
	encryption_AES(4, state, key);
    printf("Message obtenu après chiffrement:\n ");
    affichage(state);

	return 0;
}