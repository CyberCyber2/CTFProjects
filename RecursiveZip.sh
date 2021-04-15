#!/bin/bash
FILES=/home/cyber/Desktop/files/answer.txt
i=0
for f in {1..70}
do
  if [ $((i%2)) -eq 0 ] 
    then
      bzip2 $FILES
      rm -rf $FILES
      FILES=/home/cyber/Desktop/files/*.bz2
    else
      gzip $FILES
      rm -rf $FILES
      FILES=/home/cyber/Desktop/files/*.gz 
  fi
  i=$((i+1))
echo $i
done
