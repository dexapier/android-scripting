#!/bin/bash

cd src && \
make && \
make install && \
cd ../luasocket && \
make && \
make install && \
cd .. && \
cp -r ase/android json4lua/json build/lua/share/lua/5.1 && \
echo "SUCCESS"
