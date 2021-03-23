//
// Created by jacinaldo on 23/03/2021.
//
#include <iostream>
#include "Validation.h"

/**
 * cannot be NUll
 * @param number
 */
void Validation::notNull( int number ){
    try {
        if( number == NULL ){
            std::cout << number << " O numero tem que ser diferente de Null \n";
            throw number;
        }
    }catch( std::exception e ){
        throw e;
    }
}
/**
 * number cannot be negative
 * @param number
 */
void Validation::notNegative( int number ){
    try {
        if( number < 0 ){
            std::cout << number << "O numero não pode ser negativo \n ";
            throw number;
        }
    } catch ( std::exception e ) {
        throw e;
    }
}
/**
 * number nonzero
 * @param number
 */
void Validation::notZero(int number ){
    try {
        if( number == 0 ){
            std::cout << number << "O numero tem que ser diferente de zero \n ";
            throw number;
        }
    }catch (std::error_code e){
        throw e;
    }
}
