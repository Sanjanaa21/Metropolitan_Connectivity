Co#include<stdio.h>
#include<limits.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

#include "mainss.h"

int AdjacencyMatrix[42][42]=
{
{0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,1,1,0,0,0,1,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,1,0,0,1,1,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0},
{0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0,1},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,1,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
{0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0}
};



int distMatrix[42][42] = {
    {0, INF, INF, INF, INF, INF, INF, INF, 5, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 9,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, 0, INF, INF, INF, INF, INF, 3, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, 0, 3, INF, 7, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, 3, 0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, 0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 5, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, 7, INF, INF, 0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 10, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, 0, 4, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 3, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, 3, INF, INF, INF, INF, 4, 0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {5, INF, INF, INF, INF, INF, INF, INF, 0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, 0, INF, INF, INF, INF, INF, INF, INF, INF, 4, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 0, 6, INF, INF, INF, INF, INF, INF, 3, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 6, 0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 0, INF, INF, INF, 6, INF, 11, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, 10, INF, INF, INF, INF, INF, INF, INF, INF, INF, 3},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 0, 5, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 4},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 5, 0, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 0, INF, INF, INF, 5, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, 4, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 6, INF, INF, INF, 0, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 0, INF, INF, 4, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, 5, 10, INF, INF, INF, 4, 3, INF, 11, INF, INF, INF, INF, INF, 0, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 13, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 5, INF, INF, INF, 0, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 7, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 4, INF, INF, 0, 5, 10,
    INF, INF, 3, 9, 7, INF, 15, INF, INF, INF, INF, INF, INF, INF, INF, 6, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, 3, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 5, 0, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {9, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 10, INF, 0,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 7, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, 0, INF, 14, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, 0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 5, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 3, INF,
    INF, 14, INF, 0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 10, INF, 10, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 9, INF,
    INF, INF, INF, INF, 0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 5, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 7, INF,
    INF, INF, INF, INF, INF, 0, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, 0, 6, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 4, INF, INF, INF, INF, 15, INF,
    INF, INF, INF, INF, INF, INF, 6, 0, 5, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, 5, 0, 7, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 10, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, 7, 0, 12, INF, INF, INF, 9, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, 12, 0, 8, INF, 7, INF, INF, INF, INF, INF, 8},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 8, 0, 5, INF, 4, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 5, 0, INF, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 7, INF, INF, 0, INF, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, 9, INF, 4, INF, INF, 0, INF, INF, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, 5, 10, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 0, INF, 3, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 13, 7, 6, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 0, INF, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, 10, 5, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 3, INF, 0, INF, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF,
    7, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 0, INF},
    {INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 3, 4, INF, INF, INF, INF, INF, INF, INF, INF,
    INF, INF, INF, INF, INF, INF, INF, INF, INF, INF, 8, INF, INF, INF, INF, INF, INF, INF, INF, 0}
    };

edge edges[48] =
    {
        //{start(node index) , to(node index) , dist(kms) , transportationType}
        {1, 9, 5, 3},
        {1, 23, 9, 3},
        {23, 41, 7, 2},
        {21, 23, 10, 3},
        {21, 22, 5, 4},
        {7, 22, 3, 4},
        {7, 8, 4, 3},
        {2, 8, 3, 2},
        {21, 26, 3, 2},
        {24, 26, 14, 4},
        {26, 38, 10, 2},
        {25, 38, 5, 2},
        {26, 40, 10, 3},
        {21, 27, 9, 3},
        {21, 28, 7, 2},
        {18, 21, 4, 2},
        {21, 39, 6, 4},
        {20, 39, 7, 4},
        {19, 39, 13, 3},
        {5, 19, 5, 3},
        {6, 19, 10, 4},
        {3, 6, 7, 4},
        {3, 4, 3, 2},
        {10, 19, 4, 2},
        {11, 19, 3, 1},
        {11, 12, 6, 4},
        {13, 19, 11, 3},
        {13, 17, 6, 2},
        {13, 42, 3, 1},
        {14, 42, 4, 2},
        {14, 15, 5, 2},
        {13, 32, 10, 3},
        {32, 33, 12, 3},
        {33, 34, 8, 4},
        {34, 35, 5, 1},
        {33, 36, 7, 2},
        {21, 30, 15, 4},
        {16, 30, 4, 3},
        {29, 30, 6, 4},
        {30, 31, 5, 3},
        {31, 32, 7, 3},
        {32, 37, 9, 3},
        {34, 37, 4, 2},
        {33, 42, 8, 4},
        {16, 20, 5, 3},
        {27, 40, 5, 4},
        {38, 40, 3, 4}
};

/*
Function name:load_weights

input:a[][] it is a 2D array which is used as cost matrix

output:the function will return NULL
*/


void load_weights(int a[][42])
{
    int k = 0;
    for (int i = 0; i < MAX; i++)
    {
        for (int j = 0; j < MAX; j++)
        {
            if (i == j)

            // assuming there are no self loops
            // initializing the diagonal entries to 0.
            {
                a[i][j] = 0;
            }


            // and initializing all others to infinity.
            else
            {
                a[i][j] = INF;
            }
        }
    }

    while (k != 47)
    {
        a[(edges[k].src) - 1][(edges[k].dest) - 1] = edges[k].dist;
        a[(edges[k].dest) - 1][(edges[k].src) - 1] = edges[k].dist;
        k++;
    }
   //dis();

}

void dis()
{
    for(int i=0;i<47;i++)
    {
        printf("%d %d %d\n",edges[i].src,edges[i].dest,edges[i].dist);
    }
}

/*
Function Name: welcome
Input Params: NILL
Return Type: void
Description: Prints a welcome message
*/

void welcome()
{
    int  i = 0;
    for(i=0;i<80;i++)
        printf("*");

    printf("\n\n\t\t\t\t CONNECTIVITY  \n\n\n");

    for(i=0;i<80;i++)
        printf("*");

    printf("\n\n");

}

/** case 1:display the sopots**/

/*
Function Name:display_spot
input:NIL
return type:void
Description:prints the name,type and population of each city which we stored in file
*/

void display_spot()
{
    int i;
    for(i=0;i<MAX;i++)
    {
        printf("%-40s\t %d %d \n", nodes[i].name, nodes[i].type, nodes[i].population);
    }
}

/**case 2:sort the spot
sorts the spot based on type of area**/

/*
Function Name:bubble_sort
input:NIL
return type:void
Description:sorts the spot in ascending order*/

void bubble_sort()
{
    int i,j;
    int temp;
    for(i=0;i<MAX-1;i++)
    {
        for(j=0;j<MAX-1-i;j++)
        {
            if(nodes[j].type>nodes[j+1].type)
             {
                 temp=nodes[j].type;
                 nodes[j].type=nodes[j+1].type;
                 nodes[j+1].type=temp;
             }
        }
    }
}

/**case 3:search the location**/

/*
function Name:search
input:name of the location
return type:int
Description:search es the name of location using inbuilt function strcmp()
returns 1 if found else it returns 0*/

int search(char name[])
{
    int i;
    for(i=0;i<MAX;i++)
    {
        if(strcmp(nodes[i].name,name)==0)
            return 1;
    }
    return 0;
}

/**case 4:finding minimum population city**/

/*
Function Name:min
input:NIL
return type:void
Description:printd the name of the city with minimum population
*/


void min()
{
    int m=INT_MAX;
    int i,ind=0;
    for(i=0;i<MAX;i++)
    {
        if(nodes[i].population<m)
        {
            m=nodes[i].population;
            ind=i;
        }
    }
    printf("%s with %d\n\n",nodes[ind].name,nodes[ind].population);
}

/**case 5:finding the city with maximum ppulation**/

/*Function Name:max
input:NIL
return type:void
Description:prints the city with maximum population*/

void max()
{
    int m=INT_MIN;
    int i,ind=0;
    for(i=0;i<MAX;i++)
    {
        if(nodes[i].population>m)
        {
            m=nodes[i].population;
            ind=i;
        }
    }
    printf("%s with %d\n\n",nodes[ind].name,nodes[ind].population);
}

/**case 6**/

/*
Function Name:transitive_closure
input:NIL
return type:void
Description:prints the matrix wherever there is a transitivity

in this functionality floyds algorithm is used to check the transitivity
R[42][42]-2D array which is an adjacency matrix
time efficiency:0(n^3)
*/

void transitive_closure()
{
    int R[42][42] =
        {

            {0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0, 1},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    int n = 42;
    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                 R[i][j]=R[i][j] ||(R[i][k]&&R[k][j]);
            }
        }
    }


    //print the resultant matrix
    for(int i=0;i<42;i++)
    {
        for(int j=0;j<42;j++)
        {
            printf("%d ",R[i][j]);
        }
        printf("\n");
    }
}

/*
Function Name:reload
input:NIL
return type:void
Description:It will load the contents of file metross.txt
if the file not found it will print the msg as error in opening

*/

void reload() {
    FILE *f;
    f = fopen("metross.txt", "r");
    if (f == NULL) {
        printf("Error in opening file\n");
        return;
    }

 /* for(int i=0;i<15;i++){
        fscanf(f,"%s %d %s %s %d %d %f %d", list[i].trainName,&list[i].trainNumber,list[i].source,list[i].destination,&list[i].totalSeats,&list[i].availableSeats,&list[i].ticketPrice,&list[i].priority);

    }

    fclose(f);
     for(int i=0;i<15;i++)
   printf("%s %d %s %s %d %d %0.2f %d\n", list[i].trainName,list[i].trainNumber,list[i].source,list[i].destination,list[i].totalSeats,list[i].availableSeats,list[i].ticketPrice,list[i].priority);
*/

 while(!feof(f))
    {

     fscanf(f,"%s %d %s %s %d %d %f %d", list[global_count].trainName,&list[global_count].trainNumber,list[global_count].source,list[global_count].destination,&list[global_count].totalSeats,&list[global_count].availableSeats,&list[global_count].ticketPrice,&list[global_count].priority);

        //printf("%s %d %s %s %d %d %f %d\n", list[global_count].trainName,list[global_count].trainNumber,list[global_count].source,list[global_count].destination,list[global_count].totalSeats,list[global_count].availableSeats,list[global_count].ticketPrice,list[global_count].priority);

        global_count++;
    }

}
/**case 7:fisplay the trains using bst
it displays train name in inorder traversal,pre order traversal and post-order traversal
 **/

/*
function Name i):insert_into_city
input:metroo*root-which is a metro_list structure
char key-it is name of the train
return type:metroo *
Description:inserts the train name to mertoo *

function Name ii):inorder
input:metroo *root-which is a metro_list structure
return type:void
Description:prints the train name in inorder fashion
that is it first prints the left child then the root and then the right child

function name iii):preorder
input:metroo *root-which is a metro_list structure
return type:void
Description:prints the train name in preorder fashion
that is it first prints the root  then the left child and then the right child

function name iv):postorder
input:metroo *root-which is a metro_list structure
return type:void
Description:prints the train name in postorder fashion
that is it first prints  the left child and then the right child and then the root

function Name:v)bst_traversal
input:NIL
return type:void
Description:it calls all the function such as insert,inorder,preorder,postorder

*/

metroo *insert_into_city(metroo *root, char key[]);
void inorder(metroo *root);

metroo *insert_into_city(metroo *root, char key[])
{
    metroo *newnode;
    metroo *currnode;
    metroo *parent;

    newnode = (metroo *)malloc(sizeof(metroo));

    // checking if newnode is created or not
    if (newnode == 0)
    {
        printf("Memory allocation failed\n");
        return root;
    }

    // intializing the newly created node

    strcpy(newnode->name, key);
    newnode->left = NULL;
    newnode->right = NULL;

    // if root is empty ,the newnode becomes the root of the tree

    if (root == NULL)
    {
        root = newnode;
        return root;
    }

    // otherwise,finding a right place and then inserting into BST

    currnode = root;
    parent = NULL;
    while (currnode != NULL)
    {
        parent = currnode;

        if (strcmp(newnode->name, currnode->name) <= 0)

            currnode = currnode->left;

        else

            currnode = currnode->right;
    }

    if (strcmp(newnode->name, parent->name) <= 0)
    {
        parent->left = newnode;
    }

    else
    {

        parent->right = newnode;
    }

    return root;
}


void inorder(metroo *root)
{

    // performs inorder traversal of the city

    // inorder traversal of BST leads names of locations in lexicographical order

    if (root != NULL)
    {
        inorder(root->left);
        printf("%s\n", root->name);
        inorder(root->right);
    }
}


void preorder(metroo *root)
{

    // performs preorder traversal of the city

    if (root != NULL)
    {
        printf("%s\n", root->name);
        preorder(root->left);
        preorder(root->right);
    }
}


void postorder(metroo *root)
{

    // performs postorder traversal of the city

    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%s\n", root->name);
    }
}


void bst_traversal()
{
    metroo *root = NULL;
    int i;
    for (i = 0; i < max_metro; i++)
    {
        root = insert_into_city(root, list[i].trainName);
    }

    // printing the preorder traversal
    printf("\n\nPrinting the preorder traversal : \n\n");
    preorder(root);

    // printing the postorder traversal
    printf("\n\nPrinting the postorder traversal : \n\n");
    postorder(root);

    // printing the inorder traversal
    printf("\n\nPrinting the inorder traversal : \n\n");
    inorder(root);
}

/**case 8:search the train
it uses brute force string search algorithm,heap sort,heapify
**/

/*
function Name:brute
input:char t[]-character array of text
char p[]-it is an array of pattern
int n-string length of text
int m-string length of pattern
retuen type :void
*/

int brute(char t[],char p[],int n,int m)
{
    int i;

    for(i=0;i<=(n-m);i++)
    {
       int j = 0;
       while((j<m) && (tolower(p[j])==tolower(t[i+j])))
         j=j+1;
       if(j==m)
         return i;
    }
    return -1;
}


/**case 9**/

/*
function Name i):heapify
input:metro h[]-stricture of metro
int n-size

function name ii):heapsort
iput:metro h[]-structure of metro
int n-size
return type:void
Description:sorts in descending order based on priority of train

function name iii):display
input:list h[]
return type:void
Description:printd the metro list
*/

void heapify(metro h[], int n, int i)
{
    int j;
    metro v;
    int heap = 0;

    v = h[i];
    while (!heap && (2*i+1)<n)
    {
        j = 2*i+1;
        if (j<n-1)
        {
            if (h[j + 1].priority <h[j].priority)
            {
                j=j+1;
            }
        }
        if (v.priority <= h[j].priority)
        {
            heap = 1;
        }
        else
        {
            h[i] = h[j];
            i = j;
        }
    }
    h[i] = v;
}

void heapsort(metro h[], int n)
 {
    int i;
    metro temp;
    for (i=n/2-1;i>=0;i--)
    {
        heapify(h, n, i);
    }
    for (i=n-1;i>=0;i--)
    {
        temp = h[0];
        h[0] = h[i];
        h[i] = temp;
        heapify(h,i,0);
    }
}
void display(metro list[])
{
    int i;
    printf("higher priority will be displayed first\n\n");
    for(i=0;i<max_metro;i++)
         printf("%-20s %d %-22s %-35s %d %d %0.2f %d\n", list[i].trainName,list[i].trainNumber,list[i].source,list[i].destination,list[i].totalSeats,list[i].availableSeats,list[i].ticketPrice,list[i].priority);
}

/**case 10:seat booking **/

/*
function name i)linearsearch
input:train number
return type:int
Description:compares whether train number is there or not
returns 1 if found
returns 0 if not found

function name ii):bookseat
input:train number,number of seats
return type:int
Description:returns 1 if seats are available
returns 0 if no seats available  and prints the message

Function name iii):displayavailabletrains
input:NIL
return tye:void
Description:prints the train name,number ,available seats

function Name iv):quicksort
input:metro b[]
int l-lower limit
int r-higher limit
return type:void

function name v):swap
input:metroo* a,metroo *b
return type:void
Description:swaps 2 data

function name vi):dsplayavailabletrain
input:NIL
return type:void
Description:prints the details

function name vii):partition
input:metro b[],int l,int r
return type:void

function name:booking_seat_with_payment
input:trainnumber,numseats
return type:void
*/

int linearsearch(int trainNumber)
{

     for (int i = 0; i < max_metro; i++)
        {
        if (list[i].trainNumber == trainNumber)
        {
            return i;  // Return the index if the target is found
        }
    }

    return -1;

}



int bookSeat(int trainNumber, int numSeats)
 {
    for (int i = 0; i < max_metro; ++i)
        {
        if (list[i].trainNumber == trainNumber)
         {
            // Check if there are enough available seats
            if (list[i].availableSeats >= numSeats)
            {
                list[i].availableSeats -=numSeats;
            //    printf("%d seat(s) booked successfully for Train %d.\n", numSeats, trainNumber);
            return 1;
            }
            else
            {
                printf("Sorry, insufficient seats available for Train %d.\n\n\n", trainNumber);
            }
            return 0;
        }
    }
    printf("Train %d not found.\n", trainNumber);
}


void displayavailabletrains()
{
    printf("Available Metro Trains:\n");
    for (int i = 0; i < max_metro; ++i)
        {
           printf("Train Number: %d\n", list[i].trainNumber);
           printf("Train Name: %s\n", list[i].trainName);
           printf("Available Seats: %d\n", list[i].availableSeats);
           printf("\n");
    }
}

int payment_process(float amount, const pd *payment_details)
 {
    // Placeholder implementation
    printf("Processing payment of %.2f rupees...\n", amount);
    //return rand() % 2;
   return 1;
}

int partition(metro b[], int l, int h)
{
    int pivot = b[h].trainNumber;  // Choose the rightmost element as the pivot
    int i = l- 1;        // Index of the smaller element

    for (int j = l; j < h; j++)
    {
        // If the current element is smaller than or equal to the pivot
        if (b[j].trainNumber <= pivot)
         {
            i++;
            swap(&b[i], &b[j]);
        }
    }

    // Swap the pivot element with the element at (i + 1), placing the pivot in its correct position
    swap(&b[i + 1], &b[h]);
    return i + 1;
}




void quicksort(metro b[],int l,int r)
{
    if(l<r)
    {
        int pivot=partition(b,l,r);
        quicksort(b,l,pivot-1);
        quicksort(b,pivot+1,r);
    }

}
void swap(metro* a, metro* b)
{
    metro temp = *a;
    *a = *b;
    *b = temp;
}



// Function to book a seat with payment integration
void seat_booking_with_payment(int trainNumber, int numSeats)
{
    float ticketPrice;
    // Find the train in the list
    for (int i = 0; i < max_metro; i++)
    {
        if (list[i].trainNumber == trainNumber)
        {
            ticketPrice = list[i].ticketPrice;
            break;
        }
    }

    // Calculate the total amount
    float total_amount = numSeats * ticketPrice;
    int ch,bs;

    pd payment_details;

    bs=bookSeat(trainNumber, numSeats);

    if(bs==1)
        {
         printf("ticket price per peron is %.2f\n",ticketPrice);
         printf("total amount is %.2f\n\n",total_amount);


            printf("1.online payment\n");
            printf("2.cash\n");
            printf("enter choice\n");
            scanf("%d",&ch);

            switch(ch)
            {
                case 1:
                            // Get payment details from the user
                        printf("Enter your card number: ");
                        scanf("%s", payment_details.cardNumber);
                        printf("Enter expiration date (MM/YYYY): ");
                        scanf("%s", payment_details.expirationDate);
                        printf("Enter CVV: ");
                        scanf("%s", payment_details.cvv);

                        // Process payment
                        if (payment_process(total_amount, &payment_details))
                            {
                            // If payment is successful, book the seats

                            printf("%d seat(s) booked successfully for Train %d.\n\n", numSeats, trainNumber);
                        }
                        else
                        {
                            printf("Payment failed. Please check your payment details.\n\n");
                        }
                break;
                case 2:
                        //if payment is done in offline mode
                        printf("Payment successful. Thank you!\n\n");
                break;

                default:
                        printf("Invalid choice.\n");

                }
        }
}

/**case 11:traversal**/
/*
function name i):traverse
input:NIL
return type:void
Description: gives choices to traverse

function name ii):bfs_traverse
input:a[][],source
return type:void
Description:prints the data in bfs traversal

function name iii):dfs_traverse
input:a[][],source
return type:void
Description:prints the data in dfs traversal
*/


void traverse()
{
    int ch;
   int source;

        printf("1.bfs traversal\n");
        printf("2.dfs traversal\n");

        printf("enter choice in traverse\n");
        scanf("%d",&ch);

              printf("1: Devaraja_Market\n");

              printf("2: University_of_Mysore\n");

              printf("3: Kukkarahalli_Lake_Park\n");

              printf("4: K.R._Hospital\n");

              printf("5: Mysore_Palace\n");

              printf("6: Jayalakshmipuram\n");

              printf("7: Mysore_City_Bus_Stand\n");

              printf("8: Karanji_Lake\n");

              printf("9: Regional_Museum_of_Natural_History\n");

              printf("10: Devaraja_Police_Station\n");

              printf("11: Mall_of_Mysore\n");

              printf("12: Siddhartha_Layout\n");

              printf("13: Mysore_Junction_Railway_Station\n");

              printf("14: Cheluvamba_Park\n");

              printf("15: Gokulam\n");

              printf("16: Apollo_BGS_Hospitals\n");

              printf("17: Sayyaji_Rao_Road\n");

              printf("18: Vidyaranyapuram_Police_Station\n");

              printf("19: Brindavan_Gardens\n");

              printf("20: National_Institute_of_Engineering\n");

              printf("21: Krishnaraja_Police_Station\n");

              printf("22: Mysore_Medical_College_and_Research_Institute\n");

              printf("23: Ashokapuram_Railway_Station\n");

              printf("24: Devanoor_Lake\n");

              printf("25: Folklore_Museum\n");

              printf("26: R.S._Naidu_Nagar_Bus_Stand\n");

              printf("27: Lingambudhi_Lake\n");

              printf("28: JSS_Science_and_Technology_University\n");

              printf("29: Srirangapatna_Railway_Station\n");

              printf("30: Suburban_Bus_Stand\n");

              printf("31: Saraswathipuram\n");

              printf("32: CFTRI_Campus\n");

              printf("33: Kuvempu_Nagar\n");

              printf("34: Vijayanagar\n");

              printf("35: Mysore_Zoo\n");

              printf("36: Bamboo_Bazar\n");

              printf("37: Saraswathipuram_Police_Station\n");

              printf("38: Chamundi_Hill\n");

              printf("39: Nazarbad_Police_Station\n");

              printf("40: Gun_House_Circle\n");

              printf("41: Infosys_Mysore_Campus\n");

              printf("42: Mysore_Race_Club\n");


        switch(ch)
        {
        case 1:
                printf("bfs traversal is\n");
                printf("Enter the source:\n");
                scanf("%d",&source);
                bfs_traverse(AdjacencyMatrix,source);
                break;

        case 2:
                printf("dfs traversal is\n");
                printf("Enter the source:\n");
                scanf("%d",&source);
                dfs_traverse();
                break;
        }

}

void bfs_traverse(int a[42][42],int source)
{
   int visited[MAX];
    int queue[42];
    int front=0;
    int rear=0;
    int u;
     for(int i=0;i<MAX;i++)
        visited[i]=0;
     queue[rear]=source;
     visited[source]=1;

    printf("BFS traversal is:\n");
    while(front<=rear)
    {
        u=queue[front];
        printf("%s\n",nodes[u].name);
        front++;

        for(int i=0;i<MAX;i++)
        {
            if(a[u][i]==1 && visited[i]==0)
            {
                visited[i]=1;
                rear++;
                queue[rear]=i;
            }
        }
    }
}

void dfs(int a[][42], int size, int source, int visited[])
{
    int i;
    visited[source] = 1;
    for (i = 0; i < size; i++)
    {
        if (a[source][i] == 1 && visited[i] == 0)
        {

            printf("%s\n", nodes[i + 1].name);
            dfs(a, size, i, visited);
        }
    }
}


void dfs_traverse()
{
    int a[42][42];
    int i;
    int j;
    int visited[41];
    int source = 0;
    int size = 42;
    load_weights(a);
    for (i = 0; i < 42; i++)
    {
        for (j = 0; j < 42; j++)
        {
            if (a[i][j] == INT_MAX / 2 || a[i][j] == 0)
            {
                a[i][j] = 0;
            }
            else
            {
                a[i][j] = 1;
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        visited[i] = 0;
    }

    printf("the DFS traversal is:\n");
    dfs(a, size, source, visited);
}

/**case 12**/

/*function name i):load_from_file
input:route number
return type:void
Description:loads the data

function name ii)display route
input:NIL
return type:void
Description:prints the route
*/

void load_from_file(int route_number)
 {
    FILE *fp;

    // Construct the file name based on the route number
    char filename[15];
    sprintf(filename, "route%d.txt", route_number);

    // Open the file in read mode
    fp = fopen(filename, "r");

    // Check if the file was successfully opened
    if (fp == NULL) {
        printf("File Not found\n");
        return;
    }

    // Until the end of the file, read all the file data
    while (!feof(fp))
    {
        fscanf(fp, "%s %f", search_list[global_count].name, &search_list[global_count].kms);
        printf("%s %.2f\n", search_list[global_count].name, search_list[global_count].kms);
        global_count++;
    }

    fclose(fp);
}

void displayRouteInfo()
{
    int route;

    // Display available routes
    printf("Available Routes:\n");
    printf("1. Route-1\n");
    printf("2. Route-2\n");
    printf("3. Route-3\n");

    // Take user input for the route
    printf("Enter the route number (1, 2, or 3): ");
    scanf("%d", &route);

    // Use switch case to display specific route information
    switch (route) {
    case 1:
        printf("Route-1 Information(station, distance in km for next station):\n");
        // Load route information from file
        load_from_file(1);
        break;
    case 2:
        printf("Route-2 Information(station, distance in km for next station):\n");
        // Load route information from file
        load_from_file(2);
        break;
    case 3:
        printf("Route-3 Information(station, distance in km for next station):\n");
        // Load route information from file
        load_from_file(3);
        break;
    default:
        printf("Invalid route number. Please enter 1, 2, or 3.\n");
    }
}

/**case 13**/

/*
Function i): next_source(int dist[],int v[],int size)
Input:dist[] - an integer array containing the distances from the source node to all other nodes.
v[] - an integer array containing the visited status of all nodes.
size - an integer indicating the size of the graph.
return type:int
Description:The function returns an integer value which represents the index of the node which has the
 minimum distance among the unvisited nodes.

Function ii): check_d(int m[],int size)
Input:m[] - an integer array containing the visited status of all nodes.
size - an integer indicating the size of the graph.
return type:int
Description: The function returns an integer value.
0 - If all the nodes are visited.
1 - If there are unvisited nodes.

Function iii): shortest_path
Input:int source: the starting vertex for the path
int dest: the destination vertex for the path
int size: the total number of nodes in the graph
int path[size]: an array that stores the shortest path from the source vertex to each vertex in the graph
return type:void
Output: Prints the shortest path from the source vertex to the destination vertex.


Function iv): dijkstras()
Input:This function does not take any input. It uses the global array edges[] which contains the set of edges in the graph.
Output: This function does not return any value. It prints the shortest path from the source node to all other nodes in the
 graph along with their corresponding distances.


*/
int next_source(int dist[], int v[], int size)
{
    int min, j;
    min = INT_MAX / 2;
    for (int i = 0; i < size; i++)
    {
        if (v[i] != -1)
        {
            if (dist[i] < min)
            {
                min = dist[i];
                j = i;
            }
        }
    }

    return j;
}

int check_d(int m[], int size)
{
    int flag = 1;
    for (int i = 0; i < size; i++)
    {
        if (m[i] != -1)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        return 0;

    else
        return 1;
}


void shortest_path(int source, int dest, int size, int path[])
{
    int b[size - 1];
    int k = 1;
    int i;
    b[0] = dest;
    i = dest;
    while (path[i] != source)
    {
        b[k] = path[i];
        i = path[i];
        k++;
    }

    b[k] = source;
    k++;

    printf("from %d to %d\n", source, dest);
    for (i = k - 1; i >= 0; i--)
    {
        printf("%d->", b[i]);
    }
}


void dijkstras()
{
    int u;
    int a[42][42] ;
    int k = 0;
    int v[42];
    int source;
    int size = 42;
    int dist[42];
    int path[42];


    load_weights(a);


    // taking user input,asking for source from where the shortest distance to all other locations is to be computed.

    printf("enter source :\n");
    scanf("%d", &source);

    int i;

    for (i = 0; i < size; i++)
    {
        path[i] = source;
        dist[i] = a[source][i];
        v[i] = i;
    }

    v[source] = -1;

    while (check_d(v, size))
    {
        u = next_source(dist, v, size);
        v[u] = -1;
        for (int i = 0; i < size; i++)
        {
            if (v[i] != -1)
            {
                if (dist[i] > (dist[u] + a[u][i]))
                {
                    dist[i] = dist[u] + a[u][i];
                    path[i] = u;
                }
            }
        }
    }


    printf("dist\tpath\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\t%d\n", dist[i], path[i]);
    }
    for (i = 0; i < size; i++)
    {
        if (i != source)
        {
            shortest_path(source, i, size, path);
            printf("\ncost=%d\n\n", dist[i]);
        }
    }
}
/**case 14**/
/*
function name:rk
input:pettern[]-array of pattern
text[]-array of text
return type:int
Description:returns -1 if no match found
*/

int rk(char pattern[], char text[])
{
    int patlen = strlen(pattern);
    int textlen = strlen(text);

    // Some prime number for the hash function
    int q = 101;

    int i, j;
    int p = 0; // hash value for the pattern
    int t = 0; // hash value for the current window of text
    int h = 1;

    // Calculate h: (d^(M-1)) % q
    for (i = 0; i < patlen - 1; i++)
        h = (h * 256) % q;

    // Calculate hash value for the pattern and the first window of text
    for (i = 0; i < patlen; i++)
    {
        p = (256 * p + pattern[i]) % q;
        t = (256 * t + text[i]) % q;
    }

    // Slide the pattern over the text one character at a time
    for (i = 0; i <= textlen - patlen; i++)
    {
        // Check hash values of current window of text and pattern.
        // If the hash values match, then check character by character.
        if (p == t) {
            for (j = 0; j < patlen; j++)
            {
                if (text[i + j] != pattern[j])
                    break;
            }

            if (j == patlen)
                return i; // Match found at index i
        }

        // Calculate hash value for the next window of text: Remove leading digit, add trailing digit
        if (i < textlen - patlen)
        {
            t = (256 * (t - text[i] * h) + text[i + patlen]) % q;

            // Make sure t is non-negative
            if (t < 0)
                t = (t + q);
        }
    }

    return -1; // No match found
}

void print_node(int index)
{
    printf("Node found at index %d:\n", index);
    printf("Name: %s\n", nodes[index].name);
    printf("Type: %d\n", nodes[index].type);
    printf("Population: %d\n", nodes[index].population);
    printf("\n");
}

void print_metro(int index)
{
    printf("Metro found at index %d:\n", index);
    printf("Train Name: %s\n", list[index].trainName);
    printf("Train Number: %d\n",list[index].trainNumber);
    printf("Source: %s\n", list[index].source);
    printf("Destination: %s\n", list[index].destination);
    printf("Total Seats: %d\n", list[index].totalSeats);
    printf("Available Seats: %d\n", list[index].availableSeats);
    printf("Ticket Price: %.2f\n", list[index].ticketPrice);
    printf("Priority: %d\n", list[index].priority);
    printf("\n");
}

/**case 15**/
/*
function name i):selection_sort
input:NIL
return type:void
Description:sorts the edges in ascending order

function name ii):find
input:b[],n,u,v
return type:int
Description:return 1 or 0

function name iii):union
input:b[],n,u,v
return type:void

function name iv):traffic_signal
input:NIL
return type:void
Description :after computing all the function prints all the edges and total cost or distance

*/
void selection_sort()
{
    // using selection sort to sort the edges in increasing order

    int min;
    int i;
    int j;

    edge temp;

    for (i = 0; i < MAX-1; i++)
    {
        min = i;
        for (j = i + 1; j < MAX; j++)
        {
            if (edges[j].dist < edges[min].dist)
            {
                min = j;
            }
        }

        temp = edges[i];
        edges[i] = edges[min];
        edges[min] = temp;

   }
}


int find(int b[], int n, int u, int v)
{
    if (b[u] == b[v])
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void union_k(int b[], int n, int u, int v)
{
    int temp;
    temp = b[u];
    for (int i = 0; i < n; i++)
    {
        if (b[i] == temp)
        {
            b[i] = b[v];
        }
    }
}

void traffic_signal()
{
     int i = 0;
    int k, j;
    int sum = 0;
    int b[42];

    for (i = 0; i < 42; i++)
    {
        b[i] = i;
    }


    selection_sort();
    // sorts the edges

    for(i=0;i<MAX;i++)
    {
        k = find(b, 42, edges[i].src, edges[i].dest);
        if (k == 0)
        {
            printf("%d\t%d\n", edges[i].src, edges[i].dest);
            printf("Green signal from intersection %d to %d(Distance:%d)\n",edges[i].src,edges[i].dest,edges[i].dist);
            sum = sum + edges[i].dist;
            union_k(b, 42, edges[i].src, edges[i].dest);
        }

        i++;
    }

      printf("Total distance for Green signals: %d\n", sum);

}

/**case 16**/

/*function name:prims
input:NIL
return type:void
*/

int min_key(int key[], int mst_set[], int V)
 {
    int min = INT_MAX, min_index;

    for (int v = 0; v < MAX; v++)
    {
        if (mst_set[v] == 0 && key[v] < min)
        {
            min = key[v];
            min_index = v;
        }
    }

    return min_index;
}

void print_mst(int parent[], int a[MAX][MAX], int V)
{
    printf("Edge \t\t\t\t\t\tWeight\n");
    for (int i = 1; i < V; i++)
        printf("%s ---%s %d \n", nodes[parent[i]].name, nodes[i].name, a[i][parent[i]]);
}

void prims()
{
int a[42][42];
    int s;
    load_weights(a);

    printf("enter source\n");
    scanf("%d",&s);
    int parent[MAX]; // Array to store constructed MST
    int key[MAX];    // Key values used to pick minimum weight edge in cut
    int mst_set[MAX]; // To represent set of vertices included in MST

    for (int i = 0; i < MAX; i++)
    {
        key[i] = INT_MAX;
        mst_set[i] = 0;
    }

    key[0] = 0;     // Make key 0 so that this vertex is picked as the first vertex
    parent[0] = -1; // First node is always the root of the MST

    for (int count = 0; count < MAX - 1; count++)
    {
        int u = min_key(key, mst_set, MAX);

        mst_set[u] = 1;

        for (int v = 0; v < MAX; v++)
        {
            if (a[u][v] && mst_set[v] == 0 && a[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = a[u][v];
            }
        }
    }

    print_mst(parent,a, MAX);
}

/**case 16**/
/*
Function i): ma
Input:Two character arrays (strings)
Output: An integer value indicating which of the two input strings is lexicographically greater,
with a return value of 1 indicating that the first string is greater,
2 indicating that the second string is greater, and 0 indicating that they are equal.

Function ii): height_tree
Input:A pointer to a node in an AVL tree
Output: An integer value representing the height of the input node in the AVL tree

Function iii):newnode
Input:A NODE structure containing the key of the new node to be created
Output: A pointer to a new struct tree node with the given key and NULL left and right pointers and height 1.

Function iv):maximum
Input:Two integer values a and b
Output: An integer value representing the maximum of the input values a and b

Function v):right_rotate
Input:A pointer to a node in an AVL tree that is the root of a left-heavy subtree
Output: A pointer to the new root of the subtree after a right rotation has been performed.

Function vi):left_rotate
Input:A pointer to a node in an AVL tree that is the root of a right-heavy subtree
Output: A pointer to the new root of the subtree after a left rotation has been performed.

Function vii): getbalance
Input:Pointer to a node T in the AVL tree.
Output: Integer representing the balance factor of the node T.

Function viii): insert
Input:Pointer to the root node t of an AVL tree
and a NODE struct n to be inserted.
Output: Pointer to the new root of the AVL tree after the insertion operation.

Function ix): inorder
Input:Pointer to the root node head of an AVL tree.
Output: None.

Function x):avl
Input: None.
Output: None.

*/

int ma(char str1[], char str2[])
{
    int i;

    for (i = 0; i < strlen(str1) || strlen(str2); i++)
    {
        if (str1[i] > str2[i])
            return 2;

        else if (str1[i] < str2[i])
            return 1;
    }

    return 0;
}

int height_tree(struct tree *t)
{
    // function to compute the height of the tree

    if (t == NULL)
        return 0;

    return t->height;
}

struct tree *newnode(node t)
{
    // creates a newnode in AVL tree

    struct tree *temp = (struct tree *)malloc(sizeof(struct tree));

    temp->right = NULL;
    temp->left = NULL;
    temp->key = t;
    temp->height = 1;
    return temp;
}

int maximum(int a, int b)
{
    // to compute the max of 2 integers

    if (a > b)
        return a;

    return b;
}

struct tree *right_rotate(struct tree *t)
{
    // function to perform right rotation

    struct tree *x = t->left;
    struct tree *y = x->right;

    x->right = t;
    t->left = y;
    t->height = maximum(height_tree(t->left), height_tree(t->right)) + 1;
    x->height = maximum(height_tree(x->left), height_tree(x->right)) + 1;

    return x;
}

struct tree *left_rotate(struct tree *t)
{
    // function to perform left rotation

    struct tree *x = t->right;
    struct tree *y = x->left;

    x->left = t;
    t->right = y;
    t->height = maximum(height_tree(t->left), height_tree(y->right)) + 1;
    x->height = maximum(height_tree(x->left), height_tree(x->right)) + 1;

    return x;
}

int getbalance(struct tree *T)
{
    // function to compute the balance factor of each node

    // always the balance factor is either 0,1,2,-1,-2

    // if balance factor is not from above,then suitable rotations are performed and the tree is balanced.

    // Balance factor of AVL = height of left subtree - height of right subtree

    if (T == NULL)
        return 0;

    return height_tree(T->left) - height_tree(T->right);
}

struct tree *inserts(struct tree *t,node n)
{
    // function to insert node in AVL tree

    // if tree is empty,the newnode itself becomes the root of the tree.
    if (t == NULL)
        return (newnode(n));

    if (ma(n.name, t->key.name) == 1)
        t->left = inserts(t->left, n);

    else if (ma(n.name, t->key.name) == 2)
        t->right = inserts(t->right, n);

    else
    {
        t->height = 1 + maximum(height_tree(t->left), height_tree(t->right));
        int balance = getbalance(t);

        if (balance > 1 && ma(n.name, t->left->key.name) == 1)
            return right_rotate(t);

        if (balance < -1 && ma(n.name, t->left->key.name) == 2)
            return left_rotate(t);
    }

    return t;
}

void inorders(struct tree *head)
{
    // function which computes inorder traversal of AVL tree

    // The inorder traversal of AVL tree will yield the locations of cities in alphabetical orderr.

    if (head != NULL)
    {
        inorders(head->left);
        printf("%s\n", head->key.name);
        inorders(head->right);
    }
}

void avl()
{
    // function which constructs the AVL tree

    struct tree *head = NULL;
    for (int i = 0; i < MAX; i++)
    {
        head = inserts(head, nodes[i]);
    }

    printf("Printing the ciities which are sorted in alphabetical order : \n");
    inorders(head);

}
