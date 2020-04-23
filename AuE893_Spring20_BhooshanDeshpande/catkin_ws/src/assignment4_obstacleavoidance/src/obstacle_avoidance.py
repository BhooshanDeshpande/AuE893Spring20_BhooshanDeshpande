#! /usr/bin/env python

import rospy
from std_msgs.msg import String
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist
import numpy as np 
import math

from nav_msgs.msg import Odometry

def divide(x,y):
    try:
        return x/y
    except ZeroDivisionError:
        return 1000


def callback(data):
    left = data.ranges[5:15]
    front = data.ranges[0:5] + data.ranges[355:360]
    right = data.ranges[345:355] 
    filtered_left = [num for num in left if num<1000]
    filtered_right = [num for num in right if num<1000]
    filtered_front = [num for num in front if num<1000]
    total_span = filtered_left + filtered_right + filtered_front
    avg_left =  divide(sum(filtered_left),len(filtered_left))
    avg_right= divide(sum(filtered_right),len(filtered_right))
    avg_front = divide(sum(filtered_front),len(filtered_front))
    closest_dist = min(avg_left,avg_right,avg_front)
    kz = 0.3
    # if closest_dist < 0.4: 
    #     print('obstacle ahead!')
    #     if closest_dist == avg_left:
    #         velocity_msg.angular.z = -kz/(closest_dist)
    #         velocity_msg.linear.x = 0.0
    #     elif closest_dist == avg_right:
    #         velocity_msg.angular.z = kz/(closest_dist)
    #         velocity_msg.linear.x = 0.0
    #     elif closest_dist == avg_front:
    #         velocity_msg.angular.z = kz/(closest_dist)
    #         velocity_msg.linear.x = 0.0
    #     else: 
    #         velocity_msg.angular.z = 0
    #         velocity_msg.linear.x = 0.4
    # else:
    #     print('cruising..')
    #     velocity_msg.angular.z = 0
    #     velocity_msg.linear.x = 0.4
    if min(total_span) > 2:
        print('cruising..')
        velocity_msg.angular.z = 0
        velocity_msg.linear.x = 0.4
    else:
        if avg_left < avg_right: #left obstacle closer
            velocity_msg.angular.z = -kz/(closest_dist)
            velocity_msg.linear.x = 0.0
        elif avg_right > avg_left: # right obstacle closer
            velocity_msg.angular.z = kz/(closest_dist)
            velocity_msg.linear.x = 0.0
        else:
            velocity_msg.angular.z = 0
            velocity_msg.linear.x = -0.2

    pub.publish(velocity_msg)

rospy.init_node('turtle_control', anonymous=True)
velocity_msg=Twist()
pub = rospy.Publisher('cmd_vel', Twist, queue_size= 10)
scan = rospy.Subscriber('scan', LaserScan,callback)
rate = rospy.Rate(10)
while not rospy.is_shutdown():
    pub.publish(velocity_msg)
    rate.sleep()
    pass
