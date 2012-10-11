
if [[ "$1" == "--graphics" ]]
then
  flag="`root-config --glibs`"
  path="$2"
else
  path="$1"
fi

echo ">>> Compiling...\c"
g++ `root-config --cflags` `root-config --libs` `root-config --glibs` "$path" -o "${path%.*}"
result=$?
echo " Done"
if [[ "$1" == "--no-run" || "$1" == "-n" || result -ne 0 ]]
then
  echo ">>> Compile errors: Not running program"
else
  echo ">>> Running program..."
  "./${path%.*}"
fi
#g++ `root-config --cflags` `root-config --libs` $flag "$path" -o "${path%.*}" && "./${path%.*}"

# If you want graphics
# `root-config --glibs`
