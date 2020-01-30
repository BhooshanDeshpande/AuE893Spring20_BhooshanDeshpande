#!/usr/bin/env python

import rospy 
from geometry_msgs.msg import Twist
from math import pi 

class square:
	def __init__(self):
		rospy.on_shutdown(self.cleanup)
		self.pub = rospy.Publisher('/turtle1/cmd_vel',Twist, queue_size=10)
		rospy.sleep(0.2)
		r = rospy.Rate(5)
		while not rospy.is_shutdown():
			twist = Twist()
			twist.linear.x = 0.2
			for i in range(50): #10/5 Hz = 2 second
				self.pub.publish(twist)
				r.sleep()
			twist = Twist()
			twist.angular.z = pi/4 #
			for i in range(10):
				self.pub.publish(twist)
				r.sleep() 

	def cleanup(self):
		twist = Twist()
		self.pub.publish(twist)
		rospy.spin()
if __name__ == "__main__":
	rospy.init_node('square')
	square() 

	


