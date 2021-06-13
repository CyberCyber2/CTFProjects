#!/bin/bash
#generate wordlist
mp64 -1 abcde -2 LMNOPQ -3 \!\@|&|_ ?1?1?2?d?3?114 | tr -s 'a-z' >> file.txt
File = "/home/cyber/Desktop/file.txt"
Hashes = "/home/cyber/Desktop/hashes.txt"
Target = "aeeb5e4b1802bd5c788602a1f4b64f9d28c74d3dacb4f9d19dbeac9860d94771"

#loop
while read in; do echo -n $in | sha256sum | awk '{print $1}' >> hashes.txt ; done < file.txt

if (grep -q $Target $Hashes) 
then
  echo "Hash found"
  line=$(grep -n $Target /home/cyber/Desktop/hashes.txt | cut -d: -f1 | cut -d ' ' -f1)
  echo $line
  sed -n ${line}p $File && sed -n ${line}p $Hashes
 else
  echo "No matching hashes found
fi
