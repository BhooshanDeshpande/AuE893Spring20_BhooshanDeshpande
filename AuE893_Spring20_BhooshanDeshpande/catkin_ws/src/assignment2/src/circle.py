#! /usr/bin/env python
#specifies that the node is written in python

import rospy
from geometry_msgs.msg import Twist

def move_round():
	#starts a node
	rospy.init_node('move_it',anonymous=True)
	velocity_publisher = rospy.Publisher('/turtle1/cmd_vel',Twist,queue_size=10)
	vel_msg = Twist()
	
	print("\n Your robot will now go in circle \n")
	speed = 0.5
	radius = 1
	
	#setting vel_msg data :
	vel_msg.linear.x = speed
	vel_msg.linear.y = 0
	vel_msg.linear.z = 0
	vel_msg.angular.x = 0 
	vel_msg.angular.y = 0
	vel_msg.angular.z = speed/radius

	while not rospy.is_shutdown():
		start_time=rospy.Time.now()
		
		while rospy.Time.now() < start_time+rospy.Duration.from_sec(20):
			velocity_publisher.publish(vel_msg)			
		vel_msg.linear.x=0
		vel_msg.angular.z=0
		velocity_publisher.publish(vel_msg)
	

if __name__=='__main__':
	try: 
		move_round()
	except rospy.ROSInterruptException: pass

