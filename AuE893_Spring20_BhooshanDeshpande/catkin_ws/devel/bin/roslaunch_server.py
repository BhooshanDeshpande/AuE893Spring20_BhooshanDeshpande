#!/usr/bin/python2
# -*- coding: utf-8 -*-
# generated from catkin/cmake/template/script.py.in
# creates a relay to a python script source file, acting as that file.
# The purpose is that of a symlink
python_script = '/home/bhooshan/Desktop/Bhooshan-ubuntu/autonomy_science_systems/AuE893_Spring20_BhooshanDeshpande/AuE893_Spring20_BhooshanDeshpande/catkin_ws/src/People_Detection/strands_apps/roslaunch_axserver/scripts/roslaunch_server.py'
with open(python_script, 'r') as fh:
    context = {
        '__builtins__': __builtins__,
        '__doc__': None,
        '__file__': python_script,
        '__name__': __name__,
        '__package__': None,
    }
    exec(compile(fh.read(), python_script, 'exec'), context)
