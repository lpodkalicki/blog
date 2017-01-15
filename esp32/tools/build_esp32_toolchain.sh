#!/bin/bash

# Configuration
BASE_DIR=~/esp
TOOLCHAIN_BASE_URL=https://dl.espressif.com/dl/
TOOLCHAIN_FILE_PATTERN=xtensa-esp32-elf-linux#arch#-1.22.0-61-gab8375a-5.2.0.tar.gz


# -------------------------------------------
# 0. Parse arguments
while [[ $# -gt 1 ]]
do
key="$1"
case $key in
    -d|--directory)
    BASE_DIR="$2"
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
if [ -d "$BASE_DIR" ]; then
	echo "Base directory already exists: $BASE_DIR, exiting..."
	exit 1
fi
mkdir -p $BASE_DIR
cd $BASE_DIR


# -------------------------------------------
# 2. Collect and install tools
sudo apt-get install git wget make libncurses-dev flex bison gperf python python-serial


# -------------------------------------------
# 3. Download and unpack binary toolchain for ESP32
if [ $(uname -m) == 'x86_64' ]; then
	TOOLCHAIN_FILE=$(echo $TOOLCHAIN_FILE_PATTERN | sed 's/#arch#/64/g')
else
	TOOLCHAIN_FILE=$(echo $TOOLCHAIN_FILE_PATTERN | sed 's/#arch#/32/g')
fi
wget $TOOLCHAIN_BASE_URL/$TOOLCHAIN_FILE
tar -xzf $TOOLCHAIN_FILE
TOOLCHAIN_DIR="$BASE_DIR/xtensa-esp32-elf/bin"
export PATH=$PATH:$TOOLCHAIN_DIR
echo "export PATH=\$PATH:$TOOLCHAIN_DIR" >> ~/.bashrc


# -------------------------------------------
# 4. Get ESP-IDF from GitHub
git clone --recursive https://github.com/espressif/esp-idf.git
IDF_DIR="$BASE_DIR/esp-idf"
export IDF_PATH=$IDF_DIR
echo "export IDF_PATH=$IDF_DIR" >> ~/.bashrc


echo "-------------------------------------------"
echo "Base directory: $BASE_DIR"
echo "ESP-Toolchain directory: $TOOLCHAIN_DIR"
echo "ESP-IDF directory: $IDF_DIR"
echo "SUCCESS!"
