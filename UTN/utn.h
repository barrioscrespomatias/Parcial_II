#ifndef UTN_H_INCLUDED
#define UTN_H_INCLUDED


static int getUltimoId()
{
    static int id = 0;
    id ++;
    return id;
}

int getInt(char mensaje[]);
char getChar(char mensaje[]);
float getFloat(char mensaje[]);
int isNumeric(char array[]);
int isPhone(char array[]);
int isAlphanumeric(char array[]);
int areLetters(char array[]);
int isFloat(char str[]);
int getStringLetters(char mensaje[], char input[]);
void getString(char mensaje[], char input[]);
int getStringNumber(char mensaje[], char input[]);
int getIntOnly(char mensaje[]);
void getStringOnly(char mensaje[], char input[]);
float getFloatOnly(char mensaje[]);
void stringCorrector(char *cadena);
int isFecha(int day, int month, int year);
void quitarSaltoDeLinea(char *cadena);









#endif // UTN_H_INCLUDED
