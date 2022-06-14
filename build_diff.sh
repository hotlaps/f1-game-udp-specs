#!/bin/bash
FILES_2022=(`ls -1 2022`)

for ((i=0; i < ${#FILES_2022[@]}; i++)); do
    git diff --no-index "2021/${FILES_2022[$i]}" "2022/${FILES_2022[$i]}" > "diff_2021-2022/${FILES_2022[$i]}.diff"
    DIFF_SIZE=(`wc -c "diff_2021-2022/${FILES_2022[$i]}.diff" | awk '{print $1}'`)
    if test $DIFF_SIZE -eq 0; 
    then 
        echo "Removing empty diff for ${FILES_2022[$i]}";
        rm "diff_2021-2022/${FILES_2022[$i]}.diff"
    fi
done