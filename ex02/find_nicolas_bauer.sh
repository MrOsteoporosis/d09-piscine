cat $1 | grep -i "nicolas\sbauer" | grep -o '([0-9]\{3\})[0-9]\{3\}\-[0-9]\{4\}'
cat $1 | grep -i "nicolas\sbauer" | grep -o '[0-9]\{3\}\-[0-9]\{3\}\-[0-9]\{2\}'

