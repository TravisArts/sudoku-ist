/*
 *  serie_motor.h
 *  Sudoku
 *
 *  Created by Rui Boazinha on 10/19/10.
 *  Copyright 2010 IST. All rights reserved.
 *
 */

#ifndef SERIE_MOTOR_H
#define SERIE_MOTOR_H

#include "cell.h"


int found_value(struct cell** board, int side, int line, int col, int value);


int solve_sudoku(struct cell** board, int side);

#endif