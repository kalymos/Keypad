/*
||
|| @file Key.h
|| @version 1.0
|| @author Mark Stanley
|| @contact mstanley@technologist.com
||
|| @description
|| | Key class provides an abstract definition of a key or button
|| | and was initially designed to be used in conjunction with a
|| | state-machine.
|| #
||
|| @license
|| | This library is free software; you can redistribute it and/or
|| | modify it under the terms of the GNU Lesser General Public
|| | License as published by the Free Software Foundation; version
|| | 2.1 of the License.
|| |
|| | This library is distributed in the hope that it will be useful,
|| | but WITHOUT ANY WARRANTY; without even the implied warranty of
|| | MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
|| | Lesser General Public License for more details.
|| |
|| | You should have received a copy of the GNU Lesser General Public
|| | License along with this library; if not, write to the Free Software
|| | Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
|| #
||
*/

#ifndef Numpadlib_NUM_H_
#define Numpadlib_NUM_H_

#include <Arduino.h>

#define OPEN LOW
#define CLOSED HIGH

typedef unsigned int uint;
typedef enum{ IDLE, PRESSED, HOLD, RELEASED } NumState;

const int NO_NUM = 0;

class Num {
public:
	// members
	int nchar;
	int ncode;
	NumState Nstate;
	boolean stateChanged;

	// methods
	Num();
	Num(int userNumInt);
	void num_update(char userBumInt, NumState userState, boolean userStatus);

private:

};

#endif

/*
|| @changelog
|| | 1.0 2012-06-04 - Mark Stanley : Initial Release
|| #
*/
