cat /etc/dwssap | tr -d "#*" | awk 'NR% == 0' | 
