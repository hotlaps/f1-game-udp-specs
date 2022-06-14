#!/bin/bash
FILES_2022=(`ls -1 2022`)

for ((i=0; i < ${#FILES_2022[@]}; i++)); do
    git diff --no-index "2021/${FILES_2022[$i]}" "2022/${FILES_2022[$i]}" > "diff_2021-2022/${FILES_2022[$i]}.diff"
done