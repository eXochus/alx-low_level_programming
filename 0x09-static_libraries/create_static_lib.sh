#!/bin/bash

# Define the name of the static library
LIB_NAME="liball.a"

# Step 1: Compile all .c files in the current directory into object files (.o)
echo "Compiling .c files into object files..."
# Find all .c files and compile each one
for c_file in *.c; do
    if [ -f "$c_file" ]; then # Check if it's a regular file
        gcc -c "$c_file" -o "${c_file%.c}.o"
        if [ $? -ne 0 ]; then
            echo "Error compiling $c_file. Aborting."
            exit 1
        fi
    fi
done

# Check if any object files were created
object_files=$(ls *.o 2>/dev/null)
if [ -z "$object_files" ]; then
    echo "No .o files found to create the library. Make sure there are .c files in the directory."
    exit 1
fi

# Step 2: Create the static library from all object files
echo "Creating static library $LIB_NAME from object files..."
ar rcs "$LIB_NAME" *.o

# Check if the static library was created successfully
if [ $? -eq 0 ]; then
    echo "Static library $LIB_NAME created successfully."
else
    echo "Error creating static library $LIB_NAME."
    exit 1
fi

# Step 3: Clean up (optional) - remove the individual object files
echo "Cleaning up object files..."
rm -f *.o
echo "Cleanup complete."
