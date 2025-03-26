#pragma once
#include <cmath>
#include <stdio.h>
#include <iostream>
#include <random>
#include <string>
#include <conio.h>
#include "RandGen.h";
class lab_006 {
public:
    int n, sublab_id, sublab_2_method_id;
    char digit;
    int* arr;
    lab_006(int n);
    int prepare(int* sl_id, int* sl_2_m_i);
private:
    int hand_writing();
    int random_generation();

    int sublab_1();
    int sublab_2_using_index();
    int sublab_2_using_iteration();
};