//
// Created by Andrey on 22.03.2021.
//
#include "strtokLab.h"

char* myStrtok(const char* s,const char* delm)
{
    static int currIndex = 0;
    if(!s || !delm || s[currIndex] == '\0')
        return nullptr;
    char *W = new char[(sizeof(char) * 100)];
    int i = currIndex, k = 0, j;

    while (s[i] != '\0'){
        j = 0;
        while (delm[j] != '\0'){
            if (s[i] != delm[j])
                W[k] = s[i];
            else goto It;
            j++;
        }

        i++;
        k++;
    }
    It:
    W[i] = 0;
    currIndex = i+1;
    //Iterator = ++ptr;
    return W;
}
