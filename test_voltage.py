#!/usr/bin/python
# -*- coding=utf-8 -*-
"""
Created on Mon May 15 12:06:17 2017

@author: harvey.zheng
"""
import math

while 1:
    x = float(raw_input("please enter voltage: "))
    #soc = -256.6*math.pow(x, 3) + 2750*math.pow(x, 2) - 9557*x + 10737
    #print soc
    u = 0.000002414*math.pow(x, 3) - 0.0003759*math.pow(x, 2) + 0.02146*x + 3.413
    print u