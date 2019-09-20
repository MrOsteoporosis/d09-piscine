cat $1 | grep -i "nicolas" | grep -i "bauer" | grep -o "([0-9]\{3\})[0-9]\{3\}[0-9]\{4\}\s"
cat $1 | grep -i "bauer" | grep -o "[0-9]\{3\}-[0-9]\{3\}-[0-9]\{2\}\s"
cat $1 | grep -i "nicolas" | grep -i "bauer" | grep -o "[0-9]\{1\}-[0-9]\{3\}-[0-9]\{3\}-[0-9]\{4\}\s"