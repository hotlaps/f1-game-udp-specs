#!/bin/bash
FILES_2022=(`ls -1 2022`)

for ((i=0; i < ${#FILES_2022[@]}; i++)); do
    git diff "2022/${FILES_2022[$i]}" "2021/${FILES_2022[$i]}" >> "diff_${FILES_2022[$i]}.txt"
done