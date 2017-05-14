#!/usr/bin/python
# -*- coding=utf-8 -*-
import time 
import sys
import os
import re
import  msvcrt
import math

U = float(raw_input("please enter voltage: "))
if U > 3.4 and U < 3.6:
	soc = 620*(U - 3.4)/1600.0
else if U >= 3.6 and U <= 3.8:
	soc = (4.2821*103.43*U-3.003*104*U+5.2733*104)/1600.0
else:
	soc = -1.8388*103*U+1.562*104U-3.2356*104
#voltage = U*17.5
#soc = 1.299*math.pow(10, -5)*math.pow(voltage, 3) - 2.632*math.pow(10, -3)*math.pow(voltage, 2) + 0.1992*voltage - 4.573
print soc
time.sleep(2)