#!/bin/sh

if [ -n "$DESTDIR" ] ; then
    case $DESTDIR in
        /*) # ok
            ;;
        *)
            /bin/echo "DESTDIR argument must be absolute... "
            /bin/echo "otherwise python's distutils will bork things."
            exit 1
    esac
    DESTDIR_ARG="--root=$DESTDIR"
fi

echo_and_run() { echo "+ $@" ; "$@" ; }

echo_and_run cd "/home/bhooshan/Desktop/Bhooshan-ubuntu/autonomy_science_systems/AuE893_Spring20_BhooshanDeshpande/AuE893_Spring20_BhooshanDeshpande/catkin_ws/src/People_Detection/strands_navigation/monitored_navigation"

# ensure that Python install destination exists
echo_and_run mkdir -p "$DESTDIR/home/bhooshan/Desktop/Bhooshan-ubuntu/autonomy_science_systems/AuE893_Spring20_BhooshanDeshpande/AuE893_Spring20_BhooshanDeshpande/catkin_ws/install/lib/python2.7/dist-packages"

# Note that PYTHONPATH is pulled from the environment to support installing
# into one location when some dependencies were installed in another
# location, #123.
echo_and_run /usr/bin/env \
    PYTHONPATH="/home/bhooshan/Desktop/Bhooshan-ubuntu/autonomy_science_systems/AuE893_Spring20_BhooshanDeshpande/AuE893_Spring20_BhooshanDeshpande/catkin_ws/install/lib/python2.7/dist-packages:/home/bhooshan/Desktop/Bhooshan-ubuntu/autonomy_science_systems/AuE893_Spring20_BhooshanDeshpande/AuE893_Spring20_BhooshanDeshpande/catkin_ws/build/lib/python2.7/dist-packages:$PYTHONPATH" \
    CATKIN_BINARY_DIR="/home/bhooshan/Desktop/Bhooshan-ubuntu/autonomy_science_systems/AuE893_Spring20_BhooshanDeshpande/AuE893_Spring20_BhooshanDeshpande/catkin_ws/build" \
    "/usr/bin/python2" \
    "/home/bhooshan/Desktop/Bhooshan-ubuntu/autonomy_science_systems/AuE893_Spring20_BhooshanDeshpande/AuE893_Spring20_BhooshanDeshpande/catkin_ws/src/People_Detection/strands_navigation/monitored_navigation/setup.py" \
    build --build-base "/home/bhooshan/Desktop/Bhooshan-ubuntu/autonomy_science_systems/AuE893_Spring20_BhooshanDeshpande/AuE893_Spring20_BhooshanDeshpande/catkin_ws/build/People_Detection/strands_navigation/monitored_navigation" \
    install \
    $DESTDIR_ARG \
    --install-layout=deb --prefix="/home/bhooshan/Desktop/Bhooshan-ubuntu/autonomy_science_systems/AuE893_Spring20_BhooshanDeshpande/AuE893_Spring20_BhooshanDeshpande/catkin_ws/install" --install-scripts="/home/bhooshan/Desktop/Bhooshan-ubuntu/autonomy_science_systems/AuE893_Spring20_BhooshanDeshpande/AuE893_Spring20_BhooshanDeshpande/catkin_ws/install/bin"
