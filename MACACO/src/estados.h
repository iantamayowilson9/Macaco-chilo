#pragma once
#include <raylib.h>


enum estadodejuego
{
    INCIAJUEGO,
    JUGANDO,
    PELOTAPARA,
    GANAR,
    PIERDES
};
estadodejuego estado_j = INCIAJUEGO;