#include "ros/ros.h"
#include "std_msgs/Int32.h"

int count=0;

void chatterCallback(const std_msgs::Int32::ConstPtr& msg)
{
    count = msg->data;
    ROS_INFO("second_node : %d\n", count);
}

int main(int argc, char **argv)
{
    ros::init(argc, argv, "secondnode");
    ros::NodeHandle n;
    
    while(n.ok())
    {   
        if(count > 100) count = 0;
        ROS_INFO("second_node : %d\n", count);
        ros::Duration(2).sleep();
        count ++;
        ros::Subscriber sub = n.subscribe("num", 1000, chatterCallback);
        ros::spin();

    }
    
    return 0;
}

