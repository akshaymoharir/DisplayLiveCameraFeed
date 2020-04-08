#!/usr/bin/env bash

# Find base dir
BASEDIR=$(dirname "$0")
echo "$BASEDIR"

# Copy base dir
currentDir=$BASEDIR
echo "${currentDir}"

# Browse to root directory of the app
desiredPath="${currentDir}/.."
echo "${desiredPath}"
cd ${desiredPath}

cd HelloWorldApp/macOSBuild
make clean
cmake ..
make
./myHelloWorldApp
cd ../..

# Build fresh docker image(--no-cache)
docker build --no-cache -t helloworld .

# Run docker image to see output
docker run -it helloworld

# Obtain container ID
CONTAINER_ID=$(docker ps -alq)

# Copy built binaries to host
docker cp $CONTAINER_ID:/RepoRootFolder/HelloWorldApp/buildDocker ../HelloWorld/HelloWorldApp/dockerContainerBuild/

# Stop docker container
docker stop $CONTAINER_ID



