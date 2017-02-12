#!/bin/bash

TOOLCHAIN_DOWNLOAD_URL="https://launchpad.net/gcc-arm-embedded/5.0/5-2016-q3-update/+download/gcc-arm-none-eabi-5_4-2016q3-20160926-linux.tar.bz2"

echo "Installing ARM NONE EABI Toolchain on Ubuntu:"

ubuntu=$(uname -a | grep -i "ubuntu" | wc -l)
if [ $ubuntu -ne 1 ]; then
	echo "[ERROR] Not Ubuntu OS."
	exit 1
fi

# set defaults
installation_directory="$HOME/arm"
bashrc_filepath="$HOME/.bashrc"
step=1
update_bashrc_file=0

while getopts ":d:b" opt; do
	case $opt in
	d)
      	installation_directory=$OPTARG
	;;
	b)
	update_bashrc_file=1
      	;;
	\?)
	echo "[ERROR] Invalid option: -$OPTARG" >&2
	exit 1
	;;
	:)
	echo "[ERROR] Option -$OPTARG requires an argument." >&2
	exit 1
	;;
	esac
done


printf "[%d] Preparing installation directory: $installation_directory\n" $((step++))
mkdir -p $installation_directory
cd $installation_directory


printf "[%d] Downloading toolchain file: $TOOLCHAIN_DOWNLOAD_URL\n" $((step++))
wget https://launchpad.net/gcc-arm-embedded/5.0/5-2016-q3-update/+download/gcc-arm-none-eabi-5_4-2016q3-20160926-linux.tar.bz2
downloaded_filename=$(ls -d *.bz2)


printf "[%d] Unpacking file: $downloaded_filename\n" $((step++))
tar xjf $downloaded_filename
unpacked_directory=$(ls -d */)
toolchain_directory=$installation_directory/$unpacked_directory

if [ $update_bashrc_file -eq 1 ]; then
	printf "[%d] Updating $bashrc_filepath file.\n" $((step++))
	sed -i '/gcc-arm-none-eabi/d' $bashrc_filepath
	echo "export PATH=\$PATH:$toolchain_directory/bin" >> $bashrc_filepath
fi


echo
echo "Toolchain $toolchain_directory installed successfully."
echo
