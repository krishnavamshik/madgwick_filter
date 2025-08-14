/*
 * madgwick_filter.c
 *
 *  Created on: Aug 14, 2025
 *      Author: Vamshi
 */


#include <math.h>
#include <stdio.h>
#include <stdint.h>

uint8_t beta_constant;
float delta_time_ms;
typedef struct {
    float q0;
    float q1;
    float q2;
    float q3;
}madgwick_filter_q_t;

typedef struct {
    float p0;
    float p1;
    float p2;
    float p3;
}madgwick_filter_p_t;

void initialize_madgwick_filter(madgwick_filter_q_t *q, uint8_t beta, float delta_time)
{
    q->q0 = 1;
    q->q1 = 0;
    q->q2 = 0;
    q->q3 = 0;
    beta_constant = beta;
    delta_time_ms = delta_time;
}

void madgwick_main()
{

}
