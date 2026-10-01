#ifndef INPUT_H
#define INPUT_H

int readInt(const char *prompt);
float readFloat(const char *prompt);
void readString(const char *prompt, char *buffer, int size);
int readMenuChoice(const char *prompt, int min, int max);

#endif
