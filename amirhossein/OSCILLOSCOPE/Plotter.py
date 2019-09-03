#this is a simple Osciloscope test for Arduino 
#Osciloscope is visually representing an analog signals to its input 
#by converting the Analog to digital , ADC methud
#this code matches for LDR inorder to measure the light of environment (not accurate)
#for other operation , it should be changed a little bit 
#amir ebrahimi

import time
import matplotlib.pyplot as plt
from drawnow import *
import serial
val = [ ]
cnt = 0

port = serial.Serial('COM3', 115200, timeout=0.5) #initializing the arduino stats
plt.ion()

def makeFigure():
    plt.ylim(-1023,1023) #this is the drawing function of the plot while its getting data , and its->
    plt.title('Osciloscope')# -1023 upto 1023  becuase of arduino upper and down limit of ADC
    plt.grid(True)
    plt.ylabel('data')
    plt.plot(val, 'ro', label='output')
    plt.legend(loc='lower right')

while (True):
    port.write(b's') # also in arduino the condition of writing data throw serial is data=='s'
    if (port.inWaiting()):#and the condition of replying arduino is to...
        value = port.readline()# read 
        number = int(float(value)) #convert received data to integer  #not necessary float but if you use python 3.7 , you'll get error
        print('output: {0}'.format(number)) #and write
        time.sleep(0.01)
        val.append(int(number)) #adding another data to our data array
        drawnow(makeFigure)# and we should update the plot for new data
        plt.pause(.000001)
        cnt = cnt+1     #after 50 counting , our first element of data array will be deleted
    if(cnt>50):
        val.pop(0)