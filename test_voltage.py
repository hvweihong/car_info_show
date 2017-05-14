#!/usr/bin/python
# -*- coding=utf-8 -*-
import time 
import sys
import os
import re
import  msvcrt
import math

x = float(raw_input("please enter voltage: "))
soc = -256.6*pow(x, 3) + 2750*pow(x, 2) - 9557*x + 10737
print soc
time.sleep(2)