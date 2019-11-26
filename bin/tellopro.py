from tello import Tello
import sys
from datetime import datetime
import time
import TelloPro

tello = Tello()

command_lst = []
command_lst.append(TelloPro.get_instance('takeoff',-1)) #의미 없음
command_lst.append(TelloPro.get_instance('up',50))
command_lst.append(TelloPro.get_instance('down',30))
command_lst.append(TelloPro.get_instance('left',30))
command_lst.append(TelloPro.get_instance('right',30))
command_lst.append(TelloPro.get_instance('forward',40))
command_lst.append(TelloPro.get_instance('back',40))
command_lst.append(TelloPro.get_instance('cw',90))
command_lst.append(TelloPro.get_instance('ccw',125))
#for i in range(4):
#		command_lst.append(TelloPro.get_instance('flip', i)) #-1 의미 없음. 맞춰주기위함

for command in command_lst:
	tello.send_command_instance(command)
