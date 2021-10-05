set -e
mkdir -p build
cd build
cmake .. -G "Unix Makefiles" -DCMAKE_INSTALL_PREFIX=/usr/local -DCMAKE_BUILD_TYPE=Debug
make -j$(nproc)