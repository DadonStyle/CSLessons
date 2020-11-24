#pragma once

/**
 * Clears the cin stream from characters until a new line
 */
#define CINCLEAR while (std::cin.get() != '\n');

/**
 * Returns a random character from a to z
 */
char getRandomChar();