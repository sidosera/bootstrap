#!/bin/sh

export HOST_WORKSPACE_DIR=$(pwd)
export CONTAINER_NAME=bootstrap

docker-compose up
