/* SoftPWM.h

  A Software PWM Library
  
  Written by Brett Hagman
  http://www.roguerobotics.com/
  bhagman@roguerobotics.com

    This library is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.


Version Modified By Date     Comments
------- ----------- -------- --------
0001    B Hagman    10/03/14 Initial coding (Pi Day!)

*************************************************/

#include <stdint.h>

#define SOFTPWM_MAXCHANNELS 16
#define SOFTPWM_PWMDEFAULT 0x00

#define ALL -1

void SoftPWMBegin(void);
void SoftPWMSet(int8_t pin, uint8_t value);
void SoftPWMSetPercent(int8_t pin, uint8_t percent);
void SoftPWMEnd(int8_t pin);
void SoftPWMSetFadeTime(int8_t pin, uint16_t fadeUpTime, uint16_t fadeDownTime);
