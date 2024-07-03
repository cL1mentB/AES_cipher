#include <stdio.h>
#include <stdlib.h>


void affichage(unsigned char state[4][4]);
void initialisation(unsigned char state[4][4], unsigned char* message);

void SubBytes(unsigned char state[4][4]);
void ShiftRows(unsigned char state[4][4]);
void MixColumns(unsigned char state[4][4]);
void AddRoundKey(unsigned char state[4][4], unsigned char * expandedKey, int tour);
unsigned char * KeyExpansion(unsigned char key[16],int nbtours);

void encryption_AES(int nbtours, unsigned char state[4][4], unsigned char key[16]);
