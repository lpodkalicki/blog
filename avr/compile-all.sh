#!/bin/sh
# Compile all projects in repo.
# Lukasz Podkalicki <lpodkalicki@gmail.com>
# -

for mcu in `ls`
do
	if [ -d $mcu ]; then
		for project in `ls ${mcu}`
		do
			if [ -d "$mcu/$project" ]; then
				cd "$mcu/$project"
				echo -n "[${mcu}] Compiling project \"${project}\" "
				make > /dev/null 2>&1
				if [ $? = 0 ]; then echo "[OK]"; else echo "[\033[31mFAIL\033[m]"; fi
				cd ../..
			fi
		done
	fi
done
