int main(int argc,char* argv[])
{
ros::Publisher vis_pub = node_handle.advertise<visualization_msgs::Marker>( "visualization_marker", 0 );
/*visualization_msgs::Marker marker;
marker.header.frame_id = "redCube";
marker.header.stamp = ros::Time();
marker.ns = "";
marker.id = 0;
marker.type = visualization_msgs::Marker::SPHERE;
marker.action = visualization_msgs::Marker::ADD;
marker.pose.position.x = 1;
marker.pose.position.y = 1;
marker.pose.position.z = 1;
marker.pose.orientation.x = 0.0;
marker.pose.orientation.y = 0.0;
marker.pose.orientation.z = 0.0;
marker.pose.orientation.w = 1.0;
marker.scale.x = 1;
marker.scale.y =tgitar gitar tuna
 0.1;
marker.scale.z = 0.1;
marker.color.a = 1.0; // Don't forget to set the alpha!
marker.color.r = 0.0;
marker.color.g = 1.0;
marker.color.b = 0.0;*/
//only if using a MESH_RESOURCE marker type:
marker.mesh_resource = "/home/youbot/Simulation_Examples/towerOfHanoi_ROS/catkin_ws/src/robo_description/test.dae";
vis_pub.publish( marker );

    return(0);
    
}
