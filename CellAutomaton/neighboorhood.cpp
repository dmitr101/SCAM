#include "neighboorhood.h"

Neighborhood::Neighborhood()
{
    for(int i = 0; i < 8; i++)
        n[i] = nullptr;
}

//TODO: змінити цей пздц
Neighborhood::Neighborhood(int i, int j, int width, int height, bool** field)
{
    if((i > 0 && i < (height - 1)) && (j > 0 && j < (width - 1))){ //звичайний випадок
        n[0] = &field[i-1][j-1];
        n[1] = &field[i-1][j];
        n[2] = &field[i-1][j+1];
        n[3] = &field[i][j+1];
        n[4] = &field[i+1][j+1];
        n[5] = &field[i+1][j];
        n[6] = &field[i+1][j-1];
        n[7] = &field[i][j-1];
    }
    if(i == 0 && (j > 0 && j < (width - 1))){ //клітина на верхньому крайньому рядку
        n[0] = &field[height-1][j-1];
        n[1] = &field[height-1][j];
        n[2] = &field[height-1][j+1];
        n[3] = &field[i][j+1];
        n[4] = &field[i+1][j+1];
        n[5] = &field[i+1][j];
        n[6] = &field[i+1][j-1];
        n[7] = &field[i][j-1];
    }
    if((i > 0 && i < (height - 1)) && j == 0){ //клітина на лівому крайньому стовпці
        n[0] = &field[i-1][width-1];
        n[1] = &field[i-1][j];
        n[2] = &field[i-1][j+1];
        n[3] = &field[i][j+1];
        n[4] = &field[i+1][j+1];
        n[5] = &field[i+1][j];
        n[6] = &field[i+1][width-1];
        n[7] = &field[i][width-1];
    }
    if((i > 0 && i < (height - 1)) && j == (width - 1)){ //клітина на правому крайньому стовпці
        n[0] = &field[i-1][j-1];
        n[1] = &field[i-1][j];
        n[2] = &field[i-1][0];
        n[3] = &field[i][0];
        n[4] = &field[i+1][0];
        n[5] = &field[i+1][j];
        n[6] = &field[i+1][j-1];
        n[7] = &field[i][j-1];
    }
    if(i == (height - 1) && (j > 0 && j < (width - 1))){ //клітина на нижньому крайньому рядку
        n[0] = &field[i-1][j-1];
        n[1] = &field[i-1][j];
        n[2] = &field[i-1][j+1];
        n[3] = &field[i][j+1];
        n[4] = &field[0][j+1];
        n[5] = &field[0][j];
        n[6] = &field[0][j-1];
        n[7] = &field[i][j-1];
    }
    if( i == 0 && j == 0){ //лівий верхній кут
        n[0] = &field[height-1][width-1];
        n[1] = &field[height-1][j];
        n[2] = &field[height-1][j+1];
        n[3] = &field[i][j+1];
        n[4] = &field[i+1][j+1];
        n[5] = &field[i+1][j];
        n[6] = &field[i+1][width-1];
        n[7] = &field[i][width-1];
    }
    if(i == 0 && j == (width - 1)){ //правий верхній кут
        n[0] = &field[height-1][j-1];
        n[1] = &field[height-1][j];
        n[2] = &field[height-1][0];
        n[3] = &field[i][0];
        n[4] = &field[i+1][0];
        n[5] = &field[i+1][j];
        n[6] = &field[i+1][j-1];
        n[7] = &field[i][j-1];
    }
    if(i == (height - 1) && j == 0){ //лівий нижній кут
        n[0] = &field[i-1][width-1];
        n[1] = &field[i-1][j];
        n[2] = &field[i-1][j+1];
        n[3] = &field[i][j+1];
        n[4] = &field[0][j+1];
        n[5] = &field[0][j];
        n[6] = &field[0][width-1];
        n[7] = &field[i][width-1];
    }
    if(i == (height - 1) && j ==(width - 1)){ //правий нижній кут
        n[0] = &field[i-1][j-1];
        n[1] = &field[i-1][j];
        n[2] = &field[i-1][0];
        n[3] = &field[i][0];
        n[4] = &field[0][0];
        n[5] = &field[0][j];
        n[6] = &field[0][j-1];
        n[7] = &field[i][j-1];
    }
}

int Neighborhood::getMooreCount()
{
    int sum = 0;
    for(int i = 0; i < 8; i++){
        sum += *n[i];
    }
    return sum;
}

int Neighborhood::getNeumanCount()
{
    int sum = 0;
    for(int i = 1; i < 8; i+=2){
        sum += *n[i];
    }
    return sum;
}
