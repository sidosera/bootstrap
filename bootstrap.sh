#!/bin/sh

export CN=bootstrap
export WD=$(pwd)

docker-compose up -d
docker exec $CN /bin/bash -c "adduser $CN; usermod -a -G sudo $CN; echo -e '$CN\n$CN' | passwd  $CN"