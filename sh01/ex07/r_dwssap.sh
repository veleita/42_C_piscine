cat /etc/passwd | sed '/^#/d; 1d; s/:.*//' | awk 'NR%2==0' | rev | sort -r | sed "$FT_LINE1"','"$FT_LINE2"'!d' | tr '\n' ' ' | sed 's/ /, /g; s#, $#.#' | tr -d '\n'
