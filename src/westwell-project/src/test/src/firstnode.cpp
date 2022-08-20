#include "ros/ros.h"
#include "std_msgs/Int32.h"
using namespace std;

int main(int argc, char **argv)
{
    ros::init(argc, argv, "firstnode");
    ros::NodeHandle n;
    ros::Publisher pub = n.advertise<std_msgs::Int32>("num", 1000);
    ros::Rate loop_rate(10);

    int num;
    while (ros::ok())
    {
        std_msgs::Int32 msg;
        cin >> num;
        if(num<0 || num>100)
        {
            cout << "Invalid number!" << endl;
        }
        else
        {
            msg.data = num;
            ROS_INFO("first_node : %d", msg.data);
            pub.publish(msg);
            ros::spinOnce();
            loop_rate.sleep();
        }
    }
    return 0;
}
