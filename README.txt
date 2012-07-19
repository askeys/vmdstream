vmdstream
=========

Communicate with VMD from C++ iostream using a hidden TCP connection

=========

Installation instructions:

- Option 1: manual installation

$ sudo cp -r include /usr/local/include/vmdstream

- Option 2: using cmake

$ cd ${VMDSTREAM_SRC_DIRECTORY}
$ mkdir build
$ cd build
$ ccmake ../CMakeLists.txt
$ make
$ sudo make install