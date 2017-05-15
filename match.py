# -*- coding: utf-8 -*-
"""
Created on Mon May 15 12:06:17 2017

@author: harvey.zheng
"""
import matplotlib.pyplot as plt
import numpy as np

#x = np.arange(1, 13, 1)

x = np.array([4.15, 4.14, 4.12, 4.10, 4.08, 4.05, 4.03, 3.97, 3.93, 3.90, 3.87, 3.84, 3.81, 3.79,3.77, 3.76, 3.76, 3.74, 3.73, 3.72, 3.71, 3.69, 3.66, 3.65, 3.64,3.63, 3.61, 3.59])
y = np.array([99, 97, 95, 92, 90, 87, 85, 80, 75, 70, 65, 60, 55, 50, 45, 42, 40, 35, 30, 25, 20, 15, 12, 10,8, 5, 3, 1])
z1 = np.polyfit(x, y, 3)
p1 = np.poly1d(z1)
print(p1)
yvals=p1(x)
plot1=plt.plot(x, y, '*',label='original values')
plot2=plt.plot(x, yvals, 'r',label='polyfit values')
plt.xlabel('x axis')
plt.ylabel('y axis')
plt.legend(loc=4)
plt.title('battle')
plt.show()