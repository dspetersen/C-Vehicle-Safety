#include "controller.h"
#include <stdio.h>

S32 _mode;
int _speed;
S32 _count;

void controlMotors (S32 speed, S32 mode) {
	_mode = mode;
	_speed = speed;
}

// Internal mock functions
// For setting and retrieving values
S32 internGetMode () {
	return _mode;
}

int internGetSpeed () {
	return _speed;
}

void internSetSpeed (int speed) {
	_speed = speed;
	appliedPower = speed;
}

void internSetCount (S32 count) {
	_count = count;
}

