#include <gazebo/gazebo.hh>

using namespace std;

namespace gazebo
{
    class WorldPluginMyRobot: public WorldPlugin
    {
        public: WorldPluginMyRobot(): WorldPlugin()
        {
            printf("Welcome to Avishek's World\n");
        }

        public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
        {

        }
    };

    GZ_REGISTER_WORLD_PLUGIN(WorldPluginMyRobot)
}