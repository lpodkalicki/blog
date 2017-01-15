#!/bin/bash

# Configuration
WORKDIR=~
TOOLCHAIN_BASEURL=https://dl.espressif.com/dl/
TOOLCHAIN_FILEPATTERN=xtensa-esp32-elf-linux#arch#-1.22.0-61-gab8375a-5.2.0.tar.gz


# -------------------------------------------
# 0. Parse arguments
while [[ $# -gt 1 ]]
do
key="$1"
case $key in
    -d|--directory)
    WORKDIR="$2"
    shift
    ;;
    *)
    # unknown option
    ;;
esac
shift # past argument or value
done


# -------------------------------------------
# 1. Prepare base directory
ESPDIR=$WORKDIR/esp
if [ -d "$ESPDIR" ]; then
	echo "Directory already exists: $ESPDIR, exiting..."
	exit 1
fi
mkdir -p $ESPDIR
cd $ESPDIR


# -------------------------------------------
# 2. Collect and install tools
sudo apt-get install git wget make libncurses-dev flex bison gperf python python-serial


# -------------------------------------------
# 3. Download and unpack binary toolchain for ESP32
if [ $(uname -m) == 'x86_64' ]; then
	TOOLCHAIN_FILE=$(echo $TOOLCHAIN_FILEPATTERN | sed 's/#arch#/64/g')
else
	TOOLCHAIN_FILE=$(echo $TOOLCHAIN_FILEPATTERN | sed 's/#arch#/32/g')
fi
wget $TOOLCHAIN_BASEURL/$TOOLCHAIN_FILE
tar -xzf $TOOLCHAIN_FILE
TOOLCHAIN_DIR="$ESPDIR/xtensa-esp32-elf/bin"
export PATH=$PATH:$TOOLCHAIN_DIR
echo "export PATH=\$PATH:$TOOLCHAIN_DIR" >> ~/.bashrc


# -------------------------------------------
# 4. Get ESP-IDF from GitHub
git clone --recursive https://github.com/espressif/esp-idf.git
IDF_DIR="$ESPDIR/esp-idf"
export IDF_PATH=$IDF_DIR
echo "export IDF_PATH=$IDF_DIR" >> ~/.bashrc


echo "-------------------------------------------"
echo "SUCCESS!"
echo "ESP-Toolchain directory: $TOOLCHAIN_DIR"
echo "ESP-IDF directory: $IDF_DIR"
