// Gameshark/AR v.1/2/3 code encryption algorithms written by Parasyte

#ifndef def_arcrypt
#define def_arcrypt

extern unsigned char v3enc; 
void decrypt_code(unsigned int *address, unsigned int *value); 
void encrypt_code(unsigned int *address, unsigned int *value); 
void deadface(unsigned short value); 

#endif
