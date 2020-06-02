#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Tue Jun  2 12:39:29 2020

@author: dsp
"""
import turtle
import serial

ser = serial.Serial('/dev/ttyACM0", 9600')

window = turtle.Screen()
window.bgcolor('black')

t = turtle.Turtle()
t.color('cyan')
t.pensize(3)

while(serial.available() > 0):
    values = serial.read_until(';')
    print(values)
    
turtle.bye()
ser.close()

