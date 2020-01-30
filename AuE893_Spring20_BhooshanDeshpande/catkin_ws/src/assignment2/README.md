This assignment contains the code for making a turtle in a turtlebot simulation go in the following shapes: 
----------------------------------------------------------------
There are three codes written for that: 
1. circle.py
2. square_openloop.py
3. square_closeloop.py

circle.py --------------------

This code publishes a twist message on /cmd_vel topic. This topic is subscribed by the listener node, which is /turtlesim_node. 

square_openloop.py -----------

This code will turn the turtlebot in a square loop with a velocity of 0.2 rad/s (linear and angular both). The code basically adjusts the Twist() values whenever the bot starts or reaches the edge of the square loop.

square_closeloop.py --------------

This code will turn the turlebot from it's original position using a publisher and a subscriber node. The pose is read by the subsriber node and changes are made accordingly in the turtlebot's Twist() message, which is later published on /cmd_vel topic. twist message is computed according to the error in the current pose and the goal pose. This makes it essentially a p-controller bot. 

------------------------------------------------------------------

The launch files are included in the package under the name> 

Directly run these commands to see the turtlebot shapes. 

$ roslaunch assignment2 circle.py

$ roslaunch assignment2 square_openloop.py

$ roslaunch assignment2 square_closedloop.py

--------------------------------------------------------------------
