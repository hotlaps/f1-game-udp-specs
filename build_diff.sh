#!/bin/bash
FILES_2023=(`ls -1 2023`)

for ((i=0; i < ${#FILES_2023[@]}; i++)); do
    if test -f "2022/${FILES_2023[$i]}";
    then
        git diff --no-index "2022/${FILES_2023[$i]}" "2023/${FILES_2023[$i]}" > "diff_2022-2023/${FILES_2023[$i]}.diff"
        DIFF_SIZE=(`wc -c "diff_2022-2023/${FILES_2023[$i]}.diff" | awk '{print $1}'`)
        if test $DIFF_SIZE -eq 0; 
        then 
            echo "Removing empty diff for ${FILES_2023[$i]}";
            rm "diff_2022-2023/${FILES_2023[$i]}.diff"
        fi
    else
        echo "File was added in 2023";
        git diff --no-index "empty.h" "2023/${FILES_2023[$i]}" > "diff_2022-2023/${FILES_2023[$i]}.diff"
    fi
done