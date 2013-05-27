/** @file constants.h
 * contains all the constants required for simulation.
 * The constants are all floating points as gpus < compute
 * capability 1.2 cannot have support for double.
 */

#ifndef __CONSTANTS__
#define __CONSTANTS__
#define PI 3.1415926535897932f
#define MAX_VOL 1.0f
#define MIN_VOL 0.00001f
#define LIGHTSPEED 299792458
#define EPSILON 8.8541878176e-12f
#define MU 1.2566370614e-6f
#endif
