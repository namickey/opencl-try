#!/bin/bash

function exec_cmd {
  echo "$@" >&2
  "$@" 2>&1
}

exec_cmd gcc -o2 -g -o main main.c -lOpenCL
