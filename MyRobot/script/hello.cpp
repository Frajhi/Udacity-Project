#include <gazebo/gazebo.hh>
namespace gazebo
{
class worldPluginMyRobot : public worldPlugin
{ public: worldPluginMyRobot() : worldPlugin()
{ printf("Hello Udacity!\n");}
public: void Load(physics::worldPtr _world, sdf::ElementPtr _sdf)
{
}
};
GZ_REGISTER_WORLD_PLUGIN(worldPluginMyRobot)
}
